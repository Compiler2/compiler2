#include <header.h>

int main_bench()
{
    int z,q,s,l;
	for(z=1;z<6;z++)
	{
		for(q=1;q<6;q++)
		{
			for(s=1;s<6;s++)
			{
				for(l=1;l<6;l++)
				{
					if(z+q==s+l&&z+l>s+q&&z+s<q)
					{
						if(q>l)
						{
							my_printf("q %d\n",q*10);
							if(s>l)
							{
								my_printf("s %d\n",s*10);
								my_printf("l %d\n",l*10);
								my_printf("z %d\n",z*10);
							}
							else
							{
								my_printf("l %d\n",l*10);
								my_printf("s %d\n",s*10);
								my_printf("z %d\n",z*10);
							}
						}
						else
						{
							my_printf("l %d\n",l*10);
							my_printf("q %d\n",q*10);
							my_printf("z %d\n",z*10);
							my_printf("s %d\n",s*10);
						}
					}
				}
			}
		}
	}
	return 0;
}