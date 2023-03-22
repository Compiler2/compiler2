#define NUM_ITER 17611

#include <header.h>

int leapyear(int n)
{
    if(n%4==0&&n%100!=0||n%400==0)
    return 1;
    else 
    return 0;
}
int lf(int m1,int m2)
{
    int max=m1,min=m2,k=0;
    if(m1<m2)
    {max=m2;min=m1;}
    switch(max)
    {
              case 12: k +=30;
              case 11: if(min==11) break; else k+=31;
              case 10: if(min==10) break; else k+=30;
              case 9: if(min==9) break; else k+=31;
              case 8: if(min==8) break; else k+=31;
              case 7: if(min==7) break; else k+=30;
              case 6: if(min==6) break; else k+=31;
              case 5: if(min==5) break; else k+=30;
              case 4: if(min==4) break; else k+=31;
              case 3: if(min==3) break; else k+=29;
              case 2: if(min==2) break; else k+=31;
              case 1: break;
    }
    if (k%7==0)
    return 1;
    else
    return 0;
}
int nf(int m1,int m2)
{
    int max=m1,min=m2,k=0;
    if(m1<m2)
    {max=m2;min=m1;}
    switch(max)
    {
              case 12: k +=30;
              case 11: if(min==11) break; else k+=31;
              case 10: if(min==10) break; else k+=30;
              case 9: if(min==9) break; else k+=31;
              case 8: if(min==8) break; else k+=31;
              case 7: if(min==7) break; else k+=30;
              case 6: if(min==6) break; else k+=31;
              case 5: if(min==5) break; else k+=30;
              case 4: if(min==4) break; else k+=31;
              case 3: if(min==3) break; else k+=28;
              case 2: if(min==2) break; else k+=31;
              case 1: break;
    }
    if (k%7==0)
    return 1;
    else
    return 0;
}
main_bench()
{
      int e,n,m1,m2,t,k,i;
      my_scanf("%d",&e);
      for(i=0;i<e;i++)
      {
      my_scanf("%d",&n);
      my_scanf("%d %d",&m1,&m2);
      t=leapyear(n);
      if(t==1)
      k=lf(m1,m2);
      else
      k=nf(m1,m2);
      if(k==1)
      my_printf("YES\n");
      else
      my_printf("NO\n");
      }
}