#define NUM_ITER 295851

#include <header.h>

int main_bench()
{
	int n,i,j,k,l;
	char a[100][100],b[100][100];
	for(i=0;i<6;i++)
	{
		my_scanf("%s",a[i]);
		l=strlen(a[i]);
		if(a[i][0]!='-')
		{
		    for(j=0;j<l;j++)
		    {
			    b[i][l-1-j]=a[i][j];
		    }
			for(j=0;j<l;j++)
			{
				if(b[i][j]!=48)
				{k=j;
				break;}
			}
			for(j=k;j<l;j++)
			{
				my_printf("%c",b[i][j]);
			}
		}
		if((a[i][0]=='-'&&a[i][1]==48)||a[i][0]==48)
		{
			my_printf("0");
		}
		if(a[i][0]=='-')
		{
			for(j=1;j<l;j++)
			{
				b[i][l-j]=a[i][j];
			}
			for(j=1;j<l;j++)
			{
				if(b[i][j]!=48)
				{
					k=j;
				    break;
				}
			}
			my_printf("-");
			for(j=k;j<l;j++)
			{
				my_printf("%c",b[i][j]);
			}

		}
		my_printf("\n");
	}
	return 0;
}