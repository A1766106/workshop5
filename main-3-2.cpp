#include <iostream>
#include <stdlib.h>

using namespace std;

extern int *readNumbers();
extern int *reverseArray(int *numbers1,int length);
extern bool equalsArray(int *numbers1,int *numbers2,int length);

int main()
{

    int *numbers1;
    int *numbers2;
    int length = 10;
    numbers1 = readNumbers();
    numbers2 = reverseArray(numbers1,length);
    if(equalsArray(numbers1, numbers2, length))
    {
        cout << "Array is a palindrome" << endl;
    }
    else
    {
        cout << "Array is not a palindrome" << endl;
    }
    return 0;
}