//
//  main.cpp
//  SmartPointer Dynamic Array and Summation
//
//  Created by Isaac Adeleke on 10/14/24.
//
//

#include <iostream>
#include <memory>  // For smart pointers
using namespace std;

/*
 * Program: Dynamic Array Allocation with Smart Pointers
 * Description: This program dynamically allocates an array of integers using smart pointers,
 *              fills the array with user-provided values, calculates the sum of the values,
 *              and prints the result. Memory is managed automatically by smart pointers.
 */

// Function to fill the array with user input
void fillArray(unique_ptr<int[]>& arr, int size) {
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

// Function to calculate and print the sum of the array
void printSum(const unique_ptr<int[]>& arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i]; // Accumulate the sum of elements
    }
    cout << "The sum of the array elements is: " << sum << endl;
}

int main() {
    // Step 1: Declare an integer for array size
    int size;

    // Step 2: Prompt the user to enter the size of the array
    cout << "Enter the number of elements you want to store: ";
    cin >> size;

    // Step 3: Dynamically allocate memory for the array using smart pointers
    unique_ptr<int[]> arr = make_unique<int[]>(size); // Allocates an array of 'size' integers

    // Step 4: Call the function to fill the array
    fillArray(arr, size);

    // Step 5: Call the function to calculate and print the sum of the array
    printSum(arr, size);

    return 0; // Successful program termination
}
