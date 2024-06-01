#include <stdio.h>
#include <string.h>

int main()
{
    // basic_io();
    // Your c code here
    int T;
    scanf("%d", &T);
    char n[100];
    for (int i = 0; i < T; i++)
    {
        scanf("%s", &n);
        int len = strlen(n);
        if ((int)(n[len - 1]) % 2 == 0)
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
