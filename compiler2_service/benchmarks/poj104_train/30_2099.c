#define NUM_ITER 185731

#include <header.h>

int main_bench()
{
	int i,n,p;
	my_scanf("%d",&n);
	p=0;
	for(i=1;i<=n;i++)
	{
		if(i%7==0)
	     continue;
	    else
			switch(i)
		{
			case 7 :
			case 17:
			case 27:
			case 37:
			case 47:
			case 57:
			case 67:
			case 70:
		    case 71:
			case 72:
			case 73:
			case 74:
			case 75:
			case 76:
			case 77:
			case 78:
			case 79:
		    case 87:
			case 97:
			  continue;
			default:
				p=i*i+p;
		}
	}
	my_printf("%d",p);
		return 0;
}


				