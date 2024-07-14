/**================================================================================
--    Author    :   			YOUSSEF ADEL YOUSSEF

-- Description  :   Cpp program to describe how to use a range-based loop.
================================================================================**/

#include<iostream>
#include<vector>

int main()
{
    std::vector<int> Numbers = {1,2,3,4,5};
    
    std::cout << "Number : ";
    for(int num : Numbers)
    {
        std::cout << " " << num ;
    }
    std::cout << std::endl;
    return 0;
}