#include <header.h>

struct stu
{
	int id;
	int c;
	int m;
	int t;
};
int main_bench()
{
	int n,i,j,K;
	struct stu a[4]={0};
	struct stu b[4]={0};
	struct stu temp={0};
    my_scanf("%d",&n);
	for(i=0;i<=(n-1);i++)
	{
		if(i<=2)
		{my_scanf("%d%d%d",&a[i].id,&a[i].c,&a[i].m);
		a[i].t=a[i].c+a[i].m;
		b[i]=a[i];}
		else
        {
			my_scanf("%d%d%d",&a[3].id,&a[3].c,&a[3].m);
             a[3].t=a[3].c+a[3].m;
		     b[3]=a[3];
			 
		     for(K=0;K<=3;K++)
			 {
		       for(j=0;j<=3;j++)
			   {
			      if(b[j].t<b[j+1].t)
				{	temp=b[j];
                   b[j]=b[j+1];
			    	b[j+1]=temp;
				  }
			   }
			 }
		}
	}

	for(i=0;i<=2;i++)
	{
		my_printf("%d %d\n",b[i].id,b[i].t);
	}

}