/**================================================================================
--    Author    :   			YOUSSEF ADEL YOUSSEF

-- Description  :   Cpp program to describe all conditions available in Cpp language.
================================================================================**/

#include <iostream>

int main() 
{
    int a = 10;
    int b = 20;

    /*--------------------------------------------
    //            Simple if statement
    --------------------------------------------*/
    if (a < b) 
    {
        std::cout << "a is less than b" << std::endl;
    }

    std::cout<<"-------------------------------"<<std::endl;

    /*--------------------------------------------
    //            If-else statement
    --------------------------------------------*/
    if (a > b) 
    {
        std::cout << "a is greater than b" << std::endl;
    } 
    
    else {
        std::cout << "a is not greater than b" << std::endl;
    }

    std::cout<<"-------------------------------"<<std::endl;

    
    /*--------------------------------------------
    //      If - else if - else statement
    --------------------------------------------*/
    if (a == b) 
    {
        std::cout << "a is equal to b" << std::endl;
    } 
    
    else if (a < b) {
        std::cout << "a is less than b" << std::endl;
    } 
    
    else 
	{
        std::cout << "a is greater than b" << std::endl;
    }

    std::cout<<"-------------------------------"<<std::endl;

    
    /*--------------------------------------------
    //            Switch statement
    --------------------------------------------*/
    int option = 1;
    switch (option)
    {
        case 1:
            std::cout << "Option 1 selected" << std::endl;
            break;
        case 2:
            std::cout << "Option 2 selected" << std::endl;
            break;
        case 3:
            std::cout << "Option 3 selected" << std::endl;
            break;
        default:
            std::cout << "Invalid option selected" << std::endl;
            break;
    }

    std::cout<<"-------------------------------"<<std::endl;

    
    /*--------------------------------------------
    //            Ternary operator
    --------------------------------------------*/
    int max = (a > b) ? a : b;
    std::cout << "The greater value between a and b is: " << max << std::endl;

    return 0;
}
