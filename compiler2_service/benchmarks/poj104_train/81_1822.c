#include <header.h>


int main_bench()
{
 int i,j,m,n,a[6][6],t;
 for(i=0;i<5;i++)
 for(j=0;j<5;j++)
  my_scanf("%d",&a[i][j]);
 my_scanf("%d %d",&m,&n);
 if(m>=0&&m<5&&n>=0&&n<5)
   {for(i=0;i<5;i++)
    {t=a[m][i];
     a[m][i]=a[n][i];
     a[n][i]=t;
     }
    for(i=0;i<5;i++)
	{ my_printf("%d",a[i][0]);
	 for(j=1;j<5;j++)
      my_printf(" %d",a[i][j]);
	 my_printf("\n");
	}
 }
  else
    my_printf("error\n");
return 0;
}