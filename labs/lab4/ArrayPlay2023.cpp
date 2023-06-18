/*
              Name: Rayan Checa
        Assignment: IntArrayPlay2023
          Due Date: 02/17/2023
       Description: 
              File: IntArrayPlay2023.cpp
*/

#include <iostream>
using namespace std;

//Function to fill an int array with values entered by the user. 
//Stops reading when the user inputs -1 or CAPACITY is reached.
void fillArray(int array[], int &numElems, const int CAPACITY);

//Function to print elements of array separated by a space, ending with newline
void printArray(int array[], int numElems);

//Function to check if array is sorted (low to high).
//Returns a Boolean, indicating if the array is sorted (low to high).
bool IsSorted(int array[], int numElems);

//Function to read a value from the user and insert it into the array 
//If the array is sorted, put it in the proper location, keeping the order
//If the array is not sorted, you may put it at the end.
void insertIntoArray(int array[], int &numElems, const int CAPACITY);

//Function to read a value from the user and delete it from the array, if it is there. 
//If it is not there, print "Not found\n", and return (don’t change the array)
//If the array is sorted, be sure to maintain the order. 
//If the array is not sorted, replace the found element with the last element.
void deleteFromArray(int array[], int &numElems);

//Function to sort an array using Bubble Sort or Selection Sort
//Bubble sort compares adjacent elements and swaps them if they are not in order
//Selection sort finds the minimum element in each iteration and swaps it with the first element
void sortArray(int array[], int numElems);

//Function to reverse the elements of an array
void reverseArray(int array[], int numElems);

int main()
{
    const int CAPACITY=20;
    int numArray[CAPACITY];   // an int array with a given CAPACITY
  // numArray can be partially filled, (so use numArrayElems below)

    int numArrayElems=0; // the array is initially empty, i.e., contains 0 elements
  // Actual number of elements stored

    fillArray(numArray, numArrayElems, CAPACITY);

    printArray(numArray, numArrayElems);

    bool sorted = IsSorted(numArray, numArrayElems);

    if (sorted)
		cout << "Array is sorted" << endl;
	else
		cout << "Array is not sorted" << endl;

    insertIntoArray(numArray, numArrayElems, CAPACITY);

    printArray(numArray, numArrayElems);

    deleteFromArray(numArray, numArrayElems);

    printArray(numArray, numArrayElems);

    sortArray(numArray, numArrayElems);

    if (!sorted)
	{
		sortArray(numArray, numArrayElems);
		printArray(numArray, numArrayElems);
		if (IsSorted(numArray, numArrayElems))
			cout << "Array is sorted" << endl;
		else
			cout << "Array is not sorted" << endl;
	}

    reverseArray(numArray, numArrayElems);

	cout << "Reversing the Array is: " << endl;
    
    printArray(numArray, numArrayElems);

return 0;
}

void fillArray(int array[], int &numElems, const int CAPACITY)
{
	int i = 0;
	cout << "Enter non-negative integers. End with -1: ";
	while(i < CAPACITY && array[i-1] != -1)
	{
		cin >> array[i];
		i++;
	}
	numElems = i-1; //because -1 will be stored as well
}

void printArray(int array[], int numElems)
{
	for (int i = 0; i < numElems; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

bool IsSorted(int array[], int numElems)
{
	for (int i = 0; i < numElems - 1; i++)
	{
		if (array[i] > array[i+1])
			return false;
	}
	return true;
}

void insertIntoArray(int array[], int &numElems, const int CAPACITY)
{
	int num;
	cout << "Enter a value to insert: ";
	cin >>num;
	if (numElems < CAPACITY)
	{
		if (IsSorted(array, numElems))
		{
			//Find the location to add the number
			int i = 0;
			while (i < numElems && array[i] < num)
			{
				i++;
			}
			//Shift all elements from i to the end to the right
			for (int j = numElems; j >= i; j--)
			{
				array[j+1] = array[j];
			}
			//Insert the element
			array[i] = num;
			numElems++;
		}
		else
		{
			array[numElems] = num;
			numElems++;
		}
		
	}
	else
	{
		cout << "Array is full!" << endl;
	}
}

void deleteFromArray(int array[], int &numElems)
{
	int num;
	cout << "Enter a value to delete: ";
	cin >>num;
	int i = 0;
	bool found = false;
	while (i < numElems && !found)
	{
		if (array[i] == num)
		{
			found = true;
		}
		else
		{
			i++;
		}
	}
	if (found)
	{
		if (IsSorted(array, numElems))
		{
			for (int j = i; j < numElems; j++)
			{
				array[j] = array[j+1];
			}
			numElems--;
		}
		else
		{
			array[i] = array[numElems-1];
			numElems--;
		}
	}
	else
	{
		cout << "Not found" << endl;
	}
}

void sortArray(int array[], int numElems)
{
	//Bubble Sort
	for (int i = 0; i < numElems - 1; i++)
	{
		for (int j = 0; j < numElems - 1; j++)
		{
			if (array[j] > array[j+1])
			{
				//Swap elements
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}

	//Selection Sort
	/*for (int i = 0; i < numElems - 1; i++)
	{
		int min = I;
		for (int j = i+1; j < numElems; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		//Swap elements
		int temp = array[I];
		array[I] = array[min];
		array[min] = temp;
	}*/
}

void reverseArray(int array[], int numElems)
{
	for (int i = 0; i < numElems / 2; i++)
	{
		//Swap elements
		int temp = array[i];
		array[i] = array[numElems -1 - i];
		array[numElems - 1 - i] = temp;
	}
}