
#include <iostream>
#include "main.h"

int main ()
{
    printString("Hello World!");
    return 0;
}

void printString(char* str)
{
    std::cout << str << std::endl;
}