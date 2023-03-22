#define NUM_ITER 1525

#include <header.h>

int main_bench()
{
	int a,b,c,d,e,f,g[1000],i,j;
	for(i=1;i<=1000;i++){
		my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
			break;
		g[i]=f-c+60*(e-b)+3600*(12+d-a);
	}
	for(j=1;j<i;j++){
		my_printf("%d\n",g[j]);
	}
				return 0;
}