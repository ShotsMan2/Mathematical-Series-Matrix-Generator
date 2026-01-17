#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, carpan;

    long long matris[4][10], sonuc;

    for (i = 0; i < 10; i++)
    {
        sonuc = 1;
        carpan = 1;
        matris[0][i] = i + 1;
        matris[1][i] = (i + 1) * (i + 1);
        for (j = i + 1; j >= 1; j--)
        {
            carpan *= j;
        }
        matris[2][i] = carpan;
        for (j = 1; j <= i + 1; j++)
        {
            sonuc = (i + 1) * sonuc;
        }
        matris[3][i] = sonuc;
    }
    for (j = 0; j < 4; j++)
    {
        for (i = 0; i < 10; i++)
        {
            printf("%lld\t", matris[j][i]);
        }

        printf("\n");
    }
}
