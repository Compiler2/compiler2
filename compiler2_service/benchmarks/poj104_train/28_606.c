#define NUM_ITER 1212098

#include <header.h>


int main_bench()
{
	char a[10000];
	long int beg[300],end[300];
	int i,j,n,k=1,t=0;
	gets(a);
	beg[0]=0;
	n=strlen(a);
	for(i=0;i<n-1;i++)
	{
		if(a[i]==' '&&a[i+1]!=' ') {beg[k]=i+1;k++;}
		if(a[i]!=' '&&a[i+1]==' ') {end[t]=i;t++;}
	}
	end[t]=n-1;
	for(j=0;j<=t;j++)
		my_printf("%d%c",end[j]-beg[j]+1,(j!=t)?',':'\n');
}