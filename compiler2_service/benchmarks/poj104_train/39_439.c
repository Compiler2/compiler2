#define NUM_ITER 8293

#include <header.h>

struct student
{
	char name[21];
	short finalscore;
	short clascore;
	char position;
	char westen;
	short essaynum;
	int reward;

}
;
int main_bench()
{
	int nstu=4;
	int total=0;
	my_scanf("%d",&nstu);
	struct student *p=(struct student*)malloc(nstu*sizeof(struct student));
	int i;
	for(i=0;i<nstu;i++)
	{
		my_scanf("%s",p[i].name);
		my_scanf("%d",&(p[i].finalscore));
		my_scanf("%d ",&(p[i].clascore));
		my_scanf("%c ",&p[i].position);
		my_scanf("%c",&p[i].westen);
		my_scanf("%d",&(p[i].essaynum));
		p[i].reward=0;
	}
	for(i=0;i<nstu;i++)
	{
		if(p[i].finalscore>80&&p[i].essaynum>0)
			(p[i].reward)+=8000;
		if(p[i].finalscore>85&&p[i].clascore>80)
			(p[i].reward)+=4000;
		if(p[i].finalscore>90)
			(p[i].reward)+=2000;
		if(p[i].westen=='Y'&&p[i].finalscore>85)
			(p[i].reward)+=1000;
		if(p[i].position=='Y'&&p[i].clascore>80)
			(p[i].reward)+=850;
	}
	int money=p[0].reward;
	for(i=0;i<nstu-1;i++)
	{                  
		if(money<p[i+1].reward)
			money=(p[i+1].reward);
		total+=(p[i].reward);
	}
	total+=(p[nstu-1].reward);
	int j;
	for(j=0;j<nstu;j++)
	{
		if(p[j].reward==money)
			break;
	}
	my_printf("%s\n",p[j].name);
	my_printf("%d\n",p[j].reward);
	my_printf("%d\n",total);
	return 0;
}


