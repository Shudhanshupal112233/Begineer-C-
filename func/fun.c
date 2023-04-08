#include<stdio.h>
int add(int,int);
int main(){
    int a,b,sum;
    printf("enter the two numnbers:");
    scanf("%d%d",&a,&b);
    sum = add(a,b);
    
    printf("the sum of the two no. is %d",sum);
    return 0;
}
int add(int a,int b){
    int c;
    c=a+b;
    return c;
}