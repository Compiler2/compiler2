#define NUM_ITER 1856

#include <header.h>

main_bench()
{
      int amount_temp=0,amount_most=0;
      char most,temp;
      int i,j,k,s,p;
      int m;
      char jiancha[27];
      struct xinxi
      {
             int bianhao;
             char zuozhe[27];
      };
      struct xinxi shuru[999];
      my_scanf("%d",&m);
      for(p=0;p<m;p++)
      {
          my_scanf("%d %s",&shuru[p].bianhao,shuru[p].zuozhe);
      }
      for(temp='A';temp<='Z';temp++)
      {
          for(i=0;i<m;i++)
          {
              strcpy(jiancha,shuru[i].zuozhe);
              for(j=0;j<strlen(jiancha);j++)
              {
                  if(jiancha[j]==temp)
                  {
                      amount_temp++;
                  }
              }
          }
          if(amount_temp>amount_most)
          {
              amount_most=amount_temp;
              most=temp;
              amount_temp=0;
          }
          else
          {
              amount_temp=0;
          }
      }
      my_printf("%c\n%d\n",most,amount_most);
      for(i=0;i<m;i++)
          {
              strcpy(jiancha,shuru[i].zuozhe);
              for(j=0;j<strlen(jiancha);j++)
              {
                  if(jiancha[j]==most)
                  {
                      my_printf("%d\n",shuru[i].bianhao);
                      break;
                  }
              }
          }
}