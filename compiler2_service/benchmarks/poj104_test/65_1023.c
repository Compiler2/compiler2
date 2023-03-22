#include <header.h>

int main_bench(){
	int n,a=0,b=0,c,d,i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&c,&d);
		if(c==d)
			continue;
		else if(c==0&&d==2)
			b++;
		else if(c==2&&d==0)
			a++;
		else if(c-d<0)
			a++;
		else if(c-d>0)
			b++;
	}
	if(a>b)
		my_printf("A");
	if(a==b)
		my_printf("Tie");
	if(a<b)
		my_printf("B");
	return 0;
}