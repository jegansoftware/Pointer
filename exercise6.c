#include<stdio.h>
void exercise(float c,float *a,int *b);
int main()
{

	float c,a=0;
	int b=0;


	
	printf("\nEnter Value :");
	
	scanf("%f",&c);
	
	exercise(c,&a,&b);



	printf("\n------------ OUTPUT ---------------");
	
	printf("\nA Value : %f",a);
	printf("\nB Value : %d",b);
	printf("\nC Value : %.2f",c);

		


}


void exercise(float c,float *a,int *b)
{


	float a1;
	int b1;
	
	a1=22*c/7;
	b1=22*(c/7);
	
	*a=a1;
	*b=b1;






}

