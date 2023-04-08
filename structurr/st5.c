/*#include<stdio.h>
struct  company
{
    char serial[10];
     int yom;
     char material[20] ;
     int qty;

}maruti[10] = { "AA0", 2005, "Iron", 20,
"BB1", 2007, "Steel", 13,
"BB2", 1992, "Aluminium", 57,
"CC1", 2005, "Stainless Steel", 7,
"CC6", 2007, "Steel", 34,
"CC7", 2010, "Steel", 14
};

#include<stdio.h>
#include<conio.h>
#include<Windows.h>

void eng_info(char*, char*);

struct engine
{
	char serial[4];
	int yom;
	char mat[50];
	int quantity;
}
maruti[10] = { "AA0", 2005, "Iron", 20,
"BB1", 2007, "Steel", 13,
"BB2", 1992, "Aluminium", 57,
"CC1", 2005, "Stainless Steel", 7,
"CC6", 2007, "Steel", 34,
"CC7", 2010, "Steel", 14
};

int main()
{
	char from[5], to[5];
	printf("\nEnter the serial number, from where you want to start the list : ");
	scanf("%s", from);
	printf("\nEnter the serial at which you wan to end the list : ");
	scanf("%s", to);
	system("cls");
	eng_info(from, to);
	_getch();
	return 0;
}

void eng_info(char *from, char *to)
{
	char first_letter;
	int last_digit;
	int i;
	printf("\n\t\tEngines Information\n");
	for (i = 0; maruti[i].serial[0] != *from; i++);
	while (1)
	{
		printf("\nSerial Number : %s", maruti[i].serial);
		printf("\nYear Of Manufacture : %d", maruti[i].yom);
		printf("\nMaterail Used : %s", maruti[i].mat);
		printf("\nQuantity : %d\n", maruti[i].quantity);
		if (i == 10)
			i = 0;
		i++;
		if (maruti[i].serial[0] == *to &&  maruti[i].serial[2] == *(to + 2))
		{
			printf("\nSerial Number : %s", maruti[i].serial);
			printf("\nYear Of Manufacture : %d", maruti[i].yom);
			printf("\nMaterail Used : %s", maruti[i].mat);
			printf("\nQuantity : %d\n", maruti[i].quantity);
			return;
		}
	}
}*/
/*#include<stdio.h>
struct cricketers
{
	int avrun;
	char name[30];
	int age;
	int notm;
}india[20] = {
	122, "Sachin Tendulkar", 30, 67,
	97, "Virendra Sehwag", 35, 56,
	66, "Irfan Pathan", 32, 45,
	153, "Yusuf Pathan", 36, 21,
	101, "Yuvaraj Singh", 32, 45,
};
int compare(const void * a, const void * b);
int main()
{
	int i;
	qsort(india, 5, sizeof(struct cricketers), compare);

	/*qsort() is a standard library function.
	
	view the link below for more info
	
	http://www.tutorialspoint.com/c_standard_library/c_function_qsort.htm
	
	

	for (i = 0; i < 5; i++)
	{
		printf("Name : %s", india[i].name);
		printf("\nAge : %d", india[i].age);
		printf("\nTotal Test Matches played : %d", india[i].notm);
		printf("\nAverage Run : %d\n\n\n", india[i].avrun);
	}
	_getch();
	return 0;
}
int compare(const void * a, const void * b){
	return(*(int*)a-*(int*)b);
}*/
/*#include<stdio.h>
struct employee{
	 int emp_code;
	 char name[20];
	 int doj[3];

}hcl[50] = {

	001, "Shahnawaz", 13, 1,2006,
	004, "Amit Puri", 21, 6,2008,
	102, "Irfan Moin", 12, 5, 2012,
	131, "Shabnam", 16, 1, 2014};

int info(struct employee);
int main(){
	int i,d[3];
	printf("\nenter the current date:");
	scanf("%d%d%d",&d[0],&d[1],&d[2]);
	printf("\nEmployees with greater than or equal to 3 years of tenure\n\n");
	for(i=0;i<4;i++){
		if( d[2]-hcl[i].doj[2]>3)
		info(hcl[i]);
		else if( d[2]-hcl[i].doj[2]==3){
			if(d[1]-hcl[i].doj[1]>0)
			info(hcl[i]);
			else if( hcl[i].doj[2]==d[1])
			if (d[0] - hcl[i].doj[0] >= 0)
					info(hcl[i]);

		}
	}
}
int info(struct employee e){
	printf("\ncode:%d",e.emp_code);
	printf("\nname:%s",e.name);
	printf("\ndate of joining:%d-%d-%d", e.doj[0], e.doj[1], e.doj[2]);
}*/
#include<stdio.h>
struct dmy
{
int d;
int m;
int y;	

} a,b;
int datecmp();
int main(){
	int flag;
	printf("enter the  first date: ");
	scanf("%d%d%d",&a.d,&a.m,&a.y);
	printf("enter the  second date: ");
	scanf("%d%d%d",&b.d,&b.m,&b.y);
	flag= datecmp(a,b);
	if(flag==1){
		printf("both dates are not equal");
	}
	else
	printf("both dates are equal");
	return 0;
} 
int datecmp(struct dmy a,struct dmy b){
	if(a.d==b.d && a.m==b.m && a.y==b.y)
	return 0;
	else 
	return 1;
}

