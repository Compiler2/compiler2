#define NUM_ITER 3523

#include <header.h>

struct student
{
	char name[20];
	int grade1;
	int grade2;
	char gb;
	char xb;
	int lunwen;
};
struct student stu[100],t;
int main_bench()
{
	int n,i,jj[100]={0},maxjj,sum=0,j,k;
	char maxname[20];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].grade1,&stu[i].grade2,&stu[i].gb,&stu[i].xb,&stu[i].lunwen);
	for(i=0;i<n;i++)
	{
		if(stu[i].grade1>80&&stu[i].lunwen>=1)
			jj[i]=jj[i]+8000;
		if(stu[i].grade1>85&&stu[i].grade2>80)
			jj[i]=jj[i]+4000;
		if(stu[i].grade1>90)
			jj[i]=jj[i]+2000;
		if(stu[i].grade1>85&&stu[i].xb=='Y')
			jj[i]=jj[i]+1000;
		if(stu[i].grade2>80&&stu[i].gb=='Y')
			jj[i]=jj[i]+850;
	}
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n-1-j;i++)
		{
			if(jj[i]<jj[i+1])
			{
				t=stu[i];
				stu[i]=stu[i+1];
				stu[i+1]=t;
				k=jj[i];
				jj[i]=jj[i+1];
				jj[i+1]=k;		
			}
		}
	}
	maxjj=jj[0];
	strcpy(maxname,stu[0].name);
	for(i=0;i<n;i++)
		sum=sum+jj[i];
	my_printf("%s\n",maxname);
	my_printf("%d\n",maxjj);
	my_printf("%d\n",sum);
}



