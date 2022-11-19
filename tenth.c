#include<stdio.h>
#include<conio.h>
#include<string.h>
struct tenth{

	char name[100];
	char reg[100];
	char sub[5][100];
	int pass[5];
	int mark[5];
	int avg;
	
	int total;	  


};

int main()
{

struct tenth jegan;
int i;
int max=100;

	
	int subcode[5];
	char space=' ';
	int to=500;
	
	int status=0;
	char pass_status[100];
	
	subcode[0]=1001;
	subcode[1]=1002;
	subcode[2]=1003;
	subcode[3]=1004;
	subcode[4]=1005;
	
	
  
	

	printf("\nEnter Student Name :\n");
	scanf("%s",&jegan.name);


	printf("\nEnter Registration No of %s :\n",jegan.name);

	scanf("%s",&jegan.reg);
	
	
	printf("\nEnter Tamil Mark :");
	scanf("%d",&jegan.mark[0]);
	
	
	printf("\nEnter English Mark :");
		scanf("%d",&jegan.mark[1]);
	
	printf("\nEnter Maths Mark :");
		scanf("%d",&jegan.mark[2]);
	
	printf("\nEnter Social Science Mark :");
		scanf("%d",&jegan.mark[3]);
	
	printf("\nEnter Science Mark :");
		scanf("%d",&jegan.mark[4]);


		
		
		jegan.total=jegan.mark[0]+jegan.mark[1]+jegan.mark[2]+jegan.mark[3]+jegan.mark[4];
		
		jegan.avg=jegan.total/5;
		
		if(jegan.mark[0]>=35)
		{
			jegan.pass[0]=1;
		
		}
		else
		{
		
			jegan.pass[0]=0;
		
		}
		
		
		if(jegan.mark[1]>=35)
		{
		
			jegan.pass[1]=1;
		
		}
		else
		{
			jegan.pass[1]=0;
		}
		
		if(jegan.mark[2]>=35)
		{
			jegan.pass[2]=1;
		}
		else
		{
			jegan.pass[2]=0;
		
		}
		
		
		if(jegan.mark[3]>=35)
		{
			jegan.pass[3]=1;
		}
		else
		{
			jegan.pass[3]=0;
		}
		
		if(jegan.mark[4]>=35)
		{
			jegan.pass[4]=1;
		}
		else
		{
			jegan.pass[4]=0;
		}	 


	status=jegan.pass[0]+jegan.pass[1]+jegan.pass[2]+jegan.pass[3]+jegan.pass[4];
	
	if(status==5)
	{
	
		strcpy(pass_status,"PASS");
	}
	else
	{
		strcpy(pass_status,"FAIL");
	}


	printf("\n\n\n");
	
	printf("\nCandidate Name : %s",jegan.name);
	printf("\nEnroll Number  : %s",jegan.reg);
	
	printf("\n\n");

	printf("\n-------------------------------------------------------------------");
	printf("\n   S.NO      SUBJECT     MAXIMUM MARK    OBTAINED MARK    STATUS");
	printf("\n-------------------------------------------------------------------");
	
	
	for(i=0;i<5;i++)
	{
	
	
		printf("\n%5d %12d %12d %15d %13d",i+1,subcode[i],max,jegan.mark[i],jegan.pass[i]);
	
	}
	
		printf("\n---------------------------------------------------------------------");
	
	printf("\n%5c %12c %12d %15d %14s",space,space,to,jegan.total,pass_status);
	printf("\n---------------------------------------------------------------------");
	
	
	printf("\n\n\n\n\n\n\n\n");
	
	getch();
}

