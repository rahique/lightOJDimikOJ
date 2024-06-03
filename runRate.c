#include <stdio.h>
#include <math.h>

int main()
{
    int T;
    int oppToralRun, teamCurrentRun, ballLeft;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d", &oppToralRun, &teamCurrentRun, &ballLeft);
        // finding how many overs have been played
        float overPlayed = (300.0 - ballLeft) / 6.0;
        // finding the current run rate of the team
        float cRunRate = teamCurrentRun / overPlayed;
        // finding how many overs are left
        float overLeft = ballLeft / 6.0;
        // finding the required run rate of the opponent
        float rRunRate;
        if (oppToralRun > teamCurrentRun)
        {
            rRunRate = (++oppToralRun - teamCurrentRun) / overLeft;
        }
        else
        {
            rRunRate = 0.00;
        }

        printf("%.2f %.2f\n", cRunRate, rRunRate);
    }

    return 0;
}