#include <iostream>
using namespace std;
int main() {
   float lengthCentimeters;
   
   // Our tests will run your program with input 17.97, then run again with input 30.8, then with other values.
   // Your program should work for any input, though.
   cin >> lengthCentimeters;
   
   if ((lengthCentimeters >= 23.7) && (lengthCentimeters <=71.8)){
      cout << "Choose" << endl;
   }
   else{
      cout << "Pass" << endl;
   }
   
   return 0;
}