#define NUM_ITER 3413

#include <header.h>

struct student 
{	char s[21];
	int a;
	int b;
	char m;
	char p;
	int c;
	int q;
};
int main_bench()
{
	int n,i,j;
	int long sum=0;
	struct student stu[100]; 
	struct student  l;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s %d %d %c %c %d",stu[i].s,&stu[i].a,&stu[i].b,&stu[i].m,&stu[i].p,&stu[i].c);
	}
	for(i=0;i<n;i++)
	{       
		    stu[i].q=0;
			if((stu[i].a>80) &&( stu[i].c>0))   
				stu[i].q+=8000;
			if((stu[i].a>85 )&& (stu[i].b>80))   
				stu[i].q+=4000;
		    if(stu[i].a>90)                 
				stu[i].q+=2000;
            if((stu[i].a>85) && (stu[i].p=='Y'))  
				stu[i].q+=1000;
            if((stu[i].b>80 )&& (stu[i].m=='Y'))  
				stu[i].q+=850;
	}
	for(j=1;j<n;j++)
	{
		for(i=0;i<n-j;i++)
	 { 
		 if(stu[i+1].q>stu[i].q)
		 {
	     l=stu[i];
		 stu[i]=stu[i+1];
		 stu[i+1]=l;
		 }
	 }
	}
	 for(i=0;i<n;i++)
		 sum+=stu[i].q;
my_printf("%s",stu[0].s);
my_printf("\n%d\n",stu[0].q);
my_printf("%d",sum);
}