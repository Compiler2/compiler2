#define NUM_ITER 14954

#include <header.h>

struct stu
{
	int num;
	struct stu *next;	
};

int main_bench()
{
	int i=0,n,a,b,score,first=0,second=0,third=0;
	struct stu *head,*p,*p1,*p2,*p3;
	my_scanf("%d",&n);
	head=p=(struct stu *)malloc(sizeof(struct stu));
	while(i++<n)
	{
		my_scanf("%d %d %d",&(*p).num,&a,&b);
		score=a+b;
if(score>first)
		{
			third=second;second=first;first=score;
			p3=p2;p2=p1;p1=p;
		}
		else if(score>second){third=second;second=score;p3=p2;p2=p;}
		else if(score>third){third=score;p3=p;}
		p=(*p).next=(struct stu *)malloc(sizeof(struct stu));
	}
	my_printf("%d %d\n%d %d\n%d %d\n",(*p1).num,first,(*p2).num,second,(*p3).num,third);
}