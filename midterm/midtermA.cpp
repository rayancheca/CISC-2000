/*
              Name: Rayan Checa
        Assignment: midtermA
	      Due Date: 03/03/2023	       
              File: midtermA.cpp
*/

#include <iostream>

using namespace std;

// Function to swap two integers using pointers
void swap(int* ptr1, int* ptr2);

// Function to reverse an array
void reverse(int a[], int size);

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / 4;

    // Reverse the array
    reverse(a, size);

    // Print the reversed array
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

void swap(int* ptr1, int* ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void reverse(int a[], int size)
{
    for(int i = 0; i < size / 2; i++)
    {
        swap(&a[i], &a[size-i-1]);
    }
}