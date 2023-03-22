#define NUM_ITER 118177

#include <header.h>

int main_bench()
{
	int y,m,d,i,t;
	my_scanf("%d%d%d",&y,&m,&d);
	t=0;
	for (i=1;i<m;i++)
	{
		switch(i)
		{
		    case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
            case 12:
				t+=31;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				t+=30;
			    break;
			default:
				if (y%400==0)
					t+=29;
				else if ((y%100!=0)&&(y%4==0))
					t+=29;
				else
					t+=28;
		}
	}
	t+=d;
	my_printf("%d",t);	
}