#define NUM_ITER 195862

#include <header.h>


int i,j,k,h,m,n,a[300];
char c;
int t1=-1,t2=-1,num=300;

int main_bench()
{
	for(k=0;k<=300;k++)
	{
			my_scanf("%d%c",&a[k],&c);
			if(c=='\n')
			{
				num=k;
				break;
			}
	}	

	for(j=0;j<=num;j++)
	{
		if(a[j]>=t1) t1=a[j];
	}

	for(i=0;i<=num;i++)
	{
		if((a[i]>=t2)&&(a[i]<t1)) t2=a[i];
	}
	if(t2==-1) my_printf("No");
	else my_printf("%d",t2);

return 0;
}
