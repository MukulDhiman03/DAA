#include <stdio.h>
void main()
{
    int cases;
    scanf("%d", &cases);
    while (cases > 0)
    {
        int n, arr[10], choice, count = 0, flag = 0;
        printf("Enter the limit: ");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("Enter the element you wants to search ");
        scanf("%d", &choice);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == choice)
            {
                count++;
                flag = 1;
                break;
            }
            else
            {
                count++;
                flag = 0;
            }
        }
        if (flag)
        {
            printf("present %d \n", count);
        }
        else
        {
            printf("/n Not present %d", count);
        }
        cases--;
    }
}