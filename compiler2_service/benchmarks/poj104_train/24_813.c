#define NUM_ITER 107278

#include <header.h>

int main_bench()
{
	char word[50][51];
	int m,i,c,d,chang=0,duan=51,a,j;
	for(m=0;;m++)
	{
		for(j=0;;j++)
		{

				my_scanf("%c",&word[m][j]);
				if(word[m][j]==32) break;
				if(word[m][j]==10) goto loop;
		}


	}
loop:	for(i=0;i<=m;i++)
		{
			a=0;
			for(j=0;;j++)
			{
				if(word[i][j]==32) break;
				if(word[i][j]==10) break;
				a++;
			}
	     	if(a<duan) 
			{
				duan=a;
				d=i;
			}
	     	if(a>chang)
			{
				chang=a;
			    c=i;
			}
		}
		for(i=0;;i++)
		{
			if(word[c][i]==32||word[c][i]==10) break;
			my_printf("%c",word[c][i]);
		}
		my_printf("\n");
		for(i=0;;i++)
		{
			if(word[d][i]==32||word[d][i]==10) break;
         	my_printf("%c",word[d][i]);
		}
}