#define NUM_ITER 1336066

#include <header.h>

int main_bench()
{
	int n,m,i,b[111],j,p,w=0,l=0;
	char a[1111];
	gets(a);
	p=strlen(a);
	for(j=0;;j++)
	{
		b[j]=0;
		for(i=l;*(a+i)!=' '&&*(a+i)!='\0';i++)
			b[j]=b[j]+1;
	    m=i;
		w=0;
		for(i=m;*(a+i)==' ';i++)
			w=w+1;
		l=m+w;
        if(i==p) break;
	}
	n=j;
    for(j=0;j<n;j++)
		my_printf("%d,",b[j]);
	my_printf("%d",b[n]);

}
