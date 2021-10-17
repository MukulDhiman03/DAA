#include <stdio.h>
void main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int j, temp, cmp = 0, shifts = 0;
        for (int i = 1; i < n; i++)
        {
            j = i - 1;
            temp = a[i];
            shifts++;

            while (j >= 0 && a[j] > temp)
            {

                if (a[j] > temp)
                {
                    cmp++;

                    a[j + 1] = a[j];
                    shifts++;
                    j--;
                }
                a[j + 1] = temp;
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\ncomparisons =%d ", cmp);
        printf("\nshifts %d ", shifts);
    }
}