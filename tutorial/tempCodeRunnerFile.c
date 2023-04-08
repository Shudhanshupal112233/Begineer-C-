#include<stdio.h>
int main(){
   int i,n;
    
   for(n=2;n<=1000;n++){
       int isprime=1;
    for(i=2;i<n;i++){
        if(n%i==0){
        isprime=0;
        break;
    }}
    if(isprime==1)
    printf("%d\t",n);
    }
    return 0;
   }