#include<iostream>
#include<cassert> // for assert Macro
#include<algorithm>// for find 
#include<cstring>
#include<vector>
#include<list>
using namespace std;
template <typename Container>
Container make (const char s[]){
 return Container (&s[0], &s[strlen(s)]);
}
int main(){
      cout << "Demonstrating generic type find algorihm with "
            << "an array\n";
      char s[] = "C++ is a better C";
      int len = strlen(s);
      // searching for the first occurrence of 'e'
      // if find can not find the argument it return &s[len] which is a one position past the end of array
      const char* where = find (&s[0], &s[len],'e');
      assert(*where == 'e' && *(where + 1) == 't'); 
      cout << " --- ok. generic find with array!" << endl;
       cout << "Demonstrating generic type find algorihm with "
            << "a vector\n";
      vector<char> vector1 = make<vector<char>> ("C++ is a better C");
      vector<char> ::iterator
         where2 = find(vector1.begin(),vector1.end(),'e');
       assert(*where2 == 'e' && *(where2 + 1) == 't'); 
      cout << " --- ok. generic find with vector!" << endl;
      cout << "Demonstrating generic type find algorihm with "
            << "a list\n";
      list<char> list1 = make <list<char>> ("C++ ia better C");
      list<char>::iterator 
       where3 = find(list1.begin(),list1.end(),'e');
       list<char>::iterator next = where3;
       ++next;
       assert(*where3 == 'e' && *next == 't');
       cout << "--- oK! generic find list " << endl;
      return 0;
}