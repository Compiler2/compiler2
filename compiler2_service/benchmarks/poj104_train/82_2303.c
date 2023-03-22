#define NUM_ITER 37458

#include <header.h>


int main_bench(){
	int n,x,y,i,j,k=0,a[1000]={0},ex;
    my_scanf("%d",&n);
	for(i=0;i<n-1;i++)
	{
		my_scanf("%d%d",&x,&y);
		if (x<=140&&x>=90&&y<=90&&y>=60)
			a[k]++;
		else
			k++;
	}
	my_scanf("%d%d",&x,&y);
	if (x<=140&&x>=90&&y<=90&&y>=60)
	{
		a[k]++;
		k++;
	}
	else
		k++;
	for(i=0;i<k;i++)
	{
		if(a[0]<a[i])
		{
			ex=a[0];
			a[0]=a[i];
			a[i]=a[0];
		}
	}
	my_printf("%d\n",a[0]);
	return 0;
}

