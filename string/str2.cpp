
/*#include<stdio.h>
int main(){
    char a[100];
     int i =0;
    int words =1;
    printf("enter the sentence:");
    gets(a);
   
    while(a[i]!='\0'){
        if(a[i]==' ')
        words++;
        i++;
        }

    printf("the no. of words are:%d",words);
    
    return 0;
}*/
// to find vowel and consonant

/*#include<stdio.h>
int main(){
    char a[100];
    printf("enter the string :");
    gets(a);
    int i,vow,con;
    i=vow=con=0;
    while(a[i]!='\0'){
    if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122)){
        if(a[i]=='a' ||a[i]=='i' ||a[i]=='e' ||a[i]=='o' ||a[i]=='u' ||a[i]=='A' ||a[i]=='E' ||a[i]=='I' 
        ||a[i]=='O' ||a[i]=='U' )
        vow++;
        else
        con++;}
        i++;
    }
    printf("vowels are %d and consonant are %d",vow,con);
    return 0;
}*/

/*#include<stdio.h>
int main(){
    char a[50], b[50],c[100];
    int i,j;
    i=j=0;
    printf("\n enter the first string: ");
    gets(a);
      printf("\n enter the second string: ");
    gets(b);
    while(a[i]!='\0'){
        c[i]=a[i];
        i++;
    }
    while(b[j]!='\0'){
        c[i]=b[j];
        i++,j++;
    }
    c[i]='\0';
    printf("the conc string:%s",c);
    return 0;
}*/


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