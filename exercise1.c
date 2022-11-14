#include<stdio.h>
int swap(int a,int b,int *c);
int main()
{
	
	int a,b,c=0;
	
	int d=0;
	
	
	printf("\nEnter Your Value :");
	scanf("%d",&a);
	
	
	printf("\nEnter Your Value :");
	scanf("%d",&b);
	
	d=swap(a,b,&c);	   
	
	
	printf("\nA value : %d",d);
	
	printf("\nB value : %d",c);
	
	
}


int  swap(int a,int b,int *c)
{

	a=a+b;
	b=a-b;
	a=a-b;
	
	*c=b;
	
	return a;
	




}

