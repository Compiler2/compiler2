#define NUM_ITER 1098086

#include <header.h>

int main_bench()
{
	char a[2000];
	int b[300],t=0,n,i,j=0;
	my_scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]<='9'&&a[i]>='0')
		{
			t=t*10+a[i]-48;
			
		}
		else
		{
			b[j]=t;
			j++;
			t=0;
		}
	}
	b[j]=t;j++;
	for(i=1;i<j;i++)
	{
		for(t=0;t<j-i;t++)
		{
			if(b[t]<b[t+1])
			{
				n=b[t];
				b[t]=b[t+1];
				b[t+1]=n;
			}
		}
	}
	for(i=1;i<j;i++)
	{
		  if(b[i]!=b[i-1])
		  {
			  my_printf("%d",b[i]);
			  break;
		  }
		  
		  else
			  continue;
	}
	if(b[0]==b[j-1])
		my_printf("No");
	
}