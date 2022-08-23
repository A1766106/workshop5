#include <iostream>
#include <stdlib.h>

using namespace std;

extern int *readNumbers();
extern int secondSmallestSum(int *numbers,int length);

int main()
{
    int length = 10;
    int* numbers;

    numbers = readNumbers();

    cout << secondSmallestSum(numbers, length) << endl;

    delete[] numbers;

    return 0; 
}