#include <iostream>
#include <stdlib.h>

using namespace std;

int *readNumbers()
{
    int *numbers;
    numbers = new int[10];
    for(int i=0; i<10; i++)
    {
        cin >> *(numbers+i);
    }
    return numbers;
}
bool equalsArray(int *numbers1,int *numbers2,int length)
{
    int equalCount = 0;
    for(int i=0;i<length;i++)
    {
        if(*(numbers1+i) == *(numbers2+i))
        {
            equalCount = equalCount + 1;
        }
    }
    if(equalCount == length)
    {
        return true;
    }
    else
    {
        return false;
    }

}