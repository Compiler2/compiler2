#define NUM_ITER 103824

#include <header.h>

int miao(int x,int y,int z);
int main_bench(){
	int a,b,c,d,e,f,s;
	s = 0;
	my_scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	my_scanf("\n");
	while((a>=1) && (b>=0) && (c>=0) && (e>=0) && (f>=0) && (d>=1)){
		s = miao(d+12,e,f) - miao(a,b,c);
		my_printf("%d\n",s);
		my_scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		my_scanf("\n");
	}
	return 0;
}

int miao(int x,int y,int z){
	int m;
	m = (3600 * x) + (60 * y) + z;
	return m;
}