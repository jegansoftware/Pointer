#include<stdio.h>
#include<conio.h>
float GetRadius();
float CircleArea(float radius);
float CircleCircumstance(float radius);
int main()
{
	int dowhile=0;
	
	

		do{	   
				
				int option=0;
			
				printf("\n1)Find Area Of Circle ");
				printf("\n2)Find Circumstance Of Circle\n");
			
				scanf("%d",&option);
				
				printf("\n\n");
			
			
				
			
				switch(option)
				{
					
						case 1:
						{
							float radius;
							float area=0;
							
							radius=GetRadius();
							
							area=CircleArea(radius);
							
							printf("\n\nArea of Circle : %f",area);
						
							break;
						}
						case 2:
						{
						
							float circumstance=0;
							float radius=0;
							
							radius=GetRadius();
							
							circumstance=CircleCircumstance(radius);
							
							printf("\n\nCircumstance of Circle : %f",circumstance);
						
							break;
						}
						default:
						{
						
							printf("Invalid Value has been entered");
						}
				
				}
				
				
				printf("\n\nDo you want to continue ? 1 / 0 \n\n");
				scanf("%d",&dowhile);

				
			}while(dowhile==1);

getch();	
}


float GetRadius()
{

	float radius=0;
	
	float area;
	
	printf("\nEnter Radius Value :");
	
	scanf("%f",&radius);

	return radius;


}


float CircleArea(float radius)
{

	float area;
	
	area=22/7.0 * radius * radius;
	
	return area;
}

float CircleCircumstance(float radius)
{


	float circumstance=0;
	
	
	circumstance=2*3.17*radius;
	
	return circumstance;

}

