#include <header.h>

int main_bench()

{

         int n,m,i,j;

         my_scanf("%d%d",&n,&m);

         int * x=(int *)malloc(sizeof(int)*n);

         for(i=0;i<n;i++){

                   my_scanf("%d",x+i);

         }

         m = m % n;

         int tmp;

         for(j = 0; j < m; j++)

         {

                   tmp=*(x+n-1);

                   for(i=n-1;i>0;i--)

                   {

                            *(x+i) = *(x+i-1);

                   }

                   *x=tmp;

         }

         for(i=0;i<n-1;i++){

                   my_printf("%d ",*(x+i));

         }

         my_printf("%d",*(x+i));

 

 

         free(x);

         return 0;

}