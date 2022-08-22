#include <iostream>
#include <cstring>
#include <vector> 
#include <cassert> // for assert Macro 
#include <algorithm>// for reverse algorithm
using namespace std;
// constructing a container from the string using generic function 
template <typename Container>
Container make (const char s[]){
 return Container (&s[0], &s[strlen(s)]);
}
int main(){
      cout << "Using reverse algorithm with a vector \n";
      vector <char> vector1 = make <vector<char>>("Simon Fraser");
      reverse(vector1.begin(), vector1.end());
      assert(vector1 == make < vector<char>>("resarF nomiS"));
      cout << "---OK!"<< endl;
      return 0;
}