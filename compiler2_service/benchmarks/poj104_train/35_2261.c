#define NUM_ITER 10354

#include <header.h>

int main_bench()
{
	int i,j,t,r,c,s=0,max,flag,a[9][9];
	my_scanf("%d,%d",&r,&c);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			my_scanf("%d",&a[i][j]);
	for(i=0;i<r;i++){
		for(j=0,max=0;j<c;j++)
			if(a[i][j]>a[i][max])
				max=j;
		for(t=0,flag=0;t<r;t++)
			if(a[t][max]>=a[i][max])
				flag++;
		if(flag==r){
			s=1;
			break;
			}
	}
	if(s)
		my_printf("%d+%d",i,max);
	else
		my_printf("No");
}