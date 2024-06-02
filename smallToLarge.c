#include <stdio.h>

void sort(int nums[3]);

int main()
{
    int T, nums[3];
    scanf("%d", &T);

    for (int i = 1; i <= T; i++)
    {
        scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);
        printf("Case %d:", i);
        sort(nums);
        printf("\n");
    }

    return 0;
}
// Bubble sort
void sort(int nums[3])
{
    int i, j, temp;
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (nums[i] > nums[j])
            {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
        printf(" %d", nums[i]);
    }
}