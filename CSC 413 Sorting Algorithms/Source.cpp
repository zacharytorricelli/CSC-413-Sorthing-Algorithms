/**********************************************************************************************************************************************************************************
*
* Zachary Torricelli
* Due March 6, 2019
* CSC 413 - Dr. Zhou
*
* For this project, you will 6 different sorting algorithms to sort arrays.
* 
* The sorting algorithms that will be implemented are:
*	1. Selection Sort
*	2. Bubble Sort
*	3. Insertion Sort
*	4. Merge Sort
*	5. Quick Sort
*	6. Heap Sort
*
**********************************************************************************************************************************************************************************/


// Include statements and using directive
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <array>
#include <algorithm>


using namespace std;


// Function prototypes 
void selectionSort(int[], int);
void bubbleSort(int[], int);
void insertionSort(int[], int);
void merge(int[], int, int, int);
void mergeSort(int[], int, int);
int partition(int[], int, int);
void quickSort(int[], int, int);
void heapify(int[], int, int);
void heapSort(int[], int);
void print(int[], int);



// Main Driver Function
int main() {


	// Declares variables and arrays to be sorted in the main function
	int nullArray[100] = { NULL };
	int oneElementArray[1] = { 20 };
	int twoElementArray[2] = { 20, 30 };
	int eightElementArray[8] = { 20, 30, 10, 80, 60, 50, 40, 70 };
	int size1 = 100;
	int size2 = 1;
	int size3 = 2;
	int size4 = 8;
	int choice = 7;


	// Displays a welcome message to the console
	cout << "Welcome to Zac's Sorting Algorithms!" << endl;
	cout << "Please enter a number (1-7)." << endl << endl;


	do
	{

		// Displays a menu to the console
		cout << "1. Selection Sort" << endl;
		cout << "2. Bubble Sort" << endl;
		cout << "3. Insertion Sort" << endl;
		cout << "4. Merge Sort" << endl;
		cout << "5. Quick Sort" << endl;
		cout << "6. Heap Sort" << endl;
		cout << "7. Exit" << endl << endl;


		cin >> choice;


		// Makes sure the user inputs a valid option
		while (cin.fail())
		{

			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << endl << "Please enter a number (1-7)." << endl << endl;
			cin >> choice;

		}


		switch (choice)
		{

			// Case 1 will perform Selection Sort
		case 1:

			system("CLS");

			cout << "_______________________________" << endl << endl;

			cout << "Original Arrays" << endl << endl;

			cout << "_______________________________" << endl << endl;

			// Calls the print function to print the original arrays
			print(nullArray, size1);
			print(oneElementArray, size2);
			print(twoElementArray, size3);
			print(eightElementArray, size4);

			// Calls the Selection Sort function to sort the arrays
			selectionSort(nullArray, size1);
			selectionSort(oneElementArray, size2);
			selectionSort(twoElementArray, size3);
			selectionSort(eightElementArray, size4);
			
			cout << "_______________________________" << endl << endl;
			
			cout << "Sorted Arrays -- Selection Sort" << endl << endl;

			cout << "_______________________________" << endl << endl;

			// Calls the print function to print the sorted arrays
			print(nullArray, size1);
			print(oneElementArray, size2);
			print(twoElementArray, size3);
			print(eightElementArray, size4);

			break;


			// Case 2 will perform Bubble Sort
		case 2:

			system("CLS");

			cout << "_______________________________" << endl << endl;

			cout << "Original Arrays" << endl << endl;

			cout << "_______________________________" << endl << endl;

			// Calls the print function to print the original arrays
			print(nullArray, size1);
			print(oneElementArray, size2);
			print(twoElementArray, size3);
			print(eightElementArray, size4);
			
			// Calls the Bubble Sort function to sort the arrays
			bubbleSort(nullArray, size1);
			bubbleSort(oneElementArray, size2);
			bubbleSort(twoElementArray, size3);
			bubbleSort(eightElementArray, size4);

			cout << "_______________________________" << endl << endl;

			cout << "Sorted Arrays -- Bubble Sort" << endl << endl;

			cout << "_______________________________" << endl << endl;

			// Calls the print function to print the sorted arrays
			print(nullArray, size1);
			print(oneElementArray, size2);
			print(twoElementArray, size3);
			print(eightElementArray, size4);

			break;


			// Case 3 will perform Insertion Sort
		case 3:

			system("CLS");

			cout << "_______________________________" << endl << endl;

			cout << "Original Arrays" << endl << endl;

			cout << "_______________________________" << endl << endl;

			// Calls the print function to print the original arrays
			print(nullArray, size1);
			print(oneElementArray, size2);
			print(twoElementArray, size3);
			print(eightElementArray, size4);

			// Calls the Insertion Sort function to sort the arrays
			insertionSort(nullArray, size1);
			insertionSort(oneElementArray, size2);
			insertionSort(twoElementArray, size3);
			insertionSort(eightElementArray, size4);

			cout << "_______________________________" << endl << endl;

			cout << "Sorted Arrays -- Insertion Sort" << endl << endl;

			cout << "_______________________________" << endl << endl;

			// Calls the print function to print the sorted arrays
			print(nullArray, size1);
			print(oneElementArray, size2);
			print(twoElementArray, size3);
			print(eightElementArray, size4);

			break;

			// Case 4 will perform Merge Sort
		case 4:

			system("CLS");

			cout << "_______________________________" << endl << endl;

			cout << "Original Arrays" << endl << endl;

			cout << "_______________________________" << endl << endl;

			// Calls the print function to print the original arrays
			print(nullArray, size1);
			print(oneElementArray, size2);
			print(twoElementArray, size3);
			print(eightElementArray, size4);

			// Calls the Merge Sort function to sort the arrays
			mergeSort(nullArray, 0, size1 - 1);
			mergeSort(oneElementArray, 0, size2 - 1);
			mergeSort(twoElementArray, 0, size3 - 1);
			mergeSort(eightElementArray, 0, size4 - 1);

			cout << "_______________________________" << endl << endl;

			cout << "Sorted Arrays -- Merge Sort" << endl << endl;

			cout << "_______________________________" << endl << endl;

			// Calls the print function to print the sorted arrays
			print(nullArray, size1);
			print(oneElementArray, size2);
			print(twoElementArray, size3);
			print(eightElementArray, size4);

			break;


			// Case 5 will perform Quick Sort
		case 5:

			system("CLS");

			cout << "_______________________________" << endl << endl;

			cout << "Original Arrays" << endl;

			cout << "_______________________________" << endl << endl;

			// Calls the print function to print the original arrays
			print(nullArray, size1);
			print(oneElementArray, size2);
			print(twoElementArray, size3);
			print(eightElementArray, size4);

			// Calls the Quick Sort function to sort the arrays
			quickSort(nullArray, 0, size1 - 1);
			quickSort(oneElementArray, 0, size2 - 1);
			quickSort(twoElementArray, 0, size3 - 1);
			quickSort(eightElementArray, 0, size4 - 1);

			cout << "_______________________________" << endl << endl;

			cout << "Sorted Arrays -- Quick Sort" << endl << endl;

			cout << "_______________________________" << endl << endl;

			// Calls the print function to print the sorted arrays
			print(nullArray, size1);
			print(oneElementArray, size2);
			print(twoElementArray, size3);
			print(eightElementArray, size4);

			break;


			// Case 6 will perform Heap Sort
		case 6:

			system("CLS");

			cout << "_______________________________" << endl << endl;
			
			cout << "Original Arrays" << endl << endl;

			cout << "_______________________________" << endl << endl;

			// Calls the print function to print the original arrays
			print(nullArray, size1);
			print(oneElementArray, size2);
			print(twoElementArray, size3);
			print(eightElementArray, size4);

			// Calls the Heap Sort function to sort the arrays
			heapSort(nullArray, size1);
			heapSort(oneElementArray, size2);
			heapSort(twoElementArray, size3);
			heapSort(eightElementArray, size4);

			cout << "_______________________________" << endl << endl;

			cout << "Sorted Arrays -- Heap Sort" << endl << endl;

			cout << "_______________________________" << endl << endl;

			// Calls the print function to print the sorted arrays
			print(nullArray, size1);
			print(oneElementArray, size2);
			print(twoElementArray, size3);
			print(eightElementArray, size4);

			break;


			// Case 7 will exit the program
		case 7:

			exit(0);


			// Default case will collect the invalid options input and let the user try again
		default:

			system("CLS");
			cout << "Invalid selection. Try again" << endl;

		}

	} while (choice != 7);



	system("pause");
	return 0;

}



