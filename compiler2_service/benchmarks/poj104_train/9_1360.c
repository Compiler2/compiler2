#define NUM_ITER 13760

#include <header.h>


struct patient{
	char A[10];
	int age;
};

int main_bench(){
	int i,n,k,max,count;
	struct patient inter;
	struct patient *p;
	my_scanf("%d",&n);
	struct patient *sick=(struct patient*)malloc(sizeof(struct patient)*n);
	struct patient *waitlist=(struct patient*)malloc(sizeof(struct patient)*n);
	count=0;
	for(i=0;i<n;i++){
		my_scanf("%s %d",sick[i].A,&sick[i].age);
	}
	p=waitlist;
	for (i=0;i<n;i++)
	{
		if (sick[i].age>=60)
		{
			*p=sick[i];
			p++;
			count++;
		}
	}
	for (i=0;i<n;i++)
	{
		if (sick[i].age<60)
		{
			*p=sick[i];
			p++;
		}
	}
	for (i=1;i<count;i++)
	{
		for (k=0;k<count-i;k++)
		{
			if (waitlist[k].age<waitlist[k+1].age)
			{
				inter=waitlist[k+1];
				waitlist[k+1]=waitlist[k];
				waitlist[k]=inter;
			} 
		}
	}
	for (i=0;i<n;i++)
	{
		my_printf("%s\n",waitlist[i].A);
	}
	return 0;
}