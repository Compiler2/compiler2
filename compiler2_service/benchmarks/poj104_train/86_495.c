#define NUM_ITER 1263

#include <header.h>

int main_bench()
{
    int n,i,j,m;
    int a[100],b[100];
    my_scanf("%d",&n);

    for(i=1;i<=n;i++)
{

       my_scanf("%d",&m);
       if(m==0)
      { my_printf("6");
       continue;}
      else

       for(j=0;j<m;j++)
       {
          my_scanf("%d",&a[j]);
       }
           for(j=m-1;j<m;j--)
           {
                if((60-a[j]-3*j)>0)
               {
	          break;
               }
            }

       if((60-a[j]-3*j)<4)
       {
          b[i-1]=a[j];
       }
       else
      {
            b[i-1]=57-3*j;
       }

}	
        for(i=1;i<=n;i++)
      {
         my_printf("%d\n",b[i-1]);
       }
return  0;
}