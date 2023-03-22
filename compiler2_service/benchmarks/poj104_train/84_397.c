#define NUM_ITER 56990

#include <header.h>


int main_bench()
{
	int len,i,m,b1,b2,a[100];
	my_scanf("%d",&len);
    for(i=0;i<len;i++){
	my_scanf("%d",&a[i]);
	}
	b1=a[0];
	b2=a[1];
    for(i=0;i<len;i++){
		if(b1<a[i]){
		b1=a[i];
		m=i;
		}
	}
	for(i=0;i<len;i++){
		if(i!=m&&b2<a[i]){
		b2=a[i];
		}
	}
	my_printf("%d\n%d",b1,b2);
	return 0;
}
