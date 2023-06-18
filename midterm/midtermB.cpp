/*
              Name: Rayan Checa
        Assignment: midtermB
	      Due Date: 03/03/2023	       
              File: midtermB.cpp
*/

#include <iostream>

using namespace std;

//Function to find the number of values stored that is less that 0 
//and the number greater than 0 in a partially filled array of int, which
// uses the special sentinel value 0 to indicate the end of the array
void findGreaterAndLess(int arr[], int& less, int& greater);

int main()
{
    int a[] = {-15,23,32,-12,10,9,-43,5,-999,0};
    int less,greater;
    findGreaterAndLess(a, less, greater);
    cout << "Number of values less than 0 is " << less << endl;
    cout << "Number of values greater than 0 is " << greater << endl;
    return 0;
}

void findGreaterAndLess(int arr[], int& less, int& greater)
{
    less = 0;
    greater = 0;
    int i = 0;
    while(arr[i] != 0)
    {
        if(arr[i] < 0)
        {
            less++;
        }
        else if(arr[i] > 0)
        {
            greater++;
        }
        i++;
    }
}
