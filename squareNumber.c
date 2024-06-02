#include <stdio.h>
#include <math.h>

int main()
{
    int T, n;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &n);
        int x = sqrt(n);
        if (x * x == n)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
