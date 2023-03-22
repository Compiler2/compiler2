#define NUM_ITER 83266

#include <header.h>



int main_bench()
{
	int i,j,k;
char a[256],b[256],c[256];
my_scanf("%s",a);
my_scanf("%s",b);
my_scanf("%s",c);
for(i=0;i<256;i++)
{	k=0;
	for(j=0;j<strlen(b);j++)
	{
		if(a[j+i]!=b[j])
		{
			k=1;break;}
	}
	
	if(k==0)
	{	for(j=0;j<i;j++)
			my_printf("%c",a[j]);
		for(j=0;j<strlen(c);j++)
			my_printf("%c",c[j]);
		for(j=i+strlen(b);j<strlen(a);j++)
			my_printf("%c",a[j]);
	
		break;
	}

}if(k==1)
	{
		for(j=0;j<strlen(a);j++)
			my_printf("%c",a[j]);
	
	}

	return 0;
}
	