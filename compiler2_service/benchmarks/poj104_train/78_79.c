#include <header.h>

int main_bench()
{
	int z,q,s,l;
	int i,j,k,r;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==i)
				continue;
			else
			{
				for(k=1;k<=5;k++)
				{
					if(k==j||k==i)
						continue;
					else
					{
						for(r=1;r<=5;r++)
							if(r==k||r==j||r==i)
								continue;
							else
							{
								z=10*i;
								q=10*j;
								s=10*k;
								l=10*r;
								if(z+q==s+l&&z+l>s+q&&z+s<q)
								{
									if(i==5)
										my_printf("z 50\n");
									if(j==5)
										my_printf("q 50\n");
									if(k==5)
										my_printf("s 50\n");
									if(r==5)
										my_printf("l 50\n");
									if(i==4)
										my_printf("z 40\n");
									if(j==4)
										my_printf("q 40\n");
									if(k==4)
										my_printf("s 40\n");
									if(r==4)
										my_printf("l 40\n");	
									if(i==3)
										my_printf("z 30\n");
									if(j==3)
										my_printf("q 30\n");
									if(k==3)
										my_printf("s 30\n");
									if(r==3)
										my_printf("l 30\n");
									if(i==2)
										my_printf("z 20\n");
									if(j==2)
										my_printf("q 20\n");
									if(k==2)
										my_printf("s 20\n");
									if(r==2)
										my_printf("l 20\n");
									if(i==1)
										my_printf("z 10\n");
									if(j==1)
										my_printf("q 10\n");
									if(k==1)
										my_printf("s 10\n");
									if(r==1)
										my_printf("l 10\n");
								}
							}
					}
				}
			}
		}
	}
	return 0;
}