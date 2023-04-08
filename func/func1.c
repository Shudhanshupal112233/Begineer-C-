#include<stdio.h>
void prime(int);
int main(){
    int i;
    printf("enter the no.");
    scanf("%d",&i);
    prime(i);
    return 0;
}
void prime(int i){
    int x, count =0;
    for(x=1;x<=i;x++){
        if(i%x==0)
        count++;
    }
    if(count==2)
    printf("the no. is prime ");
    else 
    printf("the no. is not prime");

}