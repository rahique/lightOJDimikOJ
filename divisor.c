#include <stdio.h>
void dividor(int n);
int main()
{
    int T, n, c = 1;
    scanf("%d", &T);
    for (c; c <= T; c++)
    {
        scanf("%d", &n);
        printf("Case %d: ", c);
        dividor(n);
        printf("\n");
    }
    return 0;
}
// dividor function
void dividor(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // chcking for factors
        if (n % i == 0)
        {
            printf("%d", i);
            // checking sapces
            if (i != n)
            {
                printf(" ");
            }
        }
    }
}