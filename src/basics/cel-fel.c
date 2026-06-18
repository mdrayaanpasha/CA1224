/******************************************************************************
 *
 *
 *                          cel-fel.c
                            Rayaan Pasha
                            16-07-24

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int cel[9];
    float fe[9];

    int counter = 0;
    for (int i = 0; i <= 100; i += 10)
    {
        cel[counter] = i;
        counter++;
    }

    for (int k = 0; k <= 9; k++)
    {
        fe[k] = (9.0 / 5.0) * (float)cel[k] + 32;
    }

    for (int l = 0; l <= 9; l++)
    {
        printf("%d in cel is %f in fe.\n", cel[l], fe[l]);
    }

    return 0;
}
