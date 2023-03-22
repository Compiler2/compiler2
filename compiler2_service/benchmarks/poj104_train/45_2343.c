#define NUM_ITER 1017780

#include <header.h>

int main_bench()
{
	char a[50],b[50];
	int i,j,k,n=0,m,res=-1;
	my_scanf("%s %s",b,a);
	j=strlen(a);
	k=strlen(b);
	for(n=0;n<j;n++)
	{
		m=0;
		while((m<k)&&(b[m]==a[m+n]))m++;
	    if(m==k)
		{
			res=n;
			break;
		}
	}
	if(res!=-1)my_printf("%d",res);
}