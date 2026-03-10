// Bubble Sort Algorithm in C++ //

#include <iostream>
#include <string>
using namespace std;

int arr[20]; // Declaration of global array arr with size 20
int n;       // Declaration of global variable n to store the number of elements in the array

void input()
{
    // procedure for input
    int d;
    while (true)
    {
        cout << "Enter the number of elements in the array: "; // Output to screen
        cin >> n;    // Input from user
        if (n <= 20)    // If n is less than or equal to 20
            break;
        else
        {
            cout << "\nArray can have a maximum of 20 elements.\n"; // If n is more than 20
        }
    }

    cout << endl;
    cout << "======================" << endl;
    cout << "Enter Array Elements" << endl;
    cout << "======================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data-" << (i + 1) << ": "; // Looping with i starting from 0 to n-1
        cin >> arr[i];    // Input from user
    }
}

void bubbleSort()
{
    // Procedure for bubble sort
    int pass = 1; // step for traversing the array starting from 1
    do
    {
        for (int j = 0; j < n - pass; j++)
        {
            if (arr[j] > arr[j + 1]) // if data at index j is greater than data at index j+1, perform swap
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass++;
    } while (pass <= n - 1);
    
    cout << "\nArray has been sorted using Bubble Sort!" << endl;
}

void display()
{
    // Procedure to display results
    cout << endl;
    cout << "=================================" << endl;
    cout << "Sorted Array Elements" << endl;
    cout << "=================================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // displaying array data
    }
    cout << endl;
}
