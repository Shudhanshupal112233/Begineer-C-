#include<stdio.h>
#include<math.h>
double  trigo(double);
double   main(){
    double degree;
   
    trigo(0);
    trigo(30);
    trigo(45);
    trigo(60);
    trigo(90);

    
     return 0;

}
double trigo( double degree){
    
     double radian = degree * (M_PI / 180);
    
    printf("sin(%lf) value is %lf \n",degree, sin(radian));
    printf("cos(%lf) value is %lf \n",degree, cos(radian));
    printf("tan(%lf) value is %lf \n", degree,tan(radian));

}