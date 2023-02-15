#include <iomanip>
#include <iostream>
using namespace std;
//Appears to be exactly the same except the actual division is done using floats instead of int32_t

int main (){
  // Output the header lines.

  cout << setw(5) << "";
  for (int32_t denom=-10; denom<=10; ++denom) {
    cout << setw(5) << showpos << denom;
  }
  cout << endl;

  cout << setfill('-') << setw(5) << "";
  for (int32_t denom=-10; denom<=10; ++denom) {
    cout << setfill('-') << setw(5) << "";
  }
  cout << endl;
  cout << setfill(' '); // need to reset the fill character

  // Fill in the table rows.

  for (float numer=-10; numer<=10; ++numer){
    cout << setw(5) << showpos << static_cast<int>(numer) << ": ";
    
    for (float denom=-10; denom<=10; ++denom){
      if (denom == 0){
        continue;
      }
      float result = numer/denom;
      //The keyword scientific was apparently added to display results in scientific notation
      cout << setw(5) << showpos << setprecision(3) << result;
      //With scientif and setprecision(3) the decimal place is in the wrong place on results
      //Removing scientic shows proper values but without scientific notation
    }
      cout << endl;
  }
}

