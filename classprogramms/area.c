#include<stdio.h>
#include<math.h>
float tri(float,float,float);
int main(){
    float a,b,c,p;
    printf("enter the side of the triangle:");
    scanf("%f%f%f",&a,&b,&c);
     p = tri(a,b,c);
    
    printf("the area of triangle is :%f" ,p);
    return 0;
}
float tri(float a, float b,float c){
    float s ,area ;
    s= (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area ;

}