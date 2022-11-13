#include<stdio.h>
int main()
{

	char a[100];
	
	char b[100];



	int i=0;
	
	int length=0;
	int length1=0;
	int tmp=0;
	
	printf("\nEnter Your Value ::\n");
	gets(a);
	


	while(a[i]!='\0')
	{
	
		length++;
		
		i=i+1;
	}	 

	
	tmp=length;
	
	
	i=0;
	
	
	
	while(a[i]!='\0')
	{

		if(a[i]==a[length-1])
		{
			
			length1++;
			
		}
		
		i=i+1;
		
		length--;
	}	 



	if(tmp==length1)
	{
		printf("\nYou have entered polindrome");
	
	}

}

