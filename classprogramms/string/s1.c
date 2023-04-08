// ways of printing a string
/*#include<stdio.h>
int main(){
    char name[]="helinsky";
    int i=0;
    while(i<8){
        printf("%c",name[i]);
        i++;
    }
    i=0;
    while(name[i]!='\0'){
        printf("%c",name[i]);
        i++;
    }
    for(i=0;i<8;i++){
     printf("\n%c",name[i]);
    }

    return 0;
}*/
// using pointers printing string
/*#include<stdio.h>
int main(){
    char name[]=" helinskey";
    char *ptr;
    ptr = name;
    while(*ptr!='\0'){
         printf("%c",*ptr);
         ptr++;
    }
    return 0;}*/

/* #include<stdio.h>

 #include<string.h>
 int main(){
     char sen[25];
     printf("enter your sentence:");
     gets(sen);
     int i;
     printf(" from how many character u want to extract string");
     scanf("%d",&i);
     i--;
     if(i<0)
     i=0;
     printf("%s\t",&sen[i]);

     return 0;
 }*/
/*#include <stdio.h>
#include<conio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("enter the string  of numbers:");
    gets(str);
    int i, num, fin = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        num = str[i] - 48;
        fin = fin * 10 + num;
    }
    printf(" number :%d", fin);

    return 0;
}*/
/*#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char x[50] = "a",z[50];
    char y[50] = "b";
    int i;

    for (i = 0; i <= 5; i++)
    {
        printf("%s\t", x);
        strcpy(z,x);
        strcpy(x,y);
        strcat(y,z);
    }
    _getch();
    return 0;
}*/

/*#include <stdio.h>
#include <conio.h>
#include <string.h>
//ISBN no. checking
int main(){
//    int i,sum=0;
    char isbn[15];
    printf("enter the ISBN no. as string:");
    gets(isbn);
    for(i=0;i<10;i++){
        isbn[i]-= 48;
        sum=sum+((i+1)*isbn[i]);
    }
 if (sum % 11)/*If not divisble by 11
		puts("\nISBN number is wrong.");
	else
		puts("\nISBN number is valid.");
}}*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
    int i,sum=0;
    char num[20];
    printf("enter the DEBIT CARD number:");
    gets(num);
    for(i=0;i<=15;i++){
        num[i]-=48;
        if(i%2!=0){
            sum=sum+num[i];
        }
        else{
        num[i]*=2;
          if(num[i]>=10){
            num[i]-=9;
            sum =sum+num[i];
          }
    }}
    if(sum%10==0)
    printf("YOUR DEBIT CARD IS VALID");
    else
    printf(" NOT valid");
    return 0;
}
