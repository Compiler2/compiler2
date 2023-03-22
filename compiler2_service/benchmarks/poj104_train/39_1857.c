#define NUM_ITER 10689

#include <header.h>


int main_bench()
{
	struct student
	{
		char name[21];
		int score1;
		int score2;
		char leader;
		char west;
		int essay;
		struct student *next,*last;
	};
	struct student *p;
	int n,i,sum=0,scholar,max=0;
	char goodstudent[21];
	my_scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		p=(struct student*)malloc(sizeof(struct student));
		my_scanf("%s%d%d %c %c%d",p->name,&p->score1,&p->score2,&p->leader,&p->west,&p->essay);
		scholar=0;
		if(p->score1>80&&p->essay>=1) scholar+=8000;
		if(p->score1>85&&p->score2>80) scholar+=4000;
		if(p->score1>90) scholar+=2000;
		if(p->score1>85&&p->west=='Y') scholar+=1000;
		if(p->score2>80&&p->leader=='Y') scholar+=850;
		sum+=scholar;
		if(scholar>max)
		{
			max=scholar;
			strcpy(goodstudent,"");
			strcpy(goodstudent,p->name);
		}
		free(p);
	}
	my_printf("%s\n%d\n%d",goodstudent,max,sum);
	return 0;
}