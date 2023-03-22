#include <header.h>

int main_bench()
{
	int i,j,t[5],m,n;
	int sz[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&sz[i][j]);
		}
	}
	my_scanf("%d%d",&n,&m);
    if(m<5&&n<5&&m>-1&&n>-1)
	{
	     for(j=0;j<5;j++)
		 {
			 t[j]=sz[m][j];
			 sz[m][j]=sz[n][j];
             sz[n][j]=t[j];
		 }
	    for(i=0;i<4;i++)
		 {
		 for(j=0;j<4;j++)
		 {
			my_printf("%d ",sz[i][j]);
		 }
		 my_printf("%d\n",sz[i][4]);
		 }
for(j=0;j<4;j++)
my_printf("%d ",sz[4][j]);
my_printf("%d",sz[4][4]);
}
if(m>4||m<0||n>4||n<0)
my_printf("error");
return 0;
}