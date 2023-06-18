/*
2	              Name: Rayan Checa
3	        Assignment: Dynamic
4	          Due Date: 02/24/2023
5	       Description: 
6	              File: Dynamic.cpp
7	*/

#include <iostream>

using namespace std;

//function that reads a sequence of integers from input to fill a dynamically allocated array.
//Store the items and return a pointer to the array.
int* ReadNumberSequence( int& size );

int main()
{

    int size;
    int* arr;

    arr = ReadNumberSequence(size);

    for ( int i = 0; i < size; i++ )
        cout << arr[i] << endl;

    delete[] arr;

    return 0;
}

int* ReadNumberSequence( int& size )
{
    int* array = NULL; 

    do 
    {
        cout << "Enter the length of the number sequence:";
        cin >> size;
    } while ( size <= 0 );

    array = new int[size];

    cout << "Enter " << size << " number of elements to store in the array: ";

    for (int i = 0; i < size; i++) 
        cin >> array[i];

    return array;
}
