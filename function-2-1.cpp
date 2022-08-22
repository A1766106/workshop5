#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int *readNumbers();

void hexDigits(int *numbers,int length)
{
    for(int i=0;i<length;i++)
    {
        cout << i << " " << *(numbers+i) << " ";
        switch(*(numbers+i))
        {
            case 10:
                cout << "A";
                break;
            case 11:
                cout << "B";
                break;
            case 12:
                cout << "C";
                break;
            case 13:
                cout << "D";
                break;
            case 14:
                cout << "E";
                break;
            case 15:
                cout << "F";
                break;
            default:
                cout << *(numbers+i);
                break;
        }
        cout << endl;
    }
}
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