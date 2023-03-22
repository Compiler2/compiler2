#include <header.h>

main_bench()
{
      int n,i;
      my_scanf("%d",&n);
      int m1=0,m2=0;
      for(i=0;i<n;i++)
      {
            int a,b;
            my_scanf("%d %d",&a,&b);
            if ((a==0&&b==0)||(a==1&&b==1)||(a==2&&b==2))  
            {m1+=1;m2+=1;}
            if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)) m1+=2;
            if((a==1&&b==0)||(a==0&&b==2)||(a==2&&b==1)) m2+=2;
      }
      if(m1==m2) my_printf("Tie");
      else if(m1>m2) my_printf("A");
      else my_printf("B");
}