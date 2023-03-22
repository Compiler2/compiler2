#define NUM_ITER 4125

#include <header.h>

struct student 
{
	char name[20];
	int qipin;
	int banpin;
	char ganbu;
	char xixue;
	int lunwen;
	int jj;
};
int main_bench()
{   
    int max(struct student s[100],int n);
	struct student stu[100];

	int i,m=0,sum=0,n;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
	    my_scanf("%s",stu[i].name);
	 my_scanf("%d %d %c %c %d",&stu[i].qipin,&stu[i].banpin,&stu[i].ganbu,&stu[i].xixue,&stu[i].lunwen);
	 stu[i].jj=0;
	if(stu[i].qipin>80&&stu[i].lunwen>0)
		 stu[i].jj=stu[i].jj+8000;
	if(stu[i].qipin>85&&stu[i].banpin>80)
		 stu[i].jj=stu[i].jj+4000;
	 if(stu[i].qipin>90)
        stu[i].jj=stu[i].jj+2000;
	 if(stu[i].qipin>85&&stu[i].xixue=='Y')
        stu[i].jj=stu[i].jj+1000;
      if(stu[i].banpin>80&&stu[i].ganbu=='Y')
       stu[i].jj=stu[i].jj+850;
	} 

	for(i=0;i<n;i++)
	sum=sum+stu[i].jj;
	m=max(stu,n);
    puts(stu[0].name);
   my_printf("%d\n%d\n",m,sum);
}
int max(struct student s[100],int n)
{
	int i,j;
	struct student t;
   for(i=0;i<n-1;i++)
			for(j=i+1;j<n;j++)
			if(s[i].jj<s[j].jj)
		{	
			t=s[j];
		    s[j]=s[i];
			s[i]=t;
			}
       return (s[0].jj);
}


