#include <stdio.h>
#include <string.h>

void sumOfNumbers(int numOne, int numTwo);

int main()
{
    int T;
    char n[99999];
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%s", &n);
        // converting first and last number to int
        int none = n[0] - '0';
        int ntwo = n[strlen(n) - 1] - '0';
        printf("Sum = ");
        sumOfNumbers(none, ntwo);
    }
    return 0;
}
void sumOfNumbers(int numOne, int numTwo)
{
    int sum = numOne + numTwo;
    printf("%d\n", sum);
}