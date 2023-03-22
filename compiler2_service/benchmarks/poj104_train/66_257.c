#include <header.h>

int main_bench()
{
	int y,m,d,i,x;
	my_scanf ("%d%d%d",&y,&m,&d);
	x=(y-1)%7+(y-1)/4-(y-1)/100+(y-1)/400;
	int md[]={0,31,28,31,30,31,30,31,31,30,31,30};
	for (i=1;i<m;i++)
		x=x+md[i];
	if ((y%4==0&&y%100!=0||y%400==0)&&m>2)
		x+=1;
    x +=d;
	switch (x%7)
	{
	case 0: my_printf ("Sun.");break;
	case 1: my_printf ("Mon.");break;
	case 2: my_printf ("Tue.");break;
	case 3: my_printf ("Wed.");break;
	case 4: my_printf ("Thu.");break;
	case 5: my_printf ("Fri.");break;
	case 6: my_printf ("Sat.");break;
	}

	return 0;
}

