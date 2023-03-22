#define NUM_ITER 22227

#include <header.h>


struct stu 
{ 
	int num; 
	int ch; 
	int math; 
	int total; 
} a[100000];
struct str 
{ 
	int num; 
	int total; 
} b[100000];

main_bench()
{
	int i,n,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{my_scanf("%d %d %d\n",&a[i].num,&a[i].ch,&a[i].math);
	b[i].num=a[i].num;
	b[i].total=a[i].ch+a[i].math;}
	for(i=0; i<3; i++)
	{		
		for(j=i+1;j<n;j++)
		if (b[i].total<b[j].total)		
		{			
			b[n]=b[i];			
			b[i]=b[j];			
			b[j]=b[n];		
		}	
	}
	for(i=0;i<3;i++)
	my_printf("%d %d\n",b[i].num,b[i].total);
}

