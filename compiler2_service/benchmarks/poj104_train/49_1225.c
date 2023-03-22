#define NUM_ITER 17187

#include <header.h>

int main_bench()
{

    int i,j,k,m,n;
	char st[500];
	my_scanf("%s",st);
	for(i=2;i<=500;i++)
	{
	    for(j=0;j<500-i+1;j++)
		{
			if(st[j]=='\0')
				break;
			m=j+i-1;
			for(k=j;k<m;k++)
			{
				if(st[k]!=st[m])
                  break;
				else
			   m=m-1;
			}
         if(k>=m)
		  {
			  for(n=j;n<j+i;n++)
			  {
				  my_printf("%c",st[n]);
				if(n==j+i-1)
					my_printf("\n");
			  }
		  }
		}
		
	}
}
	




