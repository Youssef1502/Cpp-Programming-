/**================================================================================
--    Author    :   			YOUSSEF ADEL YOUSSEF

-- Description  :   Cpp program to sort an array with a lambda expression.
================================================================================**/

#include <iostream>
#include <algorithm>

int main() 
{
    // Define an array of integers
    int arr[] = {4, 2, 5, 1, 3};

    // Sort the array in ascending order using lambda expression
    std::sort(std::begin(arr), std::end(arr), [](int a, int b) {
        return a < b; // Sort in ascending order
    });

    // Print the sorted array
    std::cout << "Sorted array in ascending order: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Sort the array in descending order using lambda expression
    std::sort(std::begin(arr), std::end(arr), [](int a, int b) {
        return a > b; // Sort in descending order
    });

    // Print the sorted array
    std::cout << "Sorted array in descending order: ";
    for (int num : arr) 
	{
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
