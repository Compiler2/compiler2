#define NUM_ITER 1041465

#include <header.h>

int main_bench()
{ char zi[50],mu[50];
  int i,j,flag=0,zichang,muchang;
 
 my_scanf("%s %s",zi,mu);
 zichang=strlen(zi);
 muchang=strlen(mu);
 for(i=0;i<=muchang-zichang;i++)
 { for(j=0;j<=zichang-1;j++)
   { if(zi[j]!=mu[i+j])
     {flag=1;break;}
    }
   if(flag!=1)
   { my_printf("%d",i);
     break;}
   flag=0;}
 getchar();
 getchar();
}