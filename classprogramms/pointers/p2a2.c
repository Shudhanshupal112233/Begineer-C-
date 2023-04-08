/*#include<stdio.h>
int main(){
    int i,j;
    int s[4][2]={{1234,56},{1212,45},{1342,76},{1543,54}};
    for(i=0;i<=3;i++){
        for(j=0;j<=1;j++){
             printf("%u  ",(s[i]+j));
            printf("%d  ",*(s[i]+j));
        }
        printf("\n");
    }
return 0;
}*/
// find the largest and smallest element from 2d array using pionters and function 
/*#include<stdio.h>
int ls(int num[3][3],int *max,int *min);
int main(){
    int num[3][3],i,j,max,min;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("enter the value");
            scanf("%d",&num[i][j]);
        }
    }
    ls(num,&max,&min);
    printf("value of maximum is:%d\n",max);
     printf("value of manimum is:%d\n",min);
     return 0;
}
int ls(int num[3][3],int *max,int *min){
    *max=num[0][0],*min=num[0][0];
     for(int i=0;i<3;i++){
        for( int j=0;j<3;j++){
            if(*max<num[i][j])
            *max=num[i][j];
              if(*min>num[i][j])
            *min=num[i][j];
        }}
}*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char x[50] = "a", z[50];
	char y[50] = "b";
	int i;
	for (i = 0; i <= 5; i++)
	{
		printf("%s\t", x);//printing x
		strcpy(z, x);/*copying x into z*/
		strcpy(x, y);/*copying y into x*/
		strcat(y, z);/*adding (concatinating) z in y*/
	}
	_getch();
	return 0;
}