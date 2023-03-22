#include <header.h>

struct zuobiao
{
	int left,right;
}zuo[50000],e;
int main_bench()
{
	int t,i,j,releft,reright;
	my_scanf("%d",&t);
	for(i=0;i<t;i++)
		my_scanf("%d %d",&zuo[i].left,&zuo[i].right);
	for(i=1;i<t;i++)
		for(j=0;j<t-i;j++)
			if(zuo[j].left>zuo[j+1].left)
			{
				e=zuo[j];
				zuo[j]=zuo[j+1];
				zuo[j+1]=e;
			}
			releft=zuo[0].left;
			reright=zuo[0].right;
			i=1;
			while(i<t)
			{
				if(zuo[i].left>reright)
				{
					my_printf("no\n");
					break;
				}
				else if(zuo[i].left<=reright&&zuo[i].right>=reright)
					reright=zuo[i].right;
				i++;
			}
			if(i==t)my_printf("%d %d\n",releft,reright);

	
	return 0;
}