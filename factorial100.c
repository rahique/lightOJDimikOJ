#include <stdio.h>

int zeros(int n);

int main()
{
    int T, N;
    scanf("%d", &T);
    // Loop through each test case
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &N);

        printf("%d\n", zeros(N));
    }

    return 0;
}
int zeros(int n)
{
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5)
    {
        count += n / i;
    }
    return count;
}