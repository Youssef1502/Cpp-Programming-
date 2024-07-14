/**================================================================================
--    Author    :   			YOUSSEF ADEL YOUSSEF

-- Description  :   Cpp program to describe function overloading.
================================================================================**/

#include<iostream>

int Multiply (int x , int y)
{
    return x*y;
}

double Multiply (double x , double y)
{
    return x*y;
}

int main(int argc, char const *argv[])
{
    int Int_Result = Multiply(5 , 4);
    double Double_Result = Multiply(2.5 , 3.0);
    
    std::cout << "Result1 = " << Int_Result << std::endl;
    std::cout << "Result2 = " << Double_Result << std::endl;
    
    return 0;
}
