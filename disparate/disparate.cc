#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

//Techincally cheated a bit as I completed this excercise after the Sunday session where you explained it. No excuses, I flat out failed to submit in time.

int main (){
  
  //int_32 vals work as expected  
  int32_t big32 = 100'000'000;
  int32_t small32 = 1;
  int32_t sum32 = big32 + small32;

  cout << "int32_t:" << endl;
  cout << "  big   = " << big32   << endl;
  cout << "  small = " << small32 << endl;
  cout << "  sum   = " << sum32   << endl;

  //Float vals do not work as expected! Added value is truncated?
  float bigF = 100'000'000;
  float smallF = 1;
  float sumF = bigF + smallF;
  
  cout << endl <<  "float:" << endl;
  cout << "  big   = " << fixed << setprecision(1) << bigF   << endl;
  cout << "  small = " << fixed << setprecision(1) << smallF << endl;
  cout << "  sum   = " << fixed << setprecision(1) << sumF   << endl;

  //Float vals do not work as expected! Added value is truncated?
  float bigF1 = 100'000'000;
  float smallF1 = 1;
  float sumF1 = bigF1 + smallF1;
  
  //Handling this bty increasing setprecision to 9
  cout << endl << "float after expanding precision to 9:" << endl;
  cout << "  big   = " << fixed << setprecision(1) << bigF1   << endl;
  cout << "  small = " << fixed << setprecision(1) << smallF1 << endl;
  cout << "  sum   = " << fixed << setprecision(1) << sumF1   << endl;
  //Still doesn't work because apparently the max precision allowed in a float is 7 digits of precision



  //Attempting to rectifty this by expanding the data type to one w/ higher precision: float < int < double < long double
  double big2 = 100'000'000;
  double small2 = 1;
  double sum2 = big2 + small2;

  cout << endl << "DOUBLE:" << endl;
  cout << "  big   = " << fixed << setprecision(1) << big2   << endl;
  cout << "  small = " << fixed << setprecision(1) << small2 << endl;
  cout << "  sum   = " << fixed << setprecision(1) << sum2  << endl;
  //SUCCESS!

  //Finally trying rounding. Though it won't be as precise, at least you aren't losing any value
  float bigR = 100'000'000;
  float smallR = 1;
  int sumR = round(bigR + smallR);

  cout << endl << "ROUNDED:" << endl;
  cout << "  big   = " << fixed << setprecision(1) << bigR   << endl;
  cout << "  small = " << fixed << setprecision(1) << smallR << endl;
  cout << "  sum   = " << fixed << setprecision(1) << sumR  << endl;

  return 0;
}

