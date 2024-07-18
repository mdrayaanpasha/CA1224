/******************************************************************************

                            arrmax.c
                            Rayaan Pasha
                            18-07-24

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("this is a programme to Get Some Elements & then print them\n");

    printf("How many numbers do you want to have?: \n");
    scanf("%d", &n);

    int arr[n];
    printf("please keep inserting numbers: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = 0;
    int maxIndex = 0;

    for (int k = 0; k < n; k++)
    {
        if (arr[k] > max)
        {
            max = arr[k];
            maxIndex = k;
        }
    }

    printf("%d is the index which has the maximum number that is: %d", maxIndex, max);

    return 0;
}
