#define NUM_ITER 16405

#include <header.h>




int main_bench()
{
    int a;
	my_scanf("%d",&a);
	char zuozhe[100][100];
	int shuhao[100];
	int zuo[200];
	int shu[200][200];
	int n=0,p,i,j;
	int m[200];
	
	for(i=0;i<200;i++)
	{  zuo[i]=0;
	   m[i]=0;
	}
	
	for(i=0;i<a;i++)
	{
		my_scanf("%d %s",&shuhao[i],zuozhe[i]);
	}
	for(i=0;i<a;i++)
	{
		for(j=0;(zuozhe[i][j])!='\0';j++)
		{  
			zuo[(zuozhe[i][j])]=zuo[(zuozhe[i][j])]+1;
			shu[(zuozhe[i][j])][(m[(zuozhe[i][j])])]=shuhao[i];
			m[(zuozhe[i][j])]=m[(zuozhe[i][j])]+1;
		}
	}
    for(i=65;i<=90;i++)
	{
		if(zuo[i]>n)
		{
			n=zuo[i];
			p=i;
		}
	}
	my_printf("%c\n",p);
	my_printf("%d\n",zuo[p]);
	for(i=0;i<m[p];i++)
	{
		my_printf("%d\n",shu[p][i]);
	}

	return 0;
}

