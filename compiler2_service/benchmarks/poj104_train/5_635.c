#define NUM_ITER 1038896

#include <header.h>

int main_bench()
{
	float x,y,k=0;
	int i,j;
	char a[501],b[501];
	my_scanf("%f",&x);
	my_scanf("%s",a);
	my_scanf("%s",b);
	for(i=0;a[i];i++)
		if(!(a[i]=='A'||a[i]=='T'||a[i]=='G'||a[i]=='C')){
			my_printf("error\n");
			return 0;
		}
	for(j=0;b[j];j++)
		if(!(b[j]=='A'||b[j]=='T'||b[j]=='G'||b[j]=='C')){
			my_printf("error\n");
			return 0;
		}
	if(i!=j){
		my_printf("error\n");
		return 0;
	}
	for(i=0;a[i];i++)
		if(a[i]==b[i])
			k+=1;
	y=k/j;
	if(y>x)
		my_printf("yes\n");
	else
		my_printf("no\n");
	return 0;
}