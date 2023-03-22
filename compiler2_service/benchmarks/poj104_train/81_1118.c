#define NUM_ITER 214853

#include <header.h>


int main_bench()
{
	int a[25],m,n,i,temp,x,y;
	for(i=0;i<25;i++)
		my_scanf("%d",&a[i]);
	my_scanf("%d %d",&n,&m);
	if((m!=0 && m!=1&& m!=2&&m!=3&&m!=4)||(n!=0&&n!=1&&n!=2&&n!=3&&n!=4))
	{
		my_printf("error");
	}
	else
	{
		x=m*5;
        y=n*5;
		for(i=0;i<5;i++)
		{
			temp=a[x];
			a[x]=a[y];
			a[y]=temp;
			x++;y++;
		}
		my_printf("%d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4]);
		my_printf("%d %d %d %d %d\n",a[5],a[6],a[7],a[8],a[9]);
		my_printf("%d %d %d %d %d\n",a[10],a[11],a[12],a[13],a[14]);
		my_printf("%d %d %d %d %d\n",a[15],a[16],a[17],a[18],a[19]);
		my_printf("%d %d %d %d %d\n",a[20],a[21],a[22],a[23],a[24]);
	}
	return 0;
}