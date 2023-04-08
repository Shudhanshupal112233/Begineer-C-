#include<stdio.h>
#include<math.h>
int main(){
    int i,j,k,m;
    
    for(i=1,m=1;i<5;i++){
        printf("\n");
        for(j=1;j<=5-i;j++){
            printf(" ");
        }
        for(k=1;k<=i*2-1;k++,m++){
            if(k%2==0)
            printf(" ");
            else
            
            printf("%d",m);
        }
    }
return 0;
}