// Selection sort function to sort the numbers
void selectionSort(int array[], int size)
{

	if (array[0] == NULL)
	{

		return;

	}

	// Variable declaration for this function
	int index;
	int temp;
	

	// Beginning of for loop
	for (int i = 0; i < size - 1; i++)
	{

		// Assumes first element is the smallest
		index = i;

		for (int j = i + 1; j < size; j++)
			
			if (array[j] < array[index])
				index = j;

		temp = array[index];
		array[index] = array[i];
		array[i] = temp;

	} // End of for loop


}



// Bubble sort function to sort the numbers
void bubbleSort(int array[], int size)
{

	if (array[0] == NULL)
	{

		return;

	}

	// Variable declaration for this function
	int temp;
	

	// Beginning of outer for loop
	for (int i = 1; i < size; i++)
	{

		// Beginning of inner for loop
		for (int j = 0; j < size - i; j++)
			
			if (array[j] > array[j + 1])
			{

				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;


			} // End of inner for loop

	} // End of outer for loop


}



// Insertion sort function to sort the numbers
void insertionSort(int array[], int size)
{

	if (array[0] == NULL)
	{

		return;

	}

	// Variable declaration for this function
	int index;
	int temp;


	// Beginning of outer for loop
	for (int i = 1; i < size; i++)
		
		if (array[i] < array[i - 1])
		{

			temp = array[i];
			index = i;

			// Inner do-while loop
			do
			{

				array[index] = array[index - 1];
				index--;

			} while (index > 0 && array[index - 1] > temp);

			array[index] = temp;


		} // End of outer for loop


}



