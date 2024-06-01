#include <stdio.h>

int main()
{
    int T, n, k = 1;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &n);
        for (int j = 0; j < n * n; j++)
        {
            if (k != n)
            {
                printf("*");
                k++;
            }
            else
            {
                printf("*\n");
                k = 1;
            }
        }
        if (i != T - 1) // Avoid printing an extra blank line after the last square
        {
            printf("\n");
        }
    }
    return 0;
}
