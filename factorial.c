#include <stdio.h>
#include <math.h>

int main()
{
    int T, n;
    double f;
    scanf("%d", &T);
    // using tgamma(n + 1) function to find factorial of a number
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &n);
        f = tgamma(n + 1);
        printf("%lld\n", (long long)(ceil(f)));
    }
    return 0;
}
