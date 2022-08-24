
#include "includes.h"
#include<iostream>
#include<vector>
#include<list>
#include <cstring>
#include<cassert>



int main() {
      int x[6] = { 1, 2, 3, 4, 5, 6};
      // initializing vector1 to x[0] to x[4]
      std::vector<int> vector1(&x[0], &x[6]);
      int sumOfInts = accumulate(vector1.begin(), vector1.end(), 0);
      assert  (sumOfInts == 21);
      std::cout << "----Ok!\n";
      double y[6] = {3.0 ,4.0 ,5.0, 6.0 ,7.0 , 8.1};
      std::list<double> list1(&y[0], &y[5]);
      double sumOfDoubles = accumulate(list1.begin(), list1.end(),0.0) ;
      assert  (sumOfDoubles - 31.1 <= 0.000000001);
      std::cout << "----Ok!\n";
      


      return 0;
}