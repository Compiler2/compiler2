#define NUM_ITER 808602

#include <header.h>

int main_bench()
{
	char a[256],b[256],c[256],d[256],e[256];
	int i,j,lena,lenb,m,n,k;
	my_scanf("%s%s%s",a,b,c);
	lena=strlen(a);
	lenb=strlen(b);
	for(i=0;i<lena;i++)
	{
		m=0;
		for(j=i;j<i+lenb;j++)
		{
			if(b[j-i]!=a[j])
		       m=1;
		}
		if(m==0)
		{
			for(n=0;n<i;n++)
			{
				d[n]=a[n];
			}
			d[n]='\0';
			for(k=i+lenb;k<lena;k++)
			{
				e[k-i-lenb]=a[k];
			}
			e[k-i-lenb]='\0';
			my_printf("%s%s%s",d,c,e);
			break;
		}
    }
	if(m==1)
		my_printf("%s",a);
	return 0;
}