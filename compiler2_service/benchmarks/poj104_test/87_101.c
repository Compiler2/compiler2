#include <header.h>

int main_bench ()
{
	int a,b,c,d,e,f,g,h;
	while(my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f)&&a!=0){
		g=(d+12-a)*60*60;
		h=(e-b)*60+g+f-c;
		my_printf("%d\n",h);
	}
	return 0;
}