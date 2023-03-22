#include <header.h>

int main_bench()
{
	char a[60],b[60],c[60];
	int i,j,k,m,n;
	my_scanf("%s%s",a,b);
	m=strlen(a);
	n=strlen(b);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			if(a[j]==b[i+j])k++;
		if(k==m)break;
	    k=0;
	
	}
    my_printf("%d",i);
	





}