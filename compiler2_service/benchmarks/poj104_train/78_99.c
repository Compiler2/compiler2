#include <header.h>

int main_bench()
{
	int q,w,e,r;
	for(q=1;q<=5;q++)
	{
		for(w=1;w<=5;w++)
		{
			for(r=1;r<=5;r++)
			{
				for(e=1;e<=5;e++)
				{
					if((q+w==e+r)&&(q+r>w+e)&&(q+e<w))
						for(int i=5;i>=1;i--)
						{
							if(q==i)
							{
								my_printf("z %d\n",10*q);
							}
							if(w==i)
							{
								my_printf("q %d\n",10*w);
							}
							if(e==i)
							{
								my_printf("s %d\n",10*e);
							}
							if(r==i)
							{
								my_printf("l %d\n",10*r);
							}
						}
				}
			}
		}
	}
	return 0;
}