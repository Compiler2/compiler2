#define NUM_ITER 960

#include <header.h>

main_bench()
{
      int t,i,j,k,num,lop;
      my_scanf("%d",&t);
      for(i=1;i<=t;i++)
      {
             char p[100871]={0};
             my_scanf("%s",p);
             lop=strlen(p);
             for(j=0;j<=lop-1;j++)
             {
                                  num=0;
                                  for(k=0;k<=lop-1;k++)
                                  if(p[j]==p[k]) num++;
                                  if(num==1) break;
             }
             if(num==1) my_printf("%c\n",p[j]);
             else my_printf("no\n");
      }
}