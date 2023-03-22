#include <header.h>

main_bench()
{
	int n,i,k,sut=0,sum=0;
	struct
	{
		char na[21];
		int sc;
		int op;
		char ga;
		char we;
		int nu;
		int su;
	}stu[100];
	for (i=0;i<100;i++)
	{
		stu[i].su=0;
	}
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf("%s",stu[i].na);
		my_scanf("%d",&stu[i].sc);
		my_scanf("%d ",&stu[i].op);
		my_scanf("%c ",&stu[i].ga);
		my_scanf("%c",&stu[i].we);
		my_scanf("%d",&stu[i].nu);
	}
	for (i=0;i<n;i++)
	{
		if ((stu[i].sc>80)&&(stu[i].nu>0))
			stu[i].su+=8000;
		if ((stu[i].sc>85)&&(stu[i].op>80))
			stu[i].su+=4000;
		if (stu[i].sc>90)
			stu[i].su+=2000;
		if ((stu[i].sc>85)&&(stu[i].we=='Y'))
			stu[i].su+=1000;
		if ((stu[i].op>80)&&(stu[i].ga=='Y'))
			stu[i].su+=850;
	}
	for (i=0;i<n;i++)
	{
		if (sut<stu[i].su)
		{
			k=i;
			sut=stu[i].su;
		}
	}
	for (i=0;i<n;i++)
		sum+=stu[i].su;
	my_printf("%s\n%d\n%d\n",stu[k].na,sut,sum);
}