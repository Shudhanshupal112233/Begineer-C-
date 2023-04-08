#include<stdio.h>
#include<string.h>
int main(){
    char a[50];
    char b[50];
    printf("enter the string :");
    gets(a);
    printf(" reverse of the string :%s",strrev(a));
    b=strrev(a);
    if(strcmp(a,b)==0)
        printf("string is palindrome");
    
    else
    printf("not a palindrome.");
     return 0;

}