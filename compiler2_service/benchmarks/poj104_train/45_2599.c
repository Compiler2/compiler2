#define NUM_ITER 958711

#include <header.h>

int main_bench()
{
	char a[100],b[100],c[100];
	int k,i,j,f,l,t=0;
	my_scanf("%s %s",a,b);
	k=strlen(b);
	l=strlen(a);
	for(i=0;i<k;i++)
	{
		f=0;t=0;c[t]=0;
		if(b[i]==a[0])
		{
			f=i;
			for(j=i;j<i+l;j++)
			{
				c[t]=b[j];
				t=t+1;
			}
			c[t]='\0';
			if(strcmp(c,a)==0)
			{my_printf("%d",f);
			break;}
		}
	}
	return 0;
}
