#include <iomanip>
#include <iostream>

using namespace std;

//function to prompt the user to enter old and new cpi values
void getCPIValues(float &previousCPI, float &currentCPI);

//function takes in the old and new values for CPI and returns the infltion rate
float calculateInflationRate(float previousCPI, float currentCPI);

/*The sawp() function will be used in the sort_array() function in order 
to swap 2 values if the first one is larger than the next*/
void swap_values(float &v1, float &v2);

/*Function used to sort the array of CPI's using selection sort. From smallest
to largest*/
void sort_array(float nums[], int size);

/*function used to find the median of the inflation rates after
being sorted by the sort_array() function and stored in an array*/
float findMedianRate(float rates[], int numRates);

int main() 
{
    float previousCPI, currentCPI, sumOfInflationRates = 0;
    int numOfCalculations = 0;
    char userInput;
    float rates[20];

    do 
    {
        getCPIValues(previousCPI, currentCPI);
        float inflationRate = calculateInflationRate(previousCPI, currentCPI);
        cout << "Inflation rate is " << inflationRate << endl;
        rates[numOfCalculations] = inflationRate;
        sumOfInflationRates += inflationRate;
        numOfCalculations++;
        cout << "Try again? (y or n): ";
        cin >> userInput;

    } while (userInput != 'n');

    float averageInflationRate = sumOfInflationRates / numOfCalculations;
    float medianRate = findMedianRate(rates, numOfCalculations);

    cout << "Average rate is " << averageInflationRate << endl;
    cout << "Median rate is " << medianRate << endl;
    cout << "Sorted inflation rates" << endl;
    for (int i = 0; i < numOfCalculations; i++)
        cout << rates[i] << endl;

    return 0;
}
void getCPIValues(float &previousCPI, float &currentCPI) 
{
    cout << "Enter the old and new consumer price indices: ";
    cin >> previousCPI >> currentCPI;
    while (previousCPI <= 0 || currentCPI <= 0) 
    {
        cout << "Error: CPI values must be greater than 0" << endl;
        cout << "Enter the old and new consumer price indices: ";
        cin >> previousCPI >> currentCPI;
    }
}

float calculateInflationRate(float previousCPI, float currentCPI) 
{
    if (previousCPI <= 0 || currentCPI <= 0)
        return 0;
    else
        return ((currentCPI - previousCPI) / previousCPI) * 100;
}

void swap_values(float &v1, float &v2) 
{
    float temp = v1;
    v1 = v2;
    v2 = temp;
}

void sort_array(float nums[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = 0; j < size - 1; j++) 
        {
            if (nums[j] > nums[j + 1]) 
            {
                swap_values(nums[j], nums[j + 1]);
            }
        }
    }
}

float findMedianRate(float rates[], int numRates)
{
    float medianRate;

    sort_array(rates, numRates);

    if (numRates % 2 != 0) 
    {
        medianRate = rates[numRates / 2];
    }else
    {
        float rate1 = rates[numRates / 2];
        float rate2 = rates[(numRates / 2) - 1];
        medianRate = (rate1 + rate2) / 2;
    }

    return medianRate;
}

