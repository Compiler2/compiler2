#define NUM_ITER 16483

#include <header.h>


int main_bench()
{
	struct student
	{int num;
	 int chi;
	 int math;
	}stu[100000];

	int n,i,j,mid;

	my_scanf("%d",&n);

	for(i=0;i<n;i++){
		my_scanf("%d%d%d",&stu[i].num,&stu[i].chi,&stu[i].math);
	}
  
	for(i=0;i<3;i++){
		for(j=n-1;j>0;j--){
			if(stu[j].math+stu[j].chi>stu[j-1].chi+stu[j-1].math){
				mid=stu[j].num;
				stu[j].num=stu[j-1].num;
				stu[j-1].num=mid;

				mid=stu[j].chi;
				stu[j].chi=stu[j-1].chi;
				stu[j-1].chi=mid;

				mid=stu[j].math;
				stu[j].math=stu[j-1].math;
				stu[j-1].math=mid;
			}
		}
	}

    for(i=0;i<3;i++){
		my_printf("%d %d\n",stu[i].num,stu[i].math+stu[i].chi);
	}
	
	return 0;
}