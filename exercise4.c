#include<stdio.h>
void AB_value(float c,int *a1,int *a2,float *a3);
int main()
{



	int a=0;
	int b=0;
	float c=0;
	
	int a1=0;
	int a2=0;
	float a3=0;
	
	
	
	printf("\nEnter Float Value :");
	scanf("%f",&c);
	
	
	
	AB_value(c,&a1,&a2,&a3);


	
	
	
	printf("\n----------------- OUTPUT -------------------\n");
	
	printf("\nA value : %d",a1);
	printf("\nB value : %d",a2);
	printf("\nC value : %.2f",a3);
	
	
}


void AB_value(float c,int *a1,int *a2,float *a3)
{

	int a,b=0;
	
	a=c;
	b=a*5;
	c=a+b;

	*a1=a;
	*a2=b;
	*a3=c;


}

