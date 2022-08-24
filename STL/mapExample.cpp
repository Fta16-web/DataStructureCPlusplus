#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
      map <string,long> directory;// string as key, long associated type
      directory["Bogart"] = 12345L;
      directory["Bacall"] = 12346L;
      directory["Cagney"] = 12347L;
      
      string name;
      while (cin >> name ){
            // find() returns an iterator that refers to the entry 
            //to the table with a name as its key if entry does not exists return "off-the-end" iterator
            if (directory.find(name) != directory.end() )
                  cout << "For "  << name << " Phone # = " << directory[name] << "\n";
            else 
                  cout << "Sorry! No listing for "<< name <<"\n";
      }
      cout <<endl;
      return 0;// ctrl + c to kill 
}