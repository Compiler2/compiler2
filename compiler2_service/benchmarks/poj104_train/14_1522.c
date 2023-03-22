#include <header.h>

struct student
{
	int no;
	int yuwen;
	int shuxue;
	int total;
};
int main_bench()
{
	int n,i;
	struct student *p,*stu,temp;
	my_scanf("%d",&n);
	stu=(struct student *)calloc(n,sizeof(struct student));
	for(p=stu;p-stu<n;p++)
	{
		my_scanf("%d%d%d",&p->no,&p->yuwen,&p->shuxue);
		p->total=p->yuwen+p->shuxue;
	}
	for(i=0;i<3;i++)
	{
		for(p=stu+n-1;p>stu+i;p--)
		{
			if(p->total>(p-1)->total)
			{
				temp=*p;
				*p=*(p-1);
				*(p-1)=temp;
			}
		}
		my_printf("%d %d\n",p->no,p->total);
	}
	free(stu);
}