#define NUM_ITER 254697

#include <header.h>


int wordsnumber(char a[])
{
	int i=0,num;
	for (;a[i]!='\0';i++)
	{
		num=i;
	}
	num=num+1;
	return (num);
}

int main_bench()
{
	char A[1000]={'\0'},B[300][100]={'\0'};
	int numA,i,t,j,count;
	int num[300];
	gets(A);
	numA=wordsnumber(A);
	for (i=0,t=0,j=0;i<numA;i++)
	{
		if (A[i]!=' ')
		{B[t][j]=A[i];j=j+1;}
		else
		{t=t+1;j=0;}
	}
	for (i=0,count=0;i<t+1;i++)
	{
		if (B[i][0]=='\0') continue;
		count=count+1;
		num[i]=wordsnumber(B[i]);
		
		if (count==1) my_printf("%d",num[i]);
		else my_printf(",%d",num[i]);	
	}
	my_printf("\n");
}