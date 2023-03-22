#include <header.h>

int main_bench()
{
	int n,i,j,k,m=0;
	struct student 
	{
		char name[20];
		int qm;
		int bj;
		char xg;
		char xb;
		int lw;
		int jj;
	};
	struct student stu[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].qm,&stu[i].bj,&stu[i].xg,&stu[i].xb,&stu[i].lw);
	}
	for(i=0;i<n;i++)
	{     stu[i].jj=0;
		if(stu[i].qm>80&&stu[i].lw>0)
          stu[i].jj=stu[i].jj+8000;
		if(stu[i].qm>85&&stu[i].bj>80)
		stu[i].jj=stu[i].jj+4000;
		if(stu[i].qm>90)
			stu[i].jj=stu[i].jj+2000;
		if(stu[i].qm>85&&stu[i].xb=='Y')
			stu[i].jj=stu[i].jj+1000;
       if(stu[i].bj>80&&stu[i].xg=='Y')
		   stu[i].jj=stu[i].jj+850;
	}
	for(i=0;i<n;i++)
	{   k=0;
		for(j=0;j<n;j++)
		{
			if(stu[i].jj<stu[j].jj)
			break;
			else
				k++;
		}
		if(k==n)
		{my_printf("%s\n%d\n",stu[i].name,stu[i].jj);
		break;}
    }
	for(i=0;i<n;i++)
	m=m+stu[i].jj;
	my_printf("%d\n",m);
}

		

