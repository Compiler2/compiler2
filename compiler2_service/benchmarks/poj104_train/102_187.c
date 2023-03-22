#include <header.h>


double male[41];
double female[41];


int compare(const void* e1,const void* e2)
{
	double* p1=(double* )e1;
	double* p2=(double* )e2;
	if(*p1<*p2)
		return 0;
	else return 1;
}


int main_bench()
{
	int nCase,i;
	int f=0,m=0;
	char sex[10];
	double height;
	my_scanf("%d",&nCase);
	for(i=0;i<nCase;i++)
	{
		my_scanf("%s %lf",sex,&height);
		if(sex[0]=='m')
		{
			male[m]=height;
			m++;
		}
		else
		{
			female[f]=height;
			f++;
		}
	}


	qsort(male,m,sizeof(double),compare);
	qsort(female,f,sizeof(double),compare);


	for(i=0;i<m;i++)
		my_printf("%.2f ",male[i]);
	for(i=f-1;i>0;i--)
		my_printf("%.2f ",female[i]);
	my_printf("%.2f\n",female[0]);
	return 0;
}