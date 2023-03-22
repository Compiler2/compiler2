#include <header.h>

int main_bench()
{
	int n,s,i,a;
	my_scanf("%d",&n);
	i=1;
	s=0;
	while(i<=n){
		a=i/10;
		if(i%7!=0)
			if((i-7)%10!=0)
				if((a-7)%10!=0)
					s=s+i*i;
		i++;
	}
	my_printf("%d",s);
	return 0;
}