#define NUM_ITER 465669

#include <header.h>


main_bench()
{
      int i,j,k,l,m,n,tem;
      char num[100],res[100];for(i=0;i<100;i++)res[i]='\0';
      gets(num);
      tem=num[0]-'0';
      res[0]='0';
      l=strlen(num);
      for(i=1;i<l;i++)
      {
                      tem=tem*10+(num[i]-'0');
                      res[i-1]=tem/13+'0';
                      tem=tem%13;
      }
      if(strlen(res)!=1&&res[0]=='0')
      {
                                     for(i=0;i<l;i++)
                                     res[i]=res[i+1];
      }
      my_printf("%s\n",res);
      my_printf("%d",tem);
}