#define NUM_ITER 232936

#include <header.h>


int turn(int *pt,int p,int q)
{int y,*t,j;
 if(p>=0 && p<=4  && q>=0 && q<=4)
 {for(j=0;j<5;j++)
 {t=*(pt+p*5+j);
 *(pt+p*5+j)=*(pt+q*5+j);
 *(pt+q*5+j)=t;
 y=1;
 }}
 else y=0;
 return y;
}
int main_bench()
{int a[5][5],m,n,i,*pa=a;
 for(i=0;i<25;i++)
 {my_scanf("%d",pa++);
 }
 pa=a;
 my_scanf("%d%d",&n,&m);
 if(turn(pa,n,m))
 {for(i=1;i<=25;i++)
 {
	 my_printf("%d",*(pa++));
     if(i%5==0)my_printf("\n");
	 else my_printf(" ");
 }}
 else my_printf("error");
}