#include <stdio.h>
#include <math.h>

int main()
{
    double degree;

    printf("Enter your angle value in degree : ");
    scanf("%lf", &degree);

    double radian = degree * (M_PI / 180);

    printf("sin value is %lf \n", sin(radian));
    printf("cos value is %lf \n", cos(radian));
    printf("tan value is %lf \n", tan(radian));
    return 0;
}

/*Explanation :
To solve this problem, we need to import math.h header function.
All of these methods take one double value as the argument and returns the result as double.
The argument should be in radian, so if the user input is in degree, we need to convert it to radian by multiplying the value PI/180. MI_PI is defined in math.h and it holds the value of PI.
After converting it to radian, we can calculate and print out the sin, cos and tan values.
To make the conversion, we can use sin(), cos() and tan() methods.
Sample Output :
Enter your angle value in degree : 60
sin value is 0.866025
cos value is 0.500000
tan value is 1.732051

sin value is 0.500000
cos value is 0.866025
tan value is 0.577350

Enter your angle value in degree : 45
sin value is 0.707107
cos value is 0.707107
tan value is 1.000000
You might also like:
How to use strstr in C with example
How to split a string in C using strtok library function
C program to print all words in a string ends with a specific character
C program to convert hour to minute and seconds value
C nanosleep method explanation with example
How to delete an empty directory in C
How to copy a file in C programming
C getc and putc methods explanation with example
c
Journey with Code and Design
CodeVsColor on Twitter
About
Privacy Policy
T&C
Contact


Ezoicreport this ad

Ezoicreport this ad

Ezoicreport this ad*/
