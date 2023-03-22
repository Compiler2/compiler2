#define NUM_ITER 866324

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
		if(s[i]==a[0])
		{
			k=0;
			for(j=1;j<y;j++)
			{
				if(s[i+j]!=a[j]) k=1;
			}
		}
		if(k==0) 
		{
			for(j=0;j<z;j++) my_printf("%c",b[j]);
			for(i=i+y;i<x;i++)my_printf("%c",s[i]);
			break;
		}
		if(k==1) my_printf("%c",s[i]);
	}
	return 0;
}
