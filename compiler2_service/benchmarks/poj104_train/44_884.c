#define NUM_ITER 383373

#include <header.h>

int reverse(int num)
{
    int a[10],i,j;
    if(num==0)
    return(0);
    else 
    {
       int c=0,sum=0;  
       for(i=0;num!=0;i++)
       {
           c++;               
           a[i]=num%10;
           num=num/10;
           }
       for(i=0;i<c;i++)
       for(j=1;j<c-i;j++)
       a[i]=a[i]*10;
        for(i=0;i<c;i++)
         sum=sum+a[i];                   
        return(sum);
}
}
main_bench()
{
      int i;
      for(i=1;i<=6;i++)
      {
              int a;
      my_scanf("%d",&a);
      my_printf("%d\n",reverse(a));
      }
      getchar();getchar();         
      
}      