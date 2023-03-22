#define NUM_ITER 231722

#include <header.h>

int a[5][5];
int cha(int k,int t)
{
	int *p1,*p2,temp,j;
    if(k>4||k<0||t>4||t<0)
		return(0);
	else
	{
		p1=a[k];
		p2=a[t];
		for(j=0;j<5;j++)
		{
			temp=*(p1+j);
           *(p1+j)= *(p2+j);
           *(p2+j)=temp;
		}
		return(1);
	}
}
int main_bench()
{    
	int m,n,i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	my_scanf("%d %d",&n,&m);
	if(cha(n,m)==1)
		for(i=0;i<5;i++)
		{
		my_printf("%d %d %d %d %d",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);
		my_printf("\n");
		}
	if(cha(n,m)==0)
		my_printf("error\n");
}		

