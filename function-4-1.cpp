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
extern int secondSmallestSum(int *numbers,int length)
{
    int smallest = 0;
    int secondSmallest = 0;
    smallest = *(numbers);
    secondSmallest = *(numbers);
    for(int i=0; i<length; i++)
    {
        int runningSum= 0;
        for(int j=i; j<length; j++)
        {
            runningSum += *(numbers+j);
            if(runningSum<smallest)
            {
                secondSmallest = smallest;
                smallest = runningSum;
            }
            else if(runningSum<secondSmallest)
            {
                secondSmallest = runningSum;  
            }
        }
    }

return secondSmallest;

}
