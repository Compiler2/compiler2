#define NUM_ITER 37342

#include <header.h>


int main_bench()
{
	int n,i,s,max;
	int a[100];
	int b[100];
	int c[100];
	
	my_scanf("%d",&n);
	max=0;
	s=0;
	c[0]=0;
	for(i=0;i<n;i++){
		my_scanf("%d%d",&(a[i]),&(b[i]));
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90){
			c[s]++;
		}else{
			if(c[s]>max){
				max=c[s];
			}
			s++;
			c[s]=0;
		}
		if(c[s]>max){
				max=c[s];
			}
	}
	my_printf("%d\n",max);
	return 0;
}