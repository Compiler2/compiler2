#define NUM_ITER 25029

#include <header.h>

struct student
{
	int num;
	int all;
}person[99999];
int main_bench()
{
	int n,i,j,k,x,y;;
	struct student temp1,temp2;
	my_scanf("%d",&n);
	for(i=2;i>=0;i--)
	{
		my_scanf("%d %d %d",&person[i].num,&x,&y);
		person[i].all=x+y;
	}
	for(i=3;i<=n-1;i++)
	{
		my_scanf("%d %d %d",&person[i].num,&x,&y);
		person[i].all=x+y;
		k=person[i].all;
		if(k>person[0].all) {temp1=person[0]; temp2=person[1];  person[0]=person[i];person[1]=temp1;person[2]=temp2; continue;}
		if(k<=person[0].all&&k>person[1].all) {temp1=person[1];person[1]=person[i];person[2]=temp1;  continue;}
		if(k<=person[1].all&&k>person[2].all) {person[2]=person[i]; continue;}
		if(k<person[2].all) {continue;}
	}
	my_printf("%d %d\n",person[0].num,person[0].all);
	my_printf("%d %d\n",person[1].num,person[1].all);
	my_printf("%d %d",person[2].num,person[2].all);
	return 0;
}