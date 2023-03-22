#define NUM_ITER 8514

#include <header.h>

int main_bench()
{
	struct stu
	{
		char name[21];
		int qm;
		int cm;
		char xs[21];
		char west[21];
		int paper;
		int sp;
	};
	struct stu a[101];
	int i,n;
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf("%s",&a[i].name);
		my_scanf("%d",&a[i].qm);
		my_scanf("%d",&a[i].cm);
		my_scanf("%s",&a[i].xs);
		my_scanf("%s",&a[i].west);
		my_scanf("%d",&a[i].paper);
		a[i].sp=0;
		if ((a[i].qm>80)&&(a[i].paper>0)) a[i].sp+=8000;
		if ((a[i].qm>85)&&(a[i].cm>80)) a[i].sp+=4000;
		if (a[i].qm>90) a[i].sp+=2000;
		if ((a[i].qm>85)&&(a[i].west[0]=='Y')) a[i].sp+=1000;
		if ((a[i].cm>80)&&(a[i].xs[0]=='Y')) a[i].sp+=850;
	}
	int max,total;
	max=0;
	total=0;
	for (i=0;i<n;i++)
	{
		if (a[i].sp>a[max].sp) max=i;
		total=total+a[i].sp;
	}
	my_printf("%s\n",a[max].name);
	my_printf("%d\n",a[max].sp);
	my_printf("%d\n",total);
	return 0;
}
