#define NUM_ITER 31553

#include <header.h>

int main_bench(){
	int n,x,y,i,hour[100];
	int normal[100],m=0;
	my_scanf("%d",&n);
	for(i=0;i<100;i++)
		normal[i]=0;
	for(i=0;i<n;i++){
		my_scanf("%d%d",&x,&y);
		if(x<90||x>140||y<60||y>90)
			m++;
		else
			normal[m]++;
	}
	for(i=0;i<=m;i++){
		if(normal[i]<normal[i-1])
			normal[i]=normal[i-1];
	}
	my_printf("%d",normal[i-1]);
}