/*#include<stdio.h>
int main(){
    int num[10];
    int i;
    printf("enter the unsorted array ");
    for(i=0;i<5;i++){
        scanf("%d",&num[i]);
    }
     
      for(i=0;i<5;i++){
        for( int j=i+1;j<5;j++){
        if(num[i]>num[j]){
            int a= num[i];
            num[i]=num[j];
            num[j]=a;
            
        }
      }}
       for(i=0;i<5;i++){
        printf("%d ",num[i]);
       }
}*/
/*#include <stdio.h>

int main() {
    int num, sum = 0, digit1, digit2;

    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    // Extract the two consecutive digits and add them to the sum
    digit1 = num % 10;
    num /= 10;
    digit2 = num % 10;
    sum += (digit2 * 10 + digit1);

    digit1 = num % 10;
    num /= 10;
    digit2 = num % 10;
    sum += (digit2 * 10 + digit1);

    sum+= num;

    printf("Sum of all numbers formed by two consecutive digits: %d\n", sum);

    return 0;
}*/
#include<stdio.h>
struct student 
{
  int roll;
   char name[10];
  int gpa;

};
int main(){
  int i;
  struct student s1[5];
for(i=0;i<5;i++){
  printf("enter the roll no.:");
  scanf("%d",&s1[i].roll);
  printf("enter the name :");
  scanf("%c ",&s1[i].name);
  printf("enter the gpa:");
  scanf("%d",&s1[i].gpa);
  
}
int flag=0;
for(i=0;i<5;i++){
  if(s1[i].gpa>=4){
     printf("\n%s",s1[i].name);
     printf("\n%d",s1[i].gpa);
  }
  
}

return 0;
}
#include<stdio.h>
#define SWAP(x) x*x*x 
int main(){

  printf(" %d",SWAP(1+1));
  return 0;
}
#include<stdio.h>
int main(){
  int a[3][3];
  int i,j;
  int sum=0;
  printf("enter the elements :");
  for(i=0;i<3;i++)
  for(j=0;j<3;j++){
    scanf("%d",&a[i][j]);

  }
  for(i=0;i<3;i++){
    printf("\n");
  for(j=0;j<3;j++){
    printf("%d\t",a[i][j]);
  }}
   for(i=0;i<3;i++)
  for(j=i;j<=i;j++){
      sum+=a[i][j];

  }
  printf("the sum of diagonals is:%d",sum);
}
#include<stdio.h>
#include<string.h>
int main(){
   char st1[9]="khaleesi";
   char st2[9];
   int count =0;
   int max=3;
   do{
    printf("enter the password :");
    scanf("%s",st2);
    if(strcmp(st1,st2)==0){
      printf("correct passsword ");
    }
    else{ 
    printf("wrong password");
    count++;
   }
}while (count<max);
if(count==max){
  printf("password locked");
}
return 0;
}
#include<stdio.h>
struct student
{ 
  int roll;
  char name[10];
  int marks;

};
int main(){
  int i;
   struct student s1[10];
 for(i=0;i<2;i++){
  printf("enter the roll no. , name , marks of the sturdents:\n");
  scanf("%d%s%d",&s1[i].roll,s1[i].name,&s1[i].marks);
 }
 for(i=0;i<2;i++){
  printf("roll no.=%d\nname=%s\nmarks=%d\n",s1[i].roll,s1[i].name,s1[i].marks);
 }


}
#include<stdio.h>
int main(){
  int a[5],i;
  printf(" enter the array elements :");
  for(i=0;i<5;i++){
    scanf("%d",&a[i]);
  }
  int key,flag=0,pos;
  printf("enter the key foe search:");
  scanf("%d",&key);
  for(i=0;i<5;i++){
    if(a[i]==key){
      flag =1;
      pos=i+1;
    }
  }
  if(flag==1){
    printf("no is present in array at pos %d",pos);

  }
  else 
  printf("no. not found");
  return 0;
}
#include<stdio.h>
int main(){
  int n,i;
  int sum=0;
  printf("enter no.:");
  scanf("%d",&n);
  for(i=1;i<n;i++){
    if(n%i==0)
    sum+=i;
  }
  if(n==sum)
  printf("ur no. is a perfect no.");
  else
  printf(" not ");
  return 0;
}
#include<stdio.h>
int main(){
  int i,j;
  for(i=1;i<=5;i++){
    printf("\n");
    for(j=1;j<=i;j++){
      printf("%d ",j);
    }
  }
}