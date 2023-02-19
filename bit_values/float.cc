#include <iomanip>
#include <iostream>
using namespace std;

int main (){
  //In binary 0b10100000100011010010101011110100
  int64_t x = 2695506604;

  //In binary: 0b10100000001011011001100100011100
  int64_t y = 2693408940;
  
  cout << endl << "x(before bit manip) = " << x << endl;
  cout << "y(before bit manip) = " << y << endl;

  //To first toggle bit 3 we need a mask putting a one in the 2^2 position
  int mask = 1 << 2;
  
  //In binary the mask is: 0100
  //Now we apply the mask to x using bitwise XOR
  x ^= mask;
  y ^= mask;

  //If there is a one in the 3rd bit of orgi integer than the mask will change it to 0 otherwise 1
  //Essentially we just subtracted 4 from our value

  //float fx = reinterpret_cast<float&>(x);
  //float fy = reinterpret_cast<float&>(y);
  
  cout << endl << "x(toggle bit 3) = " << x << endl;
  cout << "y(toggle bit 3) = " << y << endl << endl;
  
  // cout << endl << "fx = " << showpos << scientific << setprecision(8) << fx << endl;
  // cout << "fy = " << showpos << scientific << setprecision(8) << fy << endl << endl;

  //Should revert the values back to before (effectively adding 4) 
  x ^= mask;
  y ^= mask;
  
  cout << endl << "x(toggle bit 3 again) = " << x << endl;
  cout << "y(toggle bit 3 again) = " << y << endl << endl;
 
  mask = ~(1 << 7);
  mask = ~(1 << 7);
  
  x &= mask;
  y &= mask;
  
  cout << endl << "x(clear bit 7) = " << x << endl;
  cout << "y(clear bit 7) = " << y << endl << endl;
 
  mask = ~(1 << 16);
  int mask2 = ~(1 << 31);

  x ^= mask;
  y ^= mask;
  
  cout << endl << "x(clear bit 16-31) = " << x << endl;
  cout << "y(clear bit 16-31) = " << y << endl << endl;

 return 0;

}

