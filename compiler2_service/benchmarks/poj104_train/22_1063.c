#include <header.h>

int a[10000];
int main_bench()
{
	int m=-999,n=-999,t;
    char c;
    do{
		my_scanf("%d",&t);
        if(t>m)n=m,m=t;
        else if(t<m&&t>n)n=t;
        c=getchar();
	}while(c>=32);
    if(n==-999)
	my_printf("No\n");
	else my_printf("%d\n",n);
	return 0;
}
