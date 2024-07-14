/**================================================================================
--    Author    :   			YOUSSEF ADEL YOUSSEF

-- Description  :   Cpp program to describe the loops available in the Cpp language.
================================================================================**/

#include <iostream>

int main() 
{
    /*--------------------------------------------
    //                For loop
    --------------------------------------------*/
    std::cout << "For loop:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "i = " << i << std::endl;
    }

    std::cout<<"-------------------------------"<<std::endl;

    /*--------------------------------------------
    //               While loop
    --------------------------------------------*/
    std::cout << "While loop:" << std::endl;
    int j = 0;
    while (j < 5) {
        std::cout << "j = " << j << std::endl;
        ++j;
    }

    std::cout<<"-------------------------------"<<std::endl;

    /*--------------------------------------------
    //             Do-while loop
    --------------------------------------------*/
    std::cout << "Do-while loop:" << std::endl;
    int k = 0;
    do {
        std::cout << "k = " << k << std::endl;
        ++k;
    } while (k < 5);

    return 0;
}
