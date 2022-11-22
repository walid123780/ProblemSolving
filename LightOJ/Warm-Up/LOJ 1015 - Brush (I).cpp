#include <stdio.h>
int main()
{
    int T, N, num, sum;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf("%d", &N);
        sum = 0;
        for (int j = 1; j <= N; j++)
        {
            scanf("%d", &num);
            if (num > 0)
            {
                sum += num;
            }
        }
        printf("Case %d: %d\n", i, sum);
    }
    return 0;
}
