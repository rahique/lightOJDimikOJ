#include <stdio.h>

int main()
{
    int n = 0;
    for (int i = 1000; i >= 1; i--)
    {
        printf("%d", i);
        n++;

        if (n % 5 != 0)
        {
            printf(" ");
        }
        else
        {
            printf("\n");
        }
    }
    return 0;
}
