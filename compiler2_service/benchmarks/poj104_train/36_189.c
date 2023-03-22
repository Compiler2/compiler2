#define NUM_ITER 103374

#include <header.h>


void arrange(char w[20]);

int main_bench()
{
	char w1[20] = {0};
        char w2[20] = {0} ;

	my_scanf("%s%s",w1,w2);	
	arrange(w1);
		arrange(w2);
		if (strcmp(w1,w2))
			my_printf("NO\n");
		else
			my_printf("YES\n");
	
}

void arrange(char w[20])
{
	int i,j;
	char c;
	for (i=19;i>0;i--)
	{
		for (j=0;j<i;j++)
		{
			if (w[j]<w[j+1])
			{
				c=w[j];
				w[j]=w[j+1];
				w[j+1]=c;
			}
		}
	}
}