#include <header.h>

int main_bench()
{
    int n,x,y;
	int a[201];
		int b[201];
    a[201]=0;
	b[201]=0;
	x=0;
	y=0;
	my_scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		my_scanf("%d%d",&a[i],&b[i]);
	    if(a[i]+1==b[i]||a[i]-2==b[i])
			x++;
		else if(a[i]!=b[i])
			y++;}
	if(x>y)
		my_printf("A");
	else if(x<y)
		my_printf("B");
	else my_printf("Tie");
	return 0;

}
