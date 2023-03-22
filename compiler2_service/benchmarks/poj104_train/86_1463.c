#include <header.h>


int main_bench(){
	int i,n,m,x[110],ctr,time;
	my_scanf("%d",&n);
	while(n--){
		ctr=0;
		time=0;
		my_scanf("%d",&m);
		for(i=1;i<=m;i++){
			my_scanf("%d",&x[i]);
			if(time+x[i]-ctr<=60)
			{
				time+=x[i]-ctr+3;
				ctr=x[i];
			}
		}
		if(time<60)
			ctr+=60-time;
		my_printf("%d\n",ctr);
	}
	return 0;
}