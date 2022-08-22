#include <iostream>
#include <cstring> 
#include <cassert> // for assert Macro 
#include <algorithm>// for reverse algorithm
using namespace std;
int main(){
    string string1 = "Simon Fraser";  
   cout << " Using reverse algorithm with a string -->"<<string1<<"\n";
   reverse(string1.begin(),string1.end());
   assert(string1 == "resarF nomiS");
   cout << string1 << "----OK!\n";
   cout << " Using reverse algorithm with an array\n" ;
   char array1[] = "Simon Fraser";
   int N1 = strlen(array1);
   reverse(&array1[0], &array1[N1]);// passing address of locations
   assert(string(array1) == "resarF nomiS");// checking string value 
   // convert to string first to prevent cheking equality of pointers 
   cout << string(array1) << "----OK!\n";
      return 0;
}
/* begin() and end() are member functions of string class return iterators which are
      pointers like objects.
    assert Macro --> takes a boolean expression as an argument   

   */ 