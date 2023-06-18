#include <iomanip>
#include <iostream>

using namespace std;

float calculateInflationRate(float previousCPI, float currentCPI);


int main()
{
    float previousCPI, currentCPI;

    //cout << endl;
    cout << "Enter the old and new consumer price indices: ";
    cin >> previousCPI;
   // cout << setw( 43 ) << "Enter the current consumer price index: " << setw(5);
    cin >> currentCPI;

    float inflationRate = calculateInflationRate(previousCPI, currentCPI);

   // cout << endl;
    cout << "Inflation rate is " << inflationRate << endl;
    cout << endl;

    return 0;
}

float calculateInflationRate(float previousCPI, float currentCPI)
{
    if (previousCPI <= 0 || currentCPI <= 0)
        return 0;
    else
        return ((currentCPI - previousCPI) / previousCPI)*100;

}
