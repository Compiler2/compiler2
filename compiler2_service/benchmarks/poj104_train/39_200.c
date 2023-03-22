#define NUM_ITER 9574

#include <header.h>


struct student{
	char name[20];
	int pjcj,pycj;
	char ganbu,xibu;
	int article;
};

int main_bench()
{
	struct student *p;
	int n,i;
	int sum=0,max=0,maxnum,single=0;
	my_scanf("%d",&n);
	p= (struct student *)malloc( n*sizeof(struct student) );

	for(i=0 ; i<n ; i++,single=0 ){
		my_scanf("%s", &p[i].name);
		my_scanf("%d%d", &p[i].pjcj, &p[i].pycj);
		my_scanf(" %c %c", &p[i].ganbu, &p[i].xibu);
		my_scanf("%d", &p[i].article);

		if( p[i].pjcj>80 && p[i].article )
			single+=8000;
		if( p[i].pjcj>85 && p[i].pycj>80 )
			single+=4000;
		if( p[i].pjcj>90 )
			single+=2000;
		if( p[i].pjcj>85 && p[i].xibu=='Y')
			single+=1000;
		if( p[i].pycj>80 && p[i].ganbu=='Y')
			single+=850;

		if( single>max ){
			max=single;
			maxnum=i;
		}
		sum+=single;
	}

	my_printf("%s\n",p[maxnum].name);
	my_printf("%d\n",max);
	my_printf("%d\n",sum);
}
