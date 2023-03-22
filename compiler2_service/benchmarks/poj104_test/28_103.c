#define NUM_ITER 1321618

#include <header.h>

int main_bench()
{
	char a[3000];
	int l[300],i,p,k,ch,j;
	gets(a);
	ch=strlen(a);
	for(i=0,j=0,l[0]=0;i<ch;i++)
	{
		if(a[i]!=' ')
			l[j]++;
		if(a[i]==' ')
		{
			j++;
			l[j]=0;
		}
	}
	p=j;
	for(i=0,k=0;i<=p;i++)
	{
		if(l[i]!=0)
			k=i;
	}
	for(i=0;i<k;i++)
		if(l[i]!=0)
    my_printf("%d,",l[i]);
	my_printf("%d\n",l[k]);
}
