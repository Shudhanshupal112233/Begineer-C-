#include<stdio.h>
#include<math.h>
int power(int,int);
int main(){
    int x,y,p,h;
    printf("enter the  value x and y:");
    scanf("%d%d",&x,&y);
     p=power(x,y);
    
    printf("the  %d to power %d is %d",x,y,p);
    

    return 0;
}
int power(int x,int y){
    int c;
    c= pow(x,y);
    return c;
}