#define NUM_ITER 1087889

#include <header.h>

int main_bench()
{
	char a[50],b[50];
	int i,lena,lenb;
	my_scanf("%s",a);
	my_scanf("%s",b);
	lena=strlen(a);
	lenb=strlen(b);
    for(i=0;i<=lenb-lena;i++)
	{
		if(b[i]==a[0]&&b[i+1]==a[1]&&b[i+lena-1]==a[lena-1])
		{my_printf("%d",i);
		break;}
	}
return 0;
}