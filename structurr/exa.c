/*#include<stdio.h>
#include<math.h>

int main()
{
    int n, rem,i, sum=0;

    printf("enter the no.");
    scanf("%d",&n);
     int temp;
     temp=n;
   while (n>0){
    rem = n%10;
    sum = sum+ pow(rem,3);
    n=n/10;
    }
    if(temp==sum)
    printf(" this is a armstrong no.%d",temp);
    return 0;

}*/
#include <stdio.h>
union employee
{
  int code;
  char name[50];
  float salary;
} aa;
int main()
{
  printf("enter the code:");
  scanf("%d", &aa.code);
  printf("\n enter the name :");
  scanf("%s", &aa.name);
  printf("\n enter the salary:");
  scanf("%f", &aa.salary);
  printf("\ncode=%d", aa.code);
  printf("\nname=%s", aa.name);
  printf("\n salary=%f", aa.salary);

  return 0;
}