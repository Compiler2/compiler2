#include <header.h>

int main_bench()
{
	int i,max,mac=-1;
	scanf("%d",&max);
	while(getchar()!='\n')
	{
		scanf("%d",&i);
		if(i>max)
		{
			mac=max;
			max=i;
		}
		else if(i<max&&i>mac)
			mac=i;
	}
		if(mac!=-1&&mac!=max)
			printf("%d",mac);
		else
			printf("No");
}