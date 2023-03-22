#define NUM_ITER 1268

#include <header.h>

int main_bench()
{
	int n, bad, a[100]={0}, i, j, b;
	int all(int bad, int a[100]);
	my_scanf("%d", &n);
	for(i=0;i<n;i++){
		my_scanf("%d", &bad);
		if(bad==0)
			my_printf("60\n");
		else{
		for(j=0;j<bad;j++){
			my_scanf("%d", &a[j]);
		}
			b = all(bad, a);
			my_printf("%d\n", b);
		}
	}
	return 0;
}
int all(int bad, int a[100])
{
	int i;
	for(i=bad-1;i>=0;i--){
		if(a[i]+3*(i+1)<60)
			return (60-3*(i+1));
		else if(a[i]+3*i<=60&&a[i]+3*i>=57)
			return a[i];
		else
			continue;
	}
}

