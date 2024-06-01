#include <stdio.h>

int main()
{
    // basic_io();
    // Your c code here
    int T;
    long long n;
    scanf("%d", &T);
    int arr[T];
    for (int i = 0; i <= T; i++)
    {
        scanf("%lld", &n);
        arr[i] = n;
    }
    for (int i = 0; i < T; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    return 0;
}
