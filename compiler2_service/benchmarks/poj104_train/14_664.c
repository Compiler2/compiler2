#define NUM_ITER 19033

#include <header.h>

main_bench()
{
	struct student{
		int id;
		float yuwen,shuxue,sum;
	}stu[100000],t;
	int n,i,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	  {my_scanf("%d %f %f",&stu[i].id,&stu[i].yuwen,&stu[i].shuxue);
	   stu[i].sum=stu[i].yuwen+stu[i].shuxue;}
    for(i=0;i<3;i++)
      for(j=n-1;j>i;j--)
       	if(stu[j].sum>stu[j-1].sum)
       {
       	t=stu[j];
       	stu[j]=stu[j-1];
       	stu[j-1]=t;
       }
    for(i=0;i<3;i++)
     my_printf("%d %g\n",stu[i].id,stu[i].sum);
}