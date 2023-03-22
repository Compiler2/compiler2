#include <header.h>


int main_bench()
{
int n;
my_scanf("%d",&n);
int i;
double sz[256],sz2[256] ;
double youxiao[256];
for(i=0;i<n;i+=1)
{my_scanf("%lf",&(sz[i]));
my_scanf("%lf",&(sz2[i]));						
youxiao[i]=sz2[i]/sz[i];}
for(i=1;i<n;i+=1)
{if(youxiao[i]-youxiao[0]>0.05){my_printf("better\n");}		
else if(youxiao[0]-youxiao[i]>0.05){my_printf("worse\n");}	
else {my_printf("same\n");}		
	}

 return 0;
}



