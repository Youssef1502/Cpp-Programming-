/**================================================================================
--    Author    :   			YOUSSEF ADEL YOUSSEF

-- Description  :   Cpp program to describe how to use break and continue statements.
================================================================================**/

#include<iostream>

int main()
{
    std::cout<<"Iteration :";
    for(int i=0 ; i<10 ; i++)
    {
        if(i == 3)
        {
            continue;
        }

        else if(i == 6)
        {
            break;
        }
        std::cout<< i <<" ";
    }
    std::cout<<std::endl;

}