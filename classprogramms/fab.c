#include<stdio.h>
void fab();
int main(){
    fab();
}
void fab(){
    int i,n1,n2,nxt;
     n1=0;
        n2 = 1;
        nxt = n1+n2;
        printf("%d,%d",n1,n2);
        for(i=3;i<=25;i++){
            printf(",%d ",nxt);
            n1=n2;
            n2 = nxt;
            nxt = n1+n2;

        }
    
}