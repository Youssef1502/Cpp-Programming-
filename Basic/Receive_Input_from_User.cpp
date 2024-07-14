/**================================================================================
--    Author    :   			YOUSSEF ADEL YOUSSEF

-- Description  :   Cpp program to explain how to receive input from the user.
================================================================================**/

#include<iostream>

int main(int argc, const char** argv) 
{
    int x  , y ;
    float s , d ;

    std::cout << "Enter two integer values" << std::endl;
    std::cin >> x >> y;
    std::cout << "x = " << x << " , y = " << y << std::endl;
    
    std::cout << "Enter two float values" << std::endl;
    std::cin >> s >> d;
    std::cout << "s = " << s << " , d = " << d << std::endl;

    return 0;
}