#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int *readNumbers() ;
void printNumbers(int *numbers,int length) ;

int *readNumbers()
{
    int *numbers;
    int length = 10;
    numbers = new int[length];
    // for(int i=0; i<length; i++)
    // {
    //     cout << "Please enter the  " << i << "th element: ";
    //     cin >> numbers[i];
    // }
    return numbers;
}

void printNumbers(int *numbers,int length)
{
    for(int i=0; i<length; i++)
    {
        cout << i << " " << *(numbers + i) << endl;
    }
    return;
}