/**================================================================================
--    Author    :   			YOUSSEF ADEL YOUSSEF

-- Description  :   Cpp program to describe how you can use auto data type.
================================================================================**/

#include<iostream>

int main(int argc, char const *argv[])
{
    auto var = 10;
    auto var2 = 10.50;
    auto var3 = 'a';
    auto var4 = "const char*";
    auto var5 = std::string("Youssef Adel");

    // use const
    const int x = 20;
    auto var6 = x;      //var6 is integer only not constant integer

    // to make var7 constant integer use [ const auto ] or use [ auto & ] or use [ pointer with auto ]
    const auto var7 = x;
    auto &var8 = x;
    auto ptr = &x;

    // std::initializer_list
    auto lst = {1,2,3,4,5};
    return 0;
}
