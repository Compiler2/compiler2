#include <header.h>

int main_bench()
{
	char c[100][13],temp;
	int i,n,k,len,j;
	for(i=0;i<100;i++)
	{
		for(j=0;j<13;j++)
			c[i][j]='\0';
	}
	for(i=0;;i++)
	{
		gets(c[i]);
		if(c[i][0]==0)
			break;
	}
	n=i;
	for(i=0;i<n;i++)
	{
		len=strlen(c[i]);
		temp=c[i][0];	
		k=0;
		for(j=0;j<=len-5;j++)
		{
			if(c[i][j]>temp)
			{
				temp=c[i][j];
				k=j;
			}
		}
		for(j=0;j<=k;j++)
			my_printf("%c",c[i][j]);
		for(j=len-3;j<len;j++)
			my_printf("%c",c[i][j]);
		for(j=k+1;j<len-4;j++)
			my_printf("%c",c[i][j]);
		my_printf("\n");
	}
}
