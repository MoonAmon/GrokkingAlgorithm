#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int *pointer;
    int array = 3;

    pointer = &array;
    *pointer =  10;

    printf("%d", array);
    return 0;

}

