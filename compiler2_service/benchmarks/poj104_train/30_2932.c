#define NUM_ITER 53978

#include <header.h>



int mm(int i)
{ 
	int j;
	if(i%7==0)
{ return 0;
}for(j=i;j>0;j/=10)
{if(j%10==7){
return 0;}
}return 1;
}
int main_bench()
{ 
     int i,n,sum;	
	my_scanf("%d",&n);
for(i=1,sum=0;i<=n;i++)
{if (mm(i)==1)
{ sum+=i*i;
}
}
	my_printf("%d",sum);
	return 0;
}