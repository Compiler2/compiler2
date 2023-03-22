#define NUM_ITER 10318

#include <header.h>

int main_bench()
{
	struct stu
	{char name[20];
	int sco;
	int score;
	char a;
	char b;
	int p;
	};
	struct stu stu[100];
	int n,i,j;
    int k[100]={0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].sco,&stu[i].score,&stu[i].a,&stu[i].b,&stu[i].p);
    for(i=0;i<n;i++)
	{
		if(stu[i].sco>80&&stu[i].p>=1) k[i]=k[i]+8000;
		if(stu[i].sco>85&&stu[i].score>80) k[i]=k[i]+4000;
		if(stu[i].sco>90) k[i]=k[i]+2000;
		if(stu[i].sco>85&&stu[i].b=='Y') k[i]=k[i]+1000;
		if(stu[i].score>80&&stu[i].a=='Y') k[i]=k[i]+850;
	}
	int total=0;
	for(i=0;i<n;i++)
		total=total+k[i];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{if(k[j]>k[i]) break;}
		if(j==n) break;
	}
	my_printf("%s\n",stu[i].name);
	my_printf("%d\n",k[i]);
	my_printf("%d",total);
}