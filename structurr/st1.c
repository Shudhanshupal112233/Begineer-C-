#include<stdio.h>
struct employees{
    int emp_id;
    char emp_name[50];
    char design[50];
};
int main(){
    struct employees a;
    printf("\nenter the employee id");
    scanf("%d",&a.emp_id);
    printf("\nenter the employee name");
    gets(a.emp_name);
    printf("\n nenter the employee design");
    gets(a.design);
    printf("\nemployee id =%d",a.emp_id);
 printf("\nemployee name =%c ",a.emp_name);
 printf("\ncemployee design= %c ",a.design);
 return 0;
}
