/*#include<stdio.h>
int main(){
    int n=7754;
    int sum=0;
    for(int i=1;i<=2;i++){
        int rem= n%10;
        sum+=rem;
        n=n/1000;
    }
    printf(" sum of first and the last digit:%d",sum);
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int j,i,k,b;
    for(i=0;i<=6;i++){
        printf("\n");
    for(k=65;k<=71-i;k++){
        printf("%c ",k);

    }
    for(j=0;j<i*2-1;j++){
        printf("  ");
    }
    for(b=71-i;b>=65;b--){
        if(b!=71)
        printf("%c ",b);
    }

    }
    return 0;
}
#include<stdio.h>
//greatest of the three numbers
/*int main(){
    int x,y,z;
    printf("enter the numbers :");
    scanf("%d%d%d",&x,&y,&z);
    int max;
    if(x>y && x>z){
      max=x;
    }
    else if(y>z &&y>x){
        max=y;
    }
    else if(z>x && z>y){
        max=z;
    }
    printf("the greatest of the three is :%d",max);
    return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int main(){
    int x1,x2,y1,y2,r;
    printf("enter the coordinates of the point :");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    printf("enter the radius:");
    scanf("%d",r);
    int pc=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    if(pc>r){
        printf("point lies outside");
    }
    if(pc<r){
        printf("point lies inside");
    }
    if(pc==r){
        printf("point lies on the circle");
    }
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int i, x,y,mul=1;
    printf("enter the two numbers :");
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++){
        mul=mul*x;
    }
    printf("the %d raised to power %d is %d",x,y,mul);
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int num,i,pos=0,neg=0,zero=0;
    char choice;
    do{
        printf("enter the numbers:");
        scanf("%d",&num);
        if(num>0){
            pos++;
        }
        else if(num<0){
            neg++;
        }
        else if(num==0){
            zero++;
        }
        printf("enter the choice(y/n): ");
        scanf(" %c",&choice);
    }while(choice=='y'|| choice=='Y');
    printf(" the positve no.:%d",pos);
    printf(" negative :%d",neg) ;
    printf(" zero :%d",zero);
    return 0;
}
*/

/*#include<stdio.h>
#include<math.h>
// armstrong no.
int main(){
    int rem,num,n,temp,i,arm=0,digit=0;
    for(i=1;i<=50000;i++){
        num=temp=n=i;
        while(n>0){
            digit++;
            n=n/10;
    }
        while(num>0){
            rem= num%10;
            arm=arm+pow(rem,digit);
            num=num/10;
        }
        if(temp==arm)
            printf("%d\t",temp);
        digit=0;
        arm=0;
    }
    return 0;
}*/

/*{
    int i,n,k;
    float sum=0.0;
    printf("enter the number upto which u want find sum:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        float fac=1.0;
        for(k=i;k>=1;k--){
            fac*=k;}

    sum=sum+(i/fac);

    }
    printf("sum of %d terms is%f",n,sum);
    return 0;

}*/
/*{
    int i,n,sum=0;
    for(i=1;i<10;i++){
        printf("enter the no.:");
        scanf("%d",&n);
        if(n<0)
        break;
        else
        sum=sum+n;
    }
    printf(" sum of non negative no. :%d",sum);
    return 0;
}
*/
/*{
    int i,n;
     printf("enter the no.:");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            if(n%i==0)
            printf("the divisior of the no. are :%d\n",i);
        }
        return 0;
}*/
/*{
    int watts;
    printf("enter the watts:");
    scanf("%d",&watts);
    switch (watts)
    {
    case 25:
        printf("lifespan=2500");
        break;
        case 45:
        case 60:
        printf("lifespan=1000");
        break;
        case 75:
        printf("lifespan=700");
        break;

    default:
    printf("lifespan=0");
        break;
    }
    return 0;
}*/

/*{

    char a ;
    printf("enter the character:");
    scanf("%c",&a);
    if(a>=48 && a<=57)
    printf("it is a digit ");
    else
    printf(" not a digit ");
    return 0;
}*/

/*void marks(int a ,int b ,int c ,float *avg,float *per);
void main ()
{
    int a,b,c;
    float avg,per;
    printf("enter the marks in 3 subjects:");
    scanf("%d%d%d",&a,&b,&c);
    marks(a,b,c,&avg,&per);
    printf("average :%.2f\n",avg);
    printf( "percentage:%.2f",per);

}
void marks(int a,int b,int c ,float* avg,float*per){
    *avg =(a+b+c)/3.0;
    *per = ((a+b+c)/300.0)*100;
}*/

/*void fab();
void main(){
  fab();
}
void fab(){
   int i,n1,n2,nxt;

    n1=0;
    n2=1;
     printf("%d ",n1);
      printf("%d ",n2);
    nxt =n1+n2;
   for(i=3;i<=25;i++){
     printf("%d ",nxt);
      n1=n2;
      n2=nxt;
      nxt= n1+n2;

   }
}*/

