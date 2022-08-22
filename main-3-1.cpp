#include <iostream>
#include <stdlib.h>

using namespace std;

extern int *readNumbers();
extern bool equalsArray(int *numbers1,int *numbers2,int length);

int main()
{
    int *numbers1;
    int *numbers2;

    numbers1 = readNumbers();
    numbers2 = readNumbers();

    return 0;
}