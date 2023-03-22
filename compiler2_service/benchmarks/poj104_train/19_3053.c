#define NUM_ITER 800963

#include <header.h>

int main_bench()
{
	char a[100],b[100],c[100],t=1;
	char tihuan[100][100];
	int i,j=0,m=-1,n;
	gets(a);
	my_scanf("%s",b);
	my_scanf("%s",c);
	for(i=0;;i++)
	{
		if(a[i]==' ')
		{
			n=m;
			m=i;
			strncpy(tihuan[j],a+n+1,m-n-1);
				tihuan[j][m-n-1]='\0';
				j++;
		}
		if(a[i]=='\0')
		{
			n=m;
			m=i;
				strncpy(tihuan[j],a+n+1,m-n-1);
				tihuan[j][m-n-1]='\0';
				j++;
				break;
		}
	}
	for(i=0;i<j;i++)
	{
		if(strcmp(tihuan[i],b)==0)
		{
			strcpy(tihuan[i],c);
		}
	}
	for(i=0;i<j;i++)
		if(t)
		{
		my_printf("%s",tihuan[i]);
		t=0;
		}
		else
			my_printf(" %s",tihuan[i]);
	return 0;
}

