#include <stdio.h>
int main()
{
    int i, num;
    printf("Enter: ");
    scanf("%d",&num);
    printf("divisior of thr=e no. are");
    for (int i = 1; i<=num ; i++)
    {
        if (num%i!=0)
        {
            continue;
        }
        printf("\n%d",i);
}
}