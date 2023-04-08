/*#include<stdio.h>
int main(){
char a[23];
int i=0 ;
printf("\nenter the name:");
gets(a);


while(a[i]!='\0'){
    
        

i++;
}
printf("%d",i);
return 0;
}*/


// to count words

#include<stdio.h>
int main(){
    char a[100];
     int i =0;
    int words =1;
    printf("enter the sentence:");
    gets(a);
   
    while(a[i]!='\0'){
        if(a[i]=" ")
        words++;
        i++;
        }

    printf("the no. of words are:%d",words);
    
    return 0;
}
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