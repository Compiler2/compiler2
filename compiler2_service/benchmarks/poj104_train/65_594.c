#include <header.h>

int main_bench(){
	int i,n,a=0,b=0,c[200],d[200],e[200];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&c[i],&d[i]);
		e[i]=c[i]-d[i];
		if(e[i]==-1||e[i]==2)
			a++;
		else if(e[i]==1||e[i]==-2)
			b++;
	}
	if(a>b)
		my_printf("A");
	else if(a<b)
		my_printf("B");
	else
		my_printf("Tie");
return 0;
}