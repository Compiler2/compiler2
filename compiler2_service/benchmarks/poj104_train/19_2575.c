#define NUM_ITER 681774

#include <header.h>

int main_bench()
{
	char s[100],a[100],b[100];
	int x,y,z,i,j,k;
	gets(s);gets(a);gets(b);
	x=strlen(s);y=strlen(a);z=strlen(b);
	for(i=0;i<x;i++)
	{
		k=1;
		if(i!=0)
		{
			if(s[i]==' ')
			{
				k=0;
			    for(j=0;j<y;j++)
				{
					if(s[i+j+1]!=a[j]) k=1;
				}
			}
			if(k==0) 
			{
				my_printf(" ");
				for(j=0;j<z;j++) my_printf("%c",b[j]);
			    i=i+y;
			}
			if(k==1) my_printf("%c",s[i]);
		}
		else if(i==0)
		{
			k=0;
			for(j=0;j<y;j++)
			{
				if(s[j]!=a[j]) k=1;
			}
			if(k==0) 
			{
				for(j=0;j<z;j++) my_printf("%c",b[j]);
			    i=y-1;
			}
			if(k==1) my_printf("%c",s[0]);
		}
	}
	return 0;
}