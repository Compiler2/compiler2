#define NUM_ITER 1298809

#include <header.h>

int main_bench()
{	
	int i,j,temp=0,c,e,t;
	char a[100];
	gets(a);
	for(j=0;j<strlen(a);j++)
	{
		if(a[j]==' ')
			c=j;
		else;
	}
	
	if(strlen(a)!=(2*c+1))	
		my_printf("NO");
	else
	{
		for(i=0;i<c-1;i++)
		{
			for(j=0;j<(c-1-i);j++)
			{
				if(a[j+c+1]>a[j+2+c])
				{
					t=a[j+c+1];
					a[j+c+1]=a[j+c+2];
					a[j+2+c]=t;
				}
			}
		}
		
		
		for(i=0;i<c-1;i++)
		{
			for(j=0;j<c-i-1;j++)
			{
				if(a[j]>a[j+1])
				{
					e=a[j];
					a[j]=a[j+1];
					a[j+1]=e;
				}
			}
			
		}	
		
		for(i=0,j=c+1;i<c,j<strlen(a);i++,j++)
		{
			if(a[i]==a[j])
				temp++;
		}
		if(temp==c)
		my_printf("YES");
		else my_printf("NO");
	}

}