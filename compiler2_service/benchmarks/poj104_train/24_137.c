#define NUM_ITER 1017345

#include <header.h>

int main_bench()
{
	char a[1000],b[1000][50];
	int n=0,p,i,j,s,m;
	gets(a);
	s=strlen(a);
	for(i=0;i<=s-1;)
	{
		for(j=i,m=0;a[j]!=' '&&j<=s-1;j++,m++)
			b[n][m]=a[j];
		b[n][m]='\0';
		n++;
		i=j;
        if(a[i]==' ')
			i++;
	}
	for(i=0;i<=n-1;i++)
	{
		for(p=j=0;j<=n-1;j++)
		{
			if(strlen(b[i])>=strlen(b[j])) 
			p++;
		}
	    if(p==n) 
		{
		    my_printf("%s\n",b[i]);
		    break;
		}
	}
    for(i=0;i<=n-1;i++)
	{
		for(p=j=0;j<=n-1;j++)
		{
			if(strlen(b[i])<=strlen(b[j]))
			p++;
		}
	    if(p==n) 
		{
		    my_printf("%s\n",b[i]);
		    break;
		}
	}
}
	
	
	

