#include <header.h>

int main_bench()
{
    int i,j,n,t,N=0;
    int a,b,c;
    int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    my_scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        my_scanf("%d %d %d",&a,&b,&c);

         if((a%100)==0)
         {
            if((a%400)==0)
            month[2]=29;
         }
         else
         {
             if((a)%4==0)
             month[2]=29;
         }
         if(b>c)
         {t=c;
         c=b;
         b=t;}
         for(j=b;j<c;j++)
             N=N+month[j];
             month[2]=28;
             if((N%7)==0)
             my_printf("YES\n");
             else
             my_printf("NO\n");
             N=0;
     }
     return 0;
}
