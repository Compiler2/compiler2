#define NUM_ITER 10160

#include <header.h>

struct p
{
	char name[100],leader,xibu;
	int fen,ban,lun;
	int scho;
}stu[100];
int main_bench()
{
	int i,j,k,l,m=0,n;
	my_scanf ("%d\n",&n);
	for (i=0;i<n;i++)
	{
		my_scanf ("%s %d %d %c %c %d",stu[i].name,&stu[i].fen,&stu[i].ban,&stu[i].leader,&stu[i].xibu,&stu[i].lun);
	}
	for (i=0;i<n;i++)
	{
		if (stu[i].lun>=1&&stu[i].fen>80)
		{
			stu[i].scho=stu[i].scho+8000;
		}
		if (stu[i].fen>85&&stu[i].ban>80)
		{
			stu[i].scho=stu[i].scho+4000;
		}
		if (stu[i].fen>90)
		{
	        stu[i].scho=stu[i].scho+2000;
		}
		if (stu[i].fen>85&&stu[i].xibu=='Y')
        {
	        stu[i].scho=stu[i].scho+1000;
		}
		if (stu[i].ban>80&&stu[i].leader=='Y')
			{
	        stu[i].scho=stu[i].scho+850;
		}
	}
	for (i=0;i<n;i++)
	{
		m=m+stu[i].scho;
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if (stu[i].scho<stu[j].scho)
				break;
		}
		if (j==n)
		{
			my_printf ("%s\n%d\n%d",stu[i].name,stu[i].scho,m);
			break;
		}
	}
}