/*STL generic algorithm merge: combining elements of two sorted sequences into a single sorted seguence  
 merge(first1, last1, first2,last2,result);
 result contains all elements of the two input sequences and is also in asending order 

*/
#include<iostream>
#include<cassert>
#include<list>
#include<deque>
#include<algorithm>
#include<cstring>
#include "make.h"
using namespace std;

int main(){
    std::cout << "Demonstrating generic merge algorithm with"<<
     "an array, a list, and deque \n ";
     char s[] = "abcdeg";
     int len = strlen(s);
   list<char> list1 = make <list<char>>("fhij");
   // initializing deque1 with 10 copies of letter x :
   deque<char> deque1(10,'x');// for holding result of merging array s and list1 
   //Merge array s and list1, putting result in deque1":
   merge(&s[0],&s[len],list1.begin(),list1.end(),deque1.begin());
   assert (deque1 == make < deque<char>>("abcdefghij"));
      cout << "---OK!"<< endl;

  std::cout << "Demonstrating generic merge algorithm with\n"<<
     " parts of an array and a deque and putting result into a list \n ";    
  list<char> list2(26,'x');
  char s2[] = "acegikm";
  deque<char> deque2 = 
       make<deque<char>>("bdfhjlnopqrstuvwxyz");
  
  // merging first 5 letters in array with 10 in deque1, putting result in list1
  merge(&s2[0],&s2[5], deque2.begin(),deque2.begin()+10, list2.begin());
  assert(list2 == make<list<char>>("abcdefghijlnopqxxxxxxxxxxx"));
    cout << "---OK!"<< endl;





      return 0;
}