/*#include<stdio.h>
#include <math.h>
int fun(int a[3][3],int b[3][3] );
int main(){
    int i,j;
    int a[3][3],b[3][3];
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++){
        printf("enter the elements for 1 matrice :");
        scanf("%d",&a[i][j]);
    }
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++){
        printf("enter the elements for 2 matrice :");
        scanf("%d",&b[i][j]);
    }
    fun(a,b);
    }

int fun(int a[3][3],int b[3][3] ){
    int c[3][3];
    int i,j;
     for(i=0;i<3;i++){

    for( j=0;j<3;j++){
        c[i][j]=0;
        for(int k=0;k<3;k++){
              c[i][j]+= a[i][k]*b[k][j];
        }
    }
}
for(int i=0;i<3;i++){
     printf("\n");
    for(int j=0;j<3;j++){
        printf(" %d\t",c[i][j]);

}}
return 0;
} */
/*#include<stdio.h>
int fun(int*,int );
int main(){
     int c[7];
    int i,j;
     printf("enter the elements:");
     for(i=0;i<7;i++){

        scanf("%d",&c[i]);
    }


     for(i=6;i>2;i--)
     fun(&c[0],i);
     for(i=0;i<7;i++){
        printf(" %d\t",c[i]);
     }
return 0;
     }

  int fun(int *p ,int x ){
    int i,temp,y;
    y=6-x;
    temp=*(p+x);
    *(p+x)=*(p+y);
    *(p+y)=temp;
  }   */

/*#include <stdio.h>
#include <math.h>
int main()
{
    struct student
    {
        int roll;
        char name[10];
        char department[10];
        char course[5];
        int yoj;
    };
}*/

/*#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, k, l;
    for (i = 0; i <= 6; i++)
    {
        printf("\n");
        for (j = 65; j <= 71 - i; j++)
        {
            printf("%c ", j);
        }
        for (k = 0; k < i * 2 - 1; k++)
        {
            printf("  ");
        }
        for (l = 71 - i; l >= 65; l--)
        {
            if (l != 71)
            {
                printf("%c ", l);
            }
        }
        
    }
    return 0;
}*/

/*#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<Windows.h>
struct studata
{
	int roll;
	char name[50];
	char depart[50];
	char course[20];
	int yoj;
}nos[450]= { 03, "Kishor", "IT", "B.tech", 2014,
10, "Mohammad Siraj Alam", "Computer Science", "B.Tech", 2014,
53, "Deepak", "Computer Applications", "BCA", 2013,
13, "Karan", "Mechanical", "Diploma", 2013,
1, "Aakash", "Tool and Die", "Diploma", 2012,
2, "Ramesh", "IT", "B.tech", 2014
};
void std_year(int);
void std_data(int);
int main(){
    int yoj,roll;
    printf("enter the year :");
    scanf("%d",&yoj);
    std_year(yoj);
        printf("\nenter the roll no. of student to access his data:");
    scanf("%d",&roll);
    std_data(roll);
    return 0;
    
}
void std_year(int year){
    printf("\nyear of joining:%d",year);
    for(int i=0;i<=450;i++){
        if(nos[i].yoj==year){
        printf("\nroll no:%d",nos[i].roll);
        printf("\n name:%s",nos[i].name);
         printf("\n department:%s",nos[i].depart);
          printf("\nCourse:%s",nos[i].course);
    }
}}
void std_data(int enroll)
{
	int i;
	printf("\nRoll number : %d", enroll);
	for (i = 0; i <= 450; i++)
	{
		if (nos[i].roll == enroll)
		{
			printf("\nName : %s", nos[i].name);
			printf("\nDepartment : %s", nos[i].depart);
			printf("\nCourse : %s\n", nos[i].course);
			printf("\nYear of joining : %d\n", nos[i].yoj);
		}
	}
}
*/
#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<Windows.h>
struct bank
{
    int acc_n;
    char name[20];
    int balance;
}sbi[200] = { 1, "Siraj", 1000000,
2, "Azad", 1233044,
3, "Deepak", 99,
4, "Rihan", 33,
5, "Rahul Khowal", 200000
};
void bal(int);
void form(int,int,int);
int main(){
 int rup=100;
     bal(rup);
     int accnum,amount,code;
     printf("\n\nenter the account no.:\n");
     scanf("%d",&accnum);
  
     printf(" enter code 1 for deposit and 0 for withdraw:");
     scanf("%d",&code);
     if(code==1)	
	{
		printf("\nEnter amount to be deposit : ");
		scanf("%d", &amount);
	}
	else
	{
		printf("\nEnter amount to withdraw : ");
		scanf("%d", &amount);
	}
     form(accnum,amount,code);
    return 0;
}
void bal(int rup){
    printf("\ncustomers  balance below Rs.100: ");
    for(int i=0;i<=200;i++){
        if(sbi[i].balance<=rup && sbi[i].balance>0){
            printf("\n ACCOUNT NO.:%d",sbi[i].acc_n);
               printf("\n NAME:%s",sbi[i].name);
        }
    }
}
void form(int accnum,int amount,int code){
    int i;
    for(i=0;i<200;i++)
        if (sbi[i].acc_n == accnum)
			break;
            if(code!=1){
                if(sbi[i].balance - amount <100)
                printf(" \nThe balance is insufficient for the specified withdrawal");
                else
                printf("your new account balane is :%d\n",sbi[i].balance - amount);
            }
        else
        {
            sbi[i].balance+=amount;
            printf("\n your new account balance is:%d",sbi[i].balance);
        }    
    }


