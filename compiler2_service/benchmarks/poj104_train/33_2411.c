#define NUM_ITER 10472

#include <header.h>

int main_bench()
{
	int i,j,n;
	char a[1000][256]={0},b[1000][256]={0};
	my_scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		my_scanf("%s",a[i]);
		for(j=0;;j++)
		{
			switch(a[i][j])
            {
			case'A':
				b[i][j]='T';
				break;
			case'T':
				b[i][j]='A';
				break;
			case'C':
				b[i][j]='G';
				break;
			case'G':
				b[i][j]='C';
				break;
			}
			if(a[i][j]=='\0') break;
		}
		my_printf("%s\n",b[i]);
	}
	return 0;
}