#include<stdio.h>
float marks(float,float,float);
int main(){
    float m1,m2,m3,p;
    printf("enter the  marks in 3 subjects:");
    scanf("%f%f%f",&m1,&m2,&m3);
    p=marks(m1,m2,m3);
     printf(" average of 3 subjects:%f and percentage is %f   ",p,p);
 return 0;
}
float marks(float m1b,float m2b,float m3b){
    float average,per;
    average=  (m1b+m2b+ m3b)/3;
   
    return average;
}