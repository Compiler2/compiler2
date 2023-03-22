#include <header.h>


struct stu
{
	int num;
	int ch;
	int ma;
};

int main_bench()
{
	int n,i,j,score[100000],max[2];
	struct stu STU[100000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d%d",&STU[i].num,&STU[i].ch,&STU[i].ma);
		score[i]=STU[i].ch+STU[i].ma;
	}
	for(j=0;j<3;j++)
	{
		for(i=0;i<n;i++)
		{
			if(score[i]>max[1])
			{
				max[0]=STU[i].num;
				max[1]=score[i];
			}
		}
		my_printf("%d %d\n",max[0],max[1]);
		max[1]=0;
		int temp=max[0];
		score[temp-1]=0;
	}
	return 0;
}
