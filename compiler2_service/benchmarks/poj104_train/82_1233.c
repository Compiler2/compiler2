#include <header.h>

int main_bench()
{
	int n,i,j,x,y,max=0,sum[50]={0};
	my_scanf("%d",&n);
	for(i=j=0;i<n;i++){
		my_scanf("%d%d",&x,&y);
		if(x>=90&&x<=140&&y>=60&&y<=90)
			sum[j]++;
		else
			if(sum[j])
				j++;
	}
	for(i=0;i<50;i++)
		if(max<=sum[i])
			max=sum[i];
	my_printf("%d\n",max);
	return 0;
}
