#define NUM_ITER 65399

#include <header.h>

int main_bench(){
    int a,i,b,c,q,ist,sec;
	my_scanf("%d",&a);
	i=0;
	my_scanf("%d%d",&b,&c);
	if(b>c)ist=b,sec=c;
	else ist=c,sec=b;
	while(i<a-2){
		my_scanf("%d",&q);
		if(q>ist)
		{sec=ist;ist=q;}
		if(q>sec&&q<ist)
		{sec=q;}
		i++;
	}
	my_printf("%d\n%d",ist,sec);
	return 0;
}

