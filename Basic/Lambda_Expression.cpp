/**================================================================================
--    Author    :   			YOUSSEF ADEL YOUSSEF

-- Description  :   Cpp program to explain how to use lambda expressions.
================================================================================**/

#include <iostream>

int main() 
{
    // Define a lambda function and store it in the auto variable 'fn'
    auto fn = [](int x, int y) -> void {
        std::cout << x << std::endl;
        std::cout << y << std::endl;
    };
    
    // Call the lambda function with arguments 2 and 3
    fn(2, 3);

    // Define and immediately invoke another lambda function with arguments 2 and 3
    [](int x, int y) -> void {
        std::cout << x << std::endl;
        std::cout << y << std::endl;
    }(2, 3);

    return 0;
}
