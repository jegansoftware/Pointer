#include<stdio.h>
#include<string.h>



struct jegan{

	int mark1;
	int mark2;
	int mark3;
	int mark4;
	int mark5;
	int avg;
	int total;
	
	char result[100];


};
struct jegan calculate(struct jegan);

int main()
{

	struct jegan a;
	
	struct jegan *a1=&a;
	

	
	
	


	
	printf("\nEnter Mark 1:");
	scanf("%d",&a.mark1);
	
	printf("\nEnter Mark 2:");
	scanf("%d",&a.mark2);	 
		
	printf("\nEnter Mark 3:");
	scanf("%d",&a.mark3);
	
	printf("\nEnter Mark 4:");
	scanf("%d",&a.mark4);
	
	printf("\nEnter Mark 5:");			   	   	   
	scanf("%d",&a.mark5);

	a=calculate(a);
	
	
	printf("\nMark 1  :%d",a1->mark1);
	printf("\nMark 2  :%d",a1->mark2);
	
	printf("\nMark 3  :%d",a1->mark3);
	
	printf("\nMark 4  :%d",a1->mark4);
	
	printf("\nMark 5  :%d",a1->mark5);
	
	printf("\nTotal	  :%d",a1->total);
	
	printf("\nAverage :%d",a1->avg);
	
	printf("\n%s",a1->result);

}


struct jegan calculate(struct jegan a)
{

	a.total=(a.mark1)+(a.mark2)+(a.mark3)+(a.mark4)+(a.mark5);
	
	a.avg=a.total/5;
	
	if(a.avg>60)
	{
		strcpy(a.result,"Eligible");
	
	}
	else
	{
		strcpy(a.result,"Not Eligible");
	
	}
	
	
	return a;

}

