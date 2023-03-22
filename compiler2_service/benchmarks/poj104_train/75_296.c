#define NUM_ITER 23351

#include <header.h>

int main_bench()
{
	int it[1001],ot[1001],tr[1001]={0},i,j,k,a,b,c,rs,trm=0;
	for(i=0;;i++)
	{
	my_scanf("%d",&it[i]);
	if((c=getchar())=='\n')
		break;
	}
	rs=i+1;
	for(i=0;i<rs;i++)
	{
		my_scanf("%d",&ot[i]);
		getchar();
	}





	for(i=0;i<rs;i++)
	{
		for(j=it[i];j<ot[i];j++)
			tr[j]++;
	}
	for(j=0;j<1000;j++)
	{
		if(tr[j]>trm) trm=tr[j];
	}
	my_printf("%d %d",rs,trm);


}


