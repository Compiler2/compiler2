#define NUM_ITER 34585

#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int i,j;
	int a,b,s=0;
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a,&b);
		if(a>b)
			s++;
		if(a<b)
			s--;
		if(a==2&&b==0)
			s=s-2;
		if(a==0&&b==2)
			s=s+2;
	}
	if(s==0)
		my_printf("Tie");
	if(s<0)
		my_printf("A");
	if(s>0)
		my_printf("B");
	return 0;
}