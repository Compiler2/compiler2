#define NUM_ITER 3018

#include <header.h>

int main_bench()
{
	char a[100][100],b[1000];
	int n,i,k=0,j,sum=0,word=0;
	char c;
	gets(b);
	for(i=0;i<100;i++)
	{
		for(j=0;j<100;j++)
		{
			a[i][j]=b[k];
			k++;
			if(a[i][j]==' ')
			{
				a[i][j]='\0';
				break;
			}
		}
	}

	for(i=0;(c=b[i])!='\0';i++)
	{
		if(c==' ') word=0;
		else if(word==0)
		{
			word=1;
			sum++;
		}
	}
	n=strlen(a[sum-1]);
	a[sum-1][n]='\0';
	for(i=0;i<sum;i++)
	{
		my_printf("%s",a[sum-1-i]);
		if(sum-1-i!=0)
			my_printf(" ");
	}
}