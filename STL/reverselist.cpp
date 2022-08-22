#include <iostream>
#include <cstring>
#include <list> 
#include <cassert> // for assert Macro 
#include <algorithm>// for reverse algorithm
using namespace std;
// constructing a container from the string using generic function 
template <typename Container>
Container make (const char s[]){
 return Container (&s[0], &s[strlen(s)]);
}
int main(){
      cout << "demonstrating generic reverse algorithm on a list  \n";
      list<char> list1 = make < list<char>>("ABCDEF");
      reverse(list1.begin(), list1.end());
      assert(list1 == make < list<char>>("FEDCBA"));
      cout << "----OK!"<< endl;
      return 0
      ;}