/**================================================================================
--    Author    :   			YOUSSEF ADEL YOUSSEF

-- Description  :   Cpp program to describe the function default parameter.
================================================================================**/

#include<iostream>

void PrintMessage(std::string Message = "Hello World")
{
    std::cout << Message << std::endl;
}

int main(int argc, const char** argv) 
{
    PrintMessage();
    PrintMessage("Hi There");
    return 0;
}