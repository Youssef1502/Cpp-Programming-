/**================================================================================
--    Author    :   			YOUSSEF ADEL YOUSSEF

-- Description  :   Cpp program to describe the difference between NULL and nullptr.
================================================================================**/

#include <iostream>
 
void foo(int x) 
{
    std::cout << "Integer version\n";
}
 
void foo(char* str) 
{
    std::cout << "Pointer version\n";
}
 
int main() 
{
    foo(nullptr);       	// Clear and unambiguous, calls the pointer version
    // foo(NULL);           // Ambiguous and might lead to unexpected behavior
 
    return 0;
}
