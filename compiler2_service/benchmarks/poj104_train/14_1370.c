#define NUM_ITER 27612

#include <header.h>


int main_bench()
{
	struct score
	{
		int n;
		int a;
		int b;
		int c;
	}score[5];
	int i,m;
	my_scanf("%d",&m);
	score[1].n=0;
	score[1].c=0;
	score[2].n=0;
	score[2].c=0;
	score[3].n=0;
	score[3].c=0;
	for (i=0;i<m;i++)
	{
		my_scanf("%d%d%d",&score[4].n,&score[4].a,&score[4].b);
		score[4].c=score[4].a+score[4].b;
		if (score[4].c>score[1].c)
		{
			score[3]=score[2];
			score[2]=score[1];
			score[1]=score[4];
		}
		else if (score[4].c>score[2].c)
		{
			score[3]=score[2];
			score[2]=score[4];
		}
		else if (score[4].c>score[3].c)
			score[3]=score[4];
	}
	my_printf("%d %d\n%d %d\n%d %d\n",score[1].n,score[1].c,score[2].n,score[2].c,score[3].n,score[3].c);
	return 0;
}