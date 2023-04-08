/*#include<stdio.h>
int main(){
    char ch;
    printf("enter the vowel:");
    scanf("%c",&ch);
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':

       printf(" \n is a vowel",ch);
       break;
       default:
       printf("not a vowel");
    }
    return 0;

}*/

/*#include<stdio.h>
int main(){
    int n,i,pro=1;
    printf("enter the no.");
    scanf("%d",&n);
    i=n;
    while(i>0)
     {
        pro= pro*i;

      i--;
    }
    printf("factorial is%d",pro);
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int n1=0, n2=1,n,i;
    int sum;
    printf("enter the no. of elements:");
    scanf("%d",&n);
    for(i=1;i<=2;i++){
        if(i==1)
        printf("%d,",n1);
        if(i==2)
        printf("%d,",n2);
    }
    for(i=3;i<=n;i++){
        sum = n1+n2;
        printf("%d,",sum);
        n1=n2;
        n2=sum;
        sum=0;
    }
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int n ,s=0,b,temp;
    printf("enter the no.");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        b=n%10;
        s= s*10 +b;
        n= n/10;
    }
    if(temp==s)
    printf("no. is palindrome");
    else
    printf("no palindrome");
    return 0;

}*/

/*#include<stdio.h>
int main(){
    int n,b,i,j;
    printf("enter the no.:");
    scanf("%d",&n);
    i=n;
    while(i>0){
        printf("\n");
        b=0;
        while(b<=n-i){
            printf(" ");
            b++;}
            j=1;
         while(j<=i*2-1) {
         printf("*");
         j++;}

            i--;
        }
        return 0;
    }*/

/*#include<stdio.h>
#include<math.h>
int main(){
    int n,swap,digit,end,first,divide;
    printf("enter the no.:");
    scanf("%d",&n);
    digit= log10(n);
    divide= pow(10,digit);
    first=n/divide;
    n=n%divide;
    end=n%10;
    n=n/10;
    swap=end+first;
    printf("no. after swap:%d",swap);
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int pro=1,n,i,b;
    printf("enter the no:");
    scanf("%d",&n);
    while(n>0){

    pro =pro*(n%10);
    n=n/10;
}
printf("%d",pro);
return 0;
}*/
/*#include<stdio.h>
int main(){
    int n1,n2,hcf=1,min,i,lcm;
    printf(" enter the n1 and n2:");
    scanf("%d%d",&n1,&n2);
     min = (n1<n2) ? n1 : n2;
    for(i=1;i<=min;i++){
        if(n1%i==0 && n2%i==0){
        hcf=i;}
    }
    lcm= n1*n2/hcf;
    printf("lcm of two no. is :%d",lcm);

    return 0;
}*/

/*#include<stdio.h>
int main(){
    int month;
    printf("enter the month:");
    scanf("%d",&month);
    switch(month){
        case 1:
        printf("31 days");
        break;
        case 2:
        printf("28days"); break;
    case 3:
        printf("31 days"); break;
    case 4:
        printf("30 days"); break;
        case 5 :
        printf("31 days"); break;
    case 6:
         printf("30 days"); break;
    case 7:
        printf("31 days"); break;
    case 8:
        printf("31 days"); break;
    case 9:
        printf("30 days"); break;
    case 10:
        printf("31 days"); break;
    case 11:
        printf("30days"); break;
        case 12:
        printf("31 days"); break;

    }
    return 0;
    }*/

/*#include <stdio.h>
int main()
{
    int i, k;
    float fac ,sum = 0.0;
    for (i = 1; i <= 7; i++)
    {   fac = 1.0;
        for (k = i; k>= 1; k--)
            fac = k * fac;

        sum = sum + (i / fac);
    }

    printf(" sum of first seven terms are%f", sum);

    return 0;
}*/
/*#include<stdio.h>
int main(){
    int i,n,mul;
    printf("enter the no. for the table");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        mul= n*i;
        printf("%d*%d=%d\n",n,i,mul);

    }
    return 0;
}*/
/*#include <stdio.h>
int main()
{
    float i, x;
    for (int y = 1; y <= 6; y++)
    {
        for (x = 5.5; x <= 12.5; x += 0.5)
        {
            i = 2 + (y + 0.5 * x);
             printf("y=%d,x=%f,i=%f\n", y, x,i);
        }
       
    }
    return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int main(){
    int x;
    float sum=0;

    printf("enter the no.");
    scanf("%d",&x);
    for(int i=1;i<=7;i++){
     if(i==1){
     sum= sum+pow((x-1.0)/x,i);
     }  
     else
     sum=sum+0.5*pow((x-1.0)/x,i)
     ;
     }
     printf("sum%f ",sum);
     return 0;

}*/

/*#include<stdio.h>
#include<math.h>
int main(){
    int i;
    float p,r=10;
     p=100000;
    int pop;
    for(i=1;i<11;i++){
       pop=p/pow((1+r/100),i);
        
        printf("year=%d , population=%d\n",i,pop);
    }
    return 0;
}*/
/*#include<stdio.h>
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
}*/

/*#include<stdio.h>
int roman(int);
int main(){
    int year ;
    printf("enter the year :");
    scanf("%d",&year);
    roman(year);
}
int roman(int num){
    while(num){
        if(num>1000){
            printf("M");
            num = num-1000;
        }
        else if(num>500){
            printf("D");
            num = num-500;
        }
         else if(num>100){
            printf("C");
            num = num-100;
        }
         else if(num>50){
            printf("L");
            num = num-50;
        }
         else if(num>10){
            printf("X");
            num = num-10;
        }
         else if(num>5){
            printf("V");
            num = num-5;
        }
         else if(num>1){
            printf("I");
            num = num-1;
        }
        
    }
    return 0;
}*/
#include<stdio.h>
#include<math.h>
int fac(int);
int main(){
    int n;
    printf("enter the no.:");
    scanf("%d",&n);
    fac(n);
  return 0;
}
int fac(int num){
    printf("the prime factors of the no. are:");
    while(num%2==0){
        printf("%d,",2);
        num = num/2;

    }

    for(int i=3; i<=sqrt(num);i=i+2){
        while(num%i==0){
        printf("%d,",i);
        num=num/i;}
    }
      if (num > 2)
        printf("%d ", num);
    return 0;
}