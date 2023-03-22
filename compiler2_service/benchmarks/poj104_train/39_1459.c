#include <header.h>

struct student
{
	char name[50];
	int score;
	int pin;
	char stu;
	char west;
	int num;
};

int main_bench()
{
	struct student a[100];
	long int n,i,j,k,sum[100]={0},total=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s %d %d %c %c %d",a[i].name,&a[i].score,&a[i].pin,&a[i].stu,&a[i].west,&a[i].num);
		if(a[i].score>80&&a[i].num>=1) sum[i]=sum[i]+8000;
		if(a[i].score>85&&a[i].pin>80) sum[i]=sum[i]+4000;
		if(a[i].score>90) sum[i]=sum[i]+2000;
		if(a[i].score>85&&a[i].west=='Y') sum[i]=sum[i]+1000;
		if(a[i].pin>80&&a[i].stu=='Y') sum[i]=sum[i]+850;
		total=total+sum[i];
	}
	k=sum[0];
	for(i=1;i<n;i++)
	{
		if(k<sum[i])
		{
			k=sum[i];
			j=i;
		}
	}

	my_printf("%s\n%ld\n%ld\n",a[j].name,sum[j],total);
}