// Merge function to combine the two subarrays
void merge(int array[], int leftIndex, int middleIndex, int rightIndex)
{

	if (array[0] == NULL)
	{

		return;

	}

	int i = leftIndex;
	int j = middleIndex + 1;
	int k = 0;
	int temp[8];
	temp[rightIndex - leftIndex + 1];

	while (i <= middleIndex && j <= rightIndex)
	{

		if (array[i] < array[j])
		{

			temp[k] = array[i];
			k++;
			i++;

		}

		else
		{

			temp[k] = array[j];
			k++;
			j++;

		}

	}

	while (i <= middleIndex)
	{

		temp[k] = array[i];
		k++;
		i++;

	}

	while (j <= rightIndex)
	{

		temp[k] = array[j];
		k++;
		j++;

	}

	for (i = leftIndex; i <= rightIndex; i++)
	{

		array[i] = temp[i - leftIndex];

	}

}



// Merge Sort function to sort the numbers
void mergeSort(int array[], int leftIndex, int rightIndex)
{


	// Variable declaration in this function
	int middleIndex;


	// If statement to compare the size of the elements to the left and to the right
	if (leftIndex < rightIndex)
	{
		
		middleIndex = (rightIndex + leftIndex) / 2;

		mergeSort(array, leftIndex, middleIndex);
		
		mergeSort(array, middleIndex + 1, rightIndex);

		merge(array, leftIndex, middleIndex, rightIndex);

	}

}



// Partition function used to find and return the pivot for Quick Sort
int partition(int array[], int lowestValue, int highestValue)
{

	if (array[0] == NULL)
	{

		return 0;

	}

	// Variable declaration in this function
	int pivot = array[highestValue];
	int i = lowestValue - 1;

	
	for (int j = lowestValue; j <= highestValue - 1; j++)
	{

		if (array[j] <= pivot)
		{

			i++;
			swap(array[i], array[j]);

		}

	}

	swap(array[i + 1], array[highestValue]);

	return i + 1;

}



// Quick Sort function to sort the numbers
void quickSort(int array[], int lowestValue, int highestValue)
{

	if (array[0] == NULL)
	{

		return;

	}

	// Variable declaration in this function
	int pivot = 0;

	if (lowestValue < highestValue)
	{

		pivot = partition(array, lowestValue, highestValue);

		quickSort(array, lowestValue, pivot - 1);

		quickSort(array, pivot + 1, highestValue);

	}

}



// Heapify function used to heapify a subtree for Heap Sort
void heapify(int array[], int size, int i)
{

	if (array[0] == NULL)
	{

		return;

	}

	// Variable declaration in this function
	int root = i;
	int leftLeaf = 2 * i + 1;
	int rightLeaf = 2 * i + 2;


	// Compares the size of left leaf to the root
	if (leftLeaf < size && array[leftLeaf] > array[root])
	{

		root = leftLeaf;

	}


	// Compares the size of the right leaf to the root
	if (rightLeaf < size && array[rightLeaf] > array[root])
	{

		root = rightLeaf;

	}

	// Determines if the root the is largest
	if (root != i)
	{

		swap(array[i], array[root]);

		heapify(array, size, root);

	}

}



// Heap Sort function to sort the numbers
void heapSort(int array[], int size)
{

	if (array[0] == NULL)
	{

		return;

	}

	for (int i = size / 2 - 1; i >= 0; i--)
	{

		heapify(array, size, i);

	}

	for (int j = size - 1; j >= 0; j--)
	{

		swap(array[0], array[j]);

		heapify(array, j, 0);

	}


}



// Print function to print the arrays
void print(int array[], int size)
{

	if (array[0] == NULL)
	{

		cout << "0 (Cannot sort a null array.)" << endl << endl;
		return;

	}
	
	// For loop to print the array
	for (int i = 0; i < size; i++)
	{

		cout << setw(3) << array[i] << setw(3);


	}


	// Adds two lines of space
	cout << endl << endl;


}

