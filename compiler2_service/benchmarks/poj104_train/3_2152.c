#include <header.h>

int main_bench()
{
	
	int i,j,a,c,e,x,b,d,h;
    int k,n;
	int m[1000],t;
	my_scanf("%d%d",&n,&x);
	for(i=1;i<=n;i++){
	   my_scanf("%d",&m[i]);
	}
	for(i=1;i<=n;i++){
		for(j=i+1;j<=n;j++){
			if(m[i]+m[j]==x)
				goto A;	
			}
		}
	A:
	if(i==n+1) my_printf("no");
	else my_printf("yes");
	

	return 0;
}
