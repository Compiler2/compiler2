#define NUM_ITER 562776

#include <header.h>

char a[5][100];
int jiaohuan(int x,int y)
{
	char b[100];
	int i,j;
	if(x<0||x>4||y<0||y>4)
		return(0);
	else
	{   
		for(i=0;*(a[x]+i)!='\0';i++)
			*(b+i)=*(a[x]+i);
		    *(b+i)='\0';
		for(i=0;*(a[y]+i)!='\0';i++)
			*(a[x]+i)=*(a[y]+i);
		    *(a[x]+i)='\0';
		for(i=0;*(b+i)!='\0';i++)
			*(a[y]+i)=*(b+i);
		    *(a[y]+i)='\0';

			return(1);
	}
}
int main_bench()
{
	int j,n,m;
	for(j=0;j<5;j++)
		gets(a[j]);
	my_scanf("%d%d",&n,&m);
    if(jiaohuan(n,m)==0)
		my_printf("error");
	else
	{   
		for(j=0;j<5;j++)
		puts(a[j]);
	}
		return 0;
}
