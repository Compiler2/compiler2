#define NUM_ITER 17423

#include <header.h>

struct hospital
	{
		char ID[11];
		int age;
	}old[100],young[100],all[100],temp;
void sequence(struct hospital matrix[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(matrix[j].age<matrix[j+1].age)
			{
				temp=matrix[j];
				matrix[j]=matrix[j+1];
				matrix[j+1]=temp;
			}
		}
	}
}

	

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		my_scanf("%s %d",all[i].ID,&all[i].age);
	}
	int oi=0,yi=0;
	for(i=0;i<n;i++)
	{
		if(all[i].age>=60)
		{
			old[oi]=all[i];
			oi++;
		}
		else
		{
			young[yi]=all[i];
			yi++;
		}
	}
	sequence(old,oi);
	for(i=0;i<oi;i++)
	{
		my_printf("%s\n",old[i].ID);
	}
	for(i=0;i<yi;i++)
	{
		my_printf("%s\n",young[i].ID);
	}
	return 0;
}
