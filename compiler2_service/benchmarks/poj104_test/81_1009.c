#include <header.h>

int a[5][5];
int panduan(int (*p)[5],int n,int m)
{int z;
if(n>=0&&n<5&&m>=0&&m<5)
z=1;
else
z=0;
return z; 
}
void jiaohuan(int (*p)[5],int n,int m)
{int i,j,b[5];
for(j=0;j<5;j++)
b[j]=*(*(p+n)+j);
for(j=0;j<5;j++)
*(*(p+n)+j)=*(*(p+m)+j);
for(j=0;j<5;j++)
*(*(p+m)+j)=b[j];
for(i=0;i<5;i++)
{my_printf("%d",**(p+i));
	for(j=1;j<5;j++)
my_printf(" %d",*(*(p+i)+j));
my_printf("\n");
}
}
int main_bench()
{int a[5][5],n,m,i,j;
	for(i=0;i<5;i++)
{for(j=0;j<5;j++)
	my_scanf("%d",*(a+i)+j);
}
my_scanf("%d%d",&n,&m);
if(panduan(a,n,m)==0)
my_printf("error");
else
{jiaohuan(a,n,m);
}





return 0;
}