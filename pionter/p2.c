#include<stdio.h>
void oddeve(int *);
int main(){
    int a,*p;
    printf("enter the number:");
    scanf("%d",&a);
    p =&a;
    oddeve(p);
    return 0;
}
void oddeve(int *p){
    if(*p%2==0)
    printf("ur no. is even");
    else 
    printf(" ur is odd");
}
