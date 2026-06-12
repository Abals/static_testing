
#include <iostream>
#include "main.h"

int main ()
{
    printString("Hello World!");
}

void printString(char* str)
{
    std::cout << str << std::endl;
}