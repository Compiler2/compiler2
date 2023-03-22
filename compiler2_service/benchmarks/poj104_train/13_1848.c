#define NUM_ITER 5817

#include <header.h>

int main_bench()
{
	int n,i,j,s=0,a[20000],sign;
	int b[20000]={0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
		sign=0;
		for(j=0;j<i;j++){
			if(a[j]==a[i]){
				sign=sign+1;}
		}
		if(sign==0){
			b[s]=a[i];
			s++;
		}
	}
	for(i=0;i<s;i++){
		if(i!=s-1)(my_printf("%d ",b[i]));
                else my_printf("%d",b[i]);}
	return 0;
}



