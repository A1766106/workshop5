#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

extern void readNumbers(int *numbers,int length);

int main()
{
    int *numbers;
    int length;
    cout << "What length would you like? ";
    cin >> length;
    numbers = new int[length];
    int array[10] = {11,12,3,4,15,6,7,8,9,10};
    for(int i=0; i<length; i++)
    {
        *(numbers+i) = array[i];
        // cout << "Please enter the number you want to have in the " << i << "th element: ";
        // cin >> *(numbers+i);
    }
    readNumbers(numbers, length);

    return 0;
}