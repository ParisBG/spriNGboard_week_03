#include <iomanip>
#include <iostream>
using namespace std;

void createDivTable(bool manualRound, int32_t val){
  // Output the header lines.
  cout << setw(5) << "";
  
  //Create column headers and show positive symbol for each
  for (int32_t numer = val; numer <= 10; ++numer) {
    cout << setw(4) << showpos << numer;
  }

  //Create the intitial dash
  cout << endl;
  cout << setfill('-') << setw(5) << "";
 
  //Fill the remaining blank space with dashes using setfill
  for (int32_t denom = val; denom <= 10; ++denom) {
    cout << setfill('-') << setw(4) << "";
  }
  
  cout << endl;
  cout << setfill(' '); // need to reset the fill character

  int32_t result = 0;

  for (int32_t numer = val; numer <= 10; ++numer){
    cout << setw(3) << showpos << numer << ": ";

    for (int32_t denom = val; denom <= 10; ++denom){
      if (denom == 0){
        continue;
      }

      if (manualRound == false){
        result = numer/denom;
      } else {
        //We could fix the int div truncation by manually rounding to the nearest int
        //This can be done be using C++'s int division to divide the denominator in half
        //Adding that result back to numer and dividing the total by the original denom will effectively round
        result = (numer + (denom / 2)) / denom;
      } 
        cout << setw(4) << result;
      }
       cout << endl;
    }
  }


int main(){
  cout << "Table showing truncated int div results 1 - 10:" << endl;
  createDivTable(false, 1);
  cout << endl;

  cout << "Table showing manually rounded int div results 1- 10:" << endl;
  createDivTable(true, 1);
  cout << endl;

  cout << "Table showing manually rounded int div results -10 - 10:" << endl;
  createDivTable(true, -10);
  cout << endl;

  return 0;
}
