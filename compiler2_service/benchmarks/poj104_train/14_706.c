#include <header.h>


struct statistics
	{
		int num;
		int chinese;
		int math;
		int sum;
	} form[100000],temp;
int main_bench()
{
	
	int n;
	my_scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		my_scanf("%d %d %d",&form[i].num,&form[i].chinese,&form[i].math);
		form[i].sum=form[i].chinese+form[i].math;
	}
	for(i=0;i<3;i++)
	{
		int k=i;
		for(j=i+1;j<n;j++)
		{
			if(form[j].sum>form[k].sum)
			{
				k=j;
			}
		}
		if (k!=i)
		{
			temp=form[i];
			form[i]=form[k];
			form[k]=temp;

		}
	}
	for(i=0;i<3;i++)
		my_printf("%d %d\n",form[i].num,form[i].sum);
	return 0;
}