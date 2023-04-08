#include<stdio.h>
 int rec(int);
 int main(){
    int n,s;
    printf("enter the num:");
    scanf("%d",&n);
    s=rec(n);
    printf("sum of digits :%d",s);
    return 0;
 }
 int rec(int y){
    int sum =0;
    int r;
    if(y!=0){
        r=y%10;
        sum = r+ rec(y/10);
    }
    return sum;
 }