#include<stdio.h>
int ChangeValue(int a,int b,int *c);
int main()
{


	int a,b,c,d=0;
	
	
	printf("\nEnter A value :");
	scanf("%d",&a);
	
	printf("\nEnter B value :");
	scanf("%d",&b);
	
	

	d=ChangeValue(a,b,&c);
	


	printf("\nValues have been Changed\n");
	printf("\n------ ---- ---- -------\n");
	
	printf("\nA Value : %d",c);
	printf("\nB Value : %d",d);
	


}

int ChangeValue(int a,int b,int *c)
{


	a=a+a;
	b=b+b;
	a=a*b;
	b=a-b;
	
	*c=a;
	return b;

	


}

