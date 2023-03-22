#define NUM_ITER 10472

#include <header.h>

int main_bench()
{
	struct stu
	{
		char name[20];
		int q;
		int p;
		char g;
		char x;
		int l;
	}stu[100];
	int n,i,j;
	char m[100][20];
	int s,t=0,sum=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].q,&stu[i].p,&stu[i].g,&stu[i].x,&stu[i].l);
		s=0;
		if(stu[i].q>80&&stu[i].l>=1)
			s=s+8000;
		if(stu[i].q>85&&stu[i].p>80)
			s=s+4000;
		if(stu[i].q>90)
			s=s+2000;
		if(stu[i].q>85&&stu[i].x=='Y')
			s=s+1000;
		if(stu[i].p>80&&stu[i].g=='Y')
			s=s+850;
		sum=sum+s;
		if(s>t)
		{
			j=0;
			strcpy(m[j],stu[i].name);
			t=s;
			j++;
		}
		else if(s==t)
		{
			strcpy(m[j],stu[i].name);
			j++;
		}
	}
	my_printf("%s\n",m[0]);
	my_printf("%d\n",t);
	my_printf("%d\n",sum);
}
