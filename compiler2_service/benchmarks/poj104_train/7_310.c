#define NUM_ITER 931315

#include <header.h>

int main_bench()
{
	char a[256],b[256],c[256];
	int i,j,lena,lenb;
	my_scanf("%s%s%s",a,b,c);
	lena=strlen(a);
	lenb=strlen(b);
	a[lena]='\0';
    int x,s;
	for(i=0;i<lena;i++)
	{
		x=-1;
		for(j=0;j<lenb;j++)
		{
			if(a[i+j]!=b[j])
			{
				x=0;
				break;
			}
		}
		if(x!=0)
		{
			s=i;
			break;
		}
	}
	if(x==0)
		my_printf("%s",a);
	else
	{
		for(i=0;i<s;i++)
			my_printf("%c",a[i]);
		my_printf("%s",c);
		for(i=s+lenb;i<lena;i++)
		{
			my_printf("%c",a[i]);
		}
	}
	return 0;
}
