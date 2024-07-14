/**================================================================================
--    Author    :   			YOUSSEF ADEL YOUSSEF

-- Description  :   Program to describe how to use the mainpulators in Cpp.
================================================================================**/

#include<iostream>
#include<iomanip>

int main(int argc, const char** argv) 
{
    int num1 = 65;
    std::cout << "Number :" << std::setw(8) << num1 << std::endl;

    double pi = 3.14159265358979323846;
    std::cout << "pi : " << std::setprecision(4) << pi << std::endl;

    double num2 = 123.45678;
    std::cout << "num2  : " << std::scientific << num2 << std::endl;

    int num3 = 42;
    std::cout << "num3 in Hex : " << std::hex << num3 << std::endl;
    std::cout << "num3 in Oct : " << std::oct << num3 << std::endl;
    std::cout << "num3 in Dec : " << std::dec << num3 << std::endl;

    bool b;
    std::cout << "Enter bool value : ";
    std::cin >> b;
    std::cout << "The bool value is : " << std::boolalpha << b << std::endl;

    return 0;
}