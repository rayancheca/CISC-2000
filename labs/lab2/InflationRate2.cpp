#include <iostream>
#include <iomanip>
using namespace std;

float calculateInflationRate(float previousCPI, float currentCPI)
{
    if (previousCPI <= 0 || currentCPI <= 0)
        return 0;
    else
        return ((currentCPI - previousCPI) / previousCPI)*100;
}

int main()
{
    float previousCPI, currentCPI, sumOfInflationRates = 0;
    int numOfCalculations = 0;
    char userInput;

    do
    {
        cout << "Enter the old and new consumer price indices: ";
        cin >> previousCPI >> currentCPI;
        while(previousCPI <= 0 || currentCPI <= 0){
            cout << "Error: CPI values must be greater than 0" << endl;
            cout << "Enter the old and new consumer price indices: ";
            cin >> previousCPI >> currentCPI;
        }
        float inflationRate = calculateInflationRate(previousCPI, currentCPI);

     // cout << endl;
        cout << "Inflation rate is " << inflationRate << endl;
      //cout << endl;

        sumOfInflationRates += inflationRate;
        numOfCalculations++;

        cout << "Try again? (y or n): ";
        cin >> userInput;

    } while (userInput != 'n');

    float averageInflationRate = sumOfInflationRates / numOfCalculations;

   // cout << endl;
    cout << "Average inflation rate is " << averageInflationRate << endl;
//    cout << endl;

    return 0;
}
