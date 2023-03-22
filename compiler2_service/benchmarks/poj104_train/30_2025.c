#include <header.h>

int main_bench()
{
	int n,i,k=0,p,s,d;
	my_scanf("%d",&n);
	for(i=0;i<=n;i++){
		if(i%7!=0){
			d=0;
			for(p=i;p>0;p=p/10)
			{
				if((p-7)%10!=0)
					continue;
				if((p-7)%10 == 0){
				d=1;
				break;
				}
			}
		if(d!=1){
			s=i*i;	
			k+=s;
			}
		}
	}
	my_printf("%d",k);
	return 0;
}

