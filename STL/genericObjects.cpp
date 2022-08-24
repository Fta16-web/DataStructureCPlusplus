#include<iostream>
#include<vector>
#include<cassert> // for assert Macro
#include<numeric>// for generic accumelate
int mult (int x ,int y){return x*y;};
using namespace std;
int main() {
      std::cout << "Using generic accumelate algorithm to\n"
                  << "to compute a product\n";
      int x[5] = {2, 3, 5, 7, 11};
      std::vector<int> vector1 (&x[0],&x[5]);// initialize x[0] through x[4]
      int product = accumulate(vector1.begin(), vector1.end(),1, mult);
      assert(product == 2310);
      std::cout << "---ok!\n";
      std::cout << std::endl;
      return 0;
}
