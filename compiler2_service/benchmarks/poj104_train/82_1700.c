#define NUM_ITER 35253

#include <header.h>


int main_bench()
{
	int n,sp[101],dp[101],d[101],h=0,max=0;
	int i,j;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		my_scanf("%d%d",&sp[i],&dp[i]);
		if(sp[i]>=90&&sp[i]<=140&&dp[i]>=60&&dp[i]<=90){
			h++;
			d[i]=h;
		}
		else
			d[i]=h=0;
	}



	for(j=1;j<=n;j++){
		if(max>=d[j])
			continue;
		else 
			max=d[j];
	}
	my_printf("%d\n",max);
}