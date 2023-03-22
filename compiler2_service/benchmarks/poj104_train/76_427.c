#define NUM_ITER 3272

#include <header.h>


main_bench()
{
	int N,i,j,head,tail,flag,maxr;
	int a,b;
	int r[10002];

	my_scanf("%d\n",&N);

	for (i=0;i<10001;i++)
		r[i]=0;

	maxr=0;
	for (i=0;i<N;i++)
	{
		my_scanf("%d%d\n",&a,&b);
		if (r[a]<b) r[a]=b; 
		if (maxr<b) maxr=b;
	}

	i=1;
	while (r[i]==0) i++;
	head=i;tail=r[i];

	flag=0;
	for (i=1;i<=maxr;i++)
	{
		if (tail<i) break;
		if (r[i]>tail) tail=r[i];
	}
	if (tail==maxr) flag=1;
	if (flag==0) 
	{
		my_printf("no");
	}
	if (flag==1)
	{
		my_printf("%d %d\n",head,tail);
	}
	getchar();
	my_scanf("%d\n",&N);
}
