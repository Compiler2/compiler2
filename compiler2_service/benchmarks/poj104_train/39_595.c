#define NUM_ITER 10444

#include <header.h>



int sch(int e,int test,char mon,char reg,int art)
{
	int total=0;
	if(e>80&&art>=1) total+=8000;
	if(e>85&&test>80) total+=4000;
	if(e>90) total+=2000;
	if(e>85&&reg=='Y') total+=1000;
	if(test>80&&mon=='Y') total+=850;
	return total;
}
int main_bench()
{
	int peoplenumber,i,g,c,a,sum=0,most=0;
	char name[100],top[100],m,r;
	my_scanf("%d",&peoplenumber);
	for(i=0;i<peoplenumber;i++)
	{
		my_scanf("%s%d %d %c %c %d",name,&g,&c,&m,&r,&a);
		if(sch(g,c,m,r,a)>most)
		{
			strcpy(top,name);
			most=sch(g,c,m,r,a);
		}
		sum+=sch(g,c,m,r,a);
	}
	my_printf("%s\n%d\n%d",top,most,sum);
	
	

	return 0;
}
