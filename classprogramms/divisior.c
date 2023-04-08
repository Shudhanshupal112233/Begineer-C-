#include<stdio.h>
int main(){
    int n,i,divisor=1;
    printf("enter the an integer :");
    scanf("%d",&n);
    i=1;
    for(i=1;i<=n;i++){
        if(n%i==0){
             
        printf("divisors are %d\n",i);
        }
        
        
        


    }
    return 0;
}