#define NUM_ITER 10743

#include <header.h>

int main_bench()
{
	struct Student
	{
		int num;
		int ch;
		int math;
	}stu[100000];
	int n,i,x=0,m=0,k=0,j,a[100000]={0};
	my_scanf("%d",&n);
	for(i=0;i<n-1;i++)
	{
		my_scanf("%d %d %d\n",&stu[i].num,&stu[i].ch,&stu[i].math);
	    a[i]=stu[i].ch+stu[i].math;
	}
	for(j=0;j<3;j++)
	{
		for(i=0;i<n;i++)
	{       
		
	   		if(a[i]>m)
		    {
			m=a[i];
		    x=stu[i].num;
			k=i;
			}
			
	}
	my_printf("%d %d\n",x,m);	a[k]=0;
            m=0;x=0;
    }
	return 0;
}






