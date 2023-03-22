#define NUM_ITER 19564

#include <header.h>

	struct student
	{
	int xuehao;
	int shuxue;
	int yuwen;
	int zongfen;
	};


int main_bench()
{
		int n,i,e,j;
	my_scanf("%d", &n);

    struct student stu[100001];
	for(i=0;i<n;i++)
	{
		my_scanf("%d %d %d", &stu[i].xuehao,&stu[i].shuxue,&stu[i].yuwen);
		stu[i].zongfen=stu[i].shuxue+stu[i].yuwen;
	}
	for(i=1;i<4;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(stu[j].zongfen>=stu[j+1].zongfen)
			{
				stu[100000]=stu[j+1];
				stu[j+1]=stu[j];
				stu[j]=stu[100000];
			}
		}
	}
	for(i=n-1;i>n-4;i--)
	{
       my_printf("%d %d\n", stu[i].xuehao,stu[i].zongfen);
	}


	




	return 0;
}