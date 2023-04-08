#include<stdio.h>
int main(){
    int i,j,n,b;
    printf("enter the no. of lines:");
    scanf("%d",&n);
    i=1;
    while(i<=n){
        printf("\n ");
        b=1;
        while(b<=n-i){
            printf(" ");
            b++;
        }
        
        j=1;
        while(j<=i*2-1){
            if(j%2==0)
            printf(" ");
            else 
            printf("*");
            j++;
        }
        i++;
    }   
    return 0;
}