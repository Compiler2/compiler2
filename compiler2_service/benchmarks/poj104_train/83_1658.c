#define NUM_ITER 69201

#include <header.h>


int main_bench()
{
	int i,j,n,point[11],score[11];
	float GPA[11],tol=0,sum=0,result;
	my_scanf("%d",&n);


	for(i=1;i<n+1;i++)
	{
		my_scanf("%d",&point[i]);

		sum=sum+point[i];
	}
	for(i=1;i<n+1;i++)
	{
		my_scanf("%d",&score[i]);
        if(score[i]>=90)   GPA[i]=4.0;
		else if(score[i]>=85) GPA[i]=3.7;
		else if(score[i]>=82) GPA[i]=3.3;
		else if(score[i]>=78) GPA[i]=3.0;
		else if(score[i]>=75) GPA[i]=2.7;
		else if(score[i]>=72) GPA[i]=2.3;
		else if(score[i]>=68) GPA[i]=2.0;
		else if(score[i]>=64) GPA[i]=1.5;
		else if(score[i]>=60) GPA[i]=1.0;
		else  GPA[i]=0;
		tol=tol+GPA[i]*point[i];
	}




	result=tol/sum;
	my_printf("%.2f",result);
	return 0;
}