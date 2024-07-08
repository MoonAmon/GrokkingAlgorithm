#include <stdio.h>
#include <stdlib.h>

int fat(int x){
    printf("Chamando fat(%d)\n", x);

    if (x == 1)
    {
        printf("Base da recursão alcançada com fat(1) = 1\n");
        return 1;
    } else {
        int result = x * fat(x-1);
        printf("Retornando de fat(%d) = %d\n", x, result);
        return x * fat(x - 1);
    }

}

int main(int argc, char const *argv[])
{
    int result = fat(3);
    printf("%d\n", result);
    return 0;
}
