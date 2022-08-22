#include <iostream>
#include <stdlib.h>

using namespace std;

int *readNumbers()
{
    int *numbers;
    numbers = new int[10];
    for(int i=0; i<10; i++)
    {
        cout << "Please enter the  " << i << "th element: ";
        cin >> *(numbers+i);
    }
    return numbers;
}
bool equalsArray(int *numbers1,int *numbers2,int length)
{

}