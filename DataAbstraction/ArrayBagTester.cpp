#include<iostream>
#include<string>
#include "ArrayBag.h"
using std::string, std::cout, std::endl;;
int main(){

ArrayBag<string> bag;
cout << "The bag contains "<<bag.getCurrentSize()<<" elements" << std::endl;
bag.add("Farhad");
cout << "The bag contains "<<bag.getCurrentSize()<<" elements"<< " elements." << std::endl;
}