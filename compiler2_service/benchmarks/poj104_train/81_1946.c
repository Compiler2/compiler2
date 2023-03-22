#include <header.h>

int panduan(int m,int n) {
	if (m<5&&n<5) {
		return 1;
	}
	return 0;
}		
int main_bench()
{
	int a[5][5];
	int m,n;	
	int k,w,i;
	int t;
	for (k=0;k<5;k++)
	{
		for(w=0;w<5;w++)
			my_scanf("%d",&a[k][w]);
	}
	my_scanf("%d%d",&m,&n);
	if (panduan(m,n)==0)
		my_printf("error\n");
	else
	{
		for(i=0;i<5;i++)
		{
			t=a[m][i];
			a[m][i]=a[n][i];
			a[n][i]=t;
		}
		for (k=0;k<5;k++)
		{
			for (w=0;w<5;w++)
				if(w!=4)
				my_printf("%d ",a[k][w]);
				else 
					my_printf("%d\n",a[k][w]);
		}
	}
	return 0;
}
