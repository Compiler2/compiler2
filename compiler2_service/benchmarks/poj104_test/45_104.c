#define NUM_ITER 1162898

#include <header.h>

int main_bench ()
{
	char s1[50],s2[50];
	int i,j,d;
	my_scanf ("%s %s",&s1,&s2);
	int l = strlen (s1);
	for (j=0;s2[j]!='\0';j++)
		{
			if (s1[0]==s2[j]) 
			{
				d = j;
				break;
			}
		}
	for (i=1;i<l;i++,j++)
	{
		if (s1[i]==s2[j+1]) continue;
	}
	my_printf ("%d",d);
		
					

	return 0;
}