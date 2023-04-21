#define NUM_ITER 4429

#include <header.h>

int main_bench()
{
	int n,i,j,t,k=0,ss[10000];
	my_scanf("%d",&n);
	for(i=2;i<=n;i++){
		t=1;
		for(j=2;j<i;j++){
			if(i%j==0)
				t=0;
		}
		if(t==1){
			ss[k]=i;
			k++;
		}
	}
	t=0;
	for(i=0;i<k;i++){
		if(ss[i+1]-ss[i]==2){
			my_printf("%d %d\n",ss[i],ss[i+1]);
			t++;
		}
		else if(ss[i+2]-ss[i]==2){
			my_printf("%d %d\n",ss[i],ss[i+2]);
			t++;
		}
	}
	if(t==0)
		my_printf("empty");
	return 0;
}