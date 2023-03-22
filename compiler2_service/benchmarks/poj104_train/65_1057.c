#include <header.h>

int main_bench()
{
	int n,a,b,i,c,d,e;
	my_scanf("%d",&n);
	i=1;
	c=0;
	d=0;
	e=0;
	while(i<=n){
		my_scanf("%d%d",&a,&b);
		if((a-b==-1)||(a-b==2)){c=c+1;}
		else{if(a-b==0){d=d+1;}
		else{e=e+1;}}
		i=i+1;}
	if(c>e){my_printf("A");}
	else{if(c==e){
		my_printf("Tie");}
		else{my_printf("B");}}
	return 0;
}
