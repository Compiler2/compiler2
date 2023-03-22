#define NUM_ITER 25264

#include <header.h>

 struct student
{int id;
 int chinese;
 int maths;
 int total;
};
int main_bench()
{ 
	int n,i;
    struct student s,s1,s2,s3;
	my_scanf("%d",&n);
	s2.total=s1.total=s3.total=-1;
	for(i=0;i<n;i++)
	{	my_scanf("%d %d %d",&s.id,&s.chinese,&s.maths);
		s.total=s.chinese+s.maths;
		if(s.total>s1.total)
		{	s3=s2;
		    s2=s1;
			s1=s;
		}
		else if(s.total>s2.total)
		{	s3=s2;
		    s2=s;
		}
		else if(s.total>s3.total)
			s3=s;
	}
	
	my_printf("%d %d\n",s1.id,s1.total);
	my_printf("%d %d\n",s2.id,s2.total);
	my_printf("%d %d\n",s3.id,s3.total);
	
}