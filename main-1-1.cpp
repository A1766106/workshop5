#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

extern int*readNumbers();
extern void printNumbers(int *numbers, int length);

int main()
{
    int *array;
    int length = 10;

    array=readNumbers();

    printNumbers(array,length);
    delete[] array;

    return 0;
}