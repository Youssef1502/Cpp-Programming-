/**================================================================================
--    Author    :   			YOUSSEF ADEL YOUSSEF

-- Description  :   Cpp program to explain how to use a capture list with a lambda expression.
================================================================================**/

#include <iostream>

int main() 
{
    int a = 5;
    int b = 10;

    // Capture 'a' and 'b' by value
    auto sum = [a, b]() 
	{
        return a + b;
    };

    std::cout << "Sum: " << sum() << std::endl;

    // Change the value of 'a'
    a = 20;

    // Capture 'a' by reference and 'b' by value
    auto difference = [&a, b]() 
	{
        return a - b;
    };

    std::cout << "Difference: " << difference() << std::endl;

    return 0;
}
