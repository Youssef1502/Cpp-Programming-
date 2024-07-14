/**================================================================================
--    Author    :   			YOUSSEF ADEL YOUSSEF

-- Description  :   Cpp program to describe the difference between a reference and a pointer.
================================================================================**/

#include <iostream>

void modifyPointer(int* ptr) 
{
    *ptr = 20; // Modify the value at the memory location pointed to by ptr
}

void modifyReference(int& ref) 
{
    ref = 30; // Modify the value of the reference
}

int main() 
{
    int var = 10;

    // Pointer to var
    int* ptr = &var;

    // Reference to var
    int& ref = var;

    std::cout << "Initial value of var: " << var << std::endl;
    std::cout << "Value via pointer: " << *ptr << std::endl;
    std::cout << "Value via reference: " << ref << std::endl;

    // Modify var via pointer
    modifyPointer(ptr);
    std::cout << "Value of var after modifyPointer: " << var << std::endl;
    
    // Modify var via reference
    modifyReference(ref);
    std::cout << "Value of var after modifyReference: " << var << std::endl;

    // Demonstrating pointer re-assignment
    int var2 = 50;
    ptr = &var2; // Pointer can be reassigned to point to another variable
    std::cout << "Pointer reassigned to var2, value via pointer: " << *ptr << std::endl;

    // Demonstrating reference assignment (not re-assignment)
    int& ref2 = var2; // Creating a new reference to var2
    std::cout << "New reference to var2, value via new reference: " << ref2 << std::endl;

    return 0;
}
