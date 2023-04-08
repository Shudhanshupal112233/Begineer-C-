#include <stdio.h>
int main()
{
    int choice, num, loc, element, a[30], i;
    printf(" enter the choice:\n 1.unsorted array \n 2.sorted array");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("enter the no. of element:");
        scanf("%d", &num);
        printf("enter the %d element:", num);
        for (i = 0; i < num; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("enter the element for insertion:");
        scanf("%d", &element);
        printf("enter the element location to be inserted:");
        scanf("%d", &loc);
        for (i = num - 1; i >= loc - 1; i--)
        {
            a[i + 1] = a[i];
        }

        a[loc - 1] = element;

        for (i = 0; i <= num; i++)
        {
            printf("%d,", a[i]);
        }
        break;
    case 2:
        printf("enter the no. of element:");
        scanf("%d", &num);
        printf("enter the %d element:", num);
        for (int i = 0; i < num; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("enter the element for insertion:");
        scanf("%d", &element);
        i = num - 1;
        while (element < a[i] && i >= 0)
        {
            a[i + 1] = a[i];
            i--;
        }

        a[i + 1] = element;
        
        for (i = 0; i <= num; i++)
        {
            printf("%d  ", a[i]);
        }

        break;

    default:
        printf("u enter the wrong choice");
        break;
    }
    return 0;
}