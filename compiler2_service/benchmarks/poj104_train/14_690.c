#define NUM_ITER 17721

#include <header.h>

struct student
{
	int stuID;
	int yuwen;
	int shuxue;
	int zongfen;
}stu[100000];
int main_bench()
{
	int i,n,j,x,str;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d %d %d",&stu[i].stuID,&stu[i].yuwen,&stu[i].shuxue);
		stu[i].zongfen=stu[i].yuwen+stu[i].shuxue;
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(stu[j].zongfen>stu[j+1].zongfen||((stu[j].zongfen==stu[j+1].zongfen)&&(stu[j].stuID<stu[j+1].stuID)))
			{
				x=stu[j].zongfen;
				stu[j].zongfen=stu[j+1].zongfen;
				stu[j+1].zongfen=x;
				str=stu[j].stuID;
				stu[j].stuID=stu[j+1].stuID;
				stu[j+1].stuID=str;
			}
		}
			my_printf("%d %d\n",stu[n-1-i].stuID,stu[n-1-i].zongfen);
	}
	return 0;
}
