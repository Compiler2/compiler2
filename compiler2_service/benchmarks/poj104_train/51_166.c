#define NUM_ITER 641285

#include <header.h>

main_bench()
{
      int n,i,j,len;
      char a[600],c;
      my_scanf("%d",&n);
      my_scanf("%c",&c);
      my_scanf("%s",a);
      len=strlen(a);
      char b[600][5]={0};
      int outcome[600]={0};
      for(i=0;i<=len-n;i++)
      {
                           for(j=0;j<=n-1;j++)
                           {
                                              b[i][j]=a[i+j];
                           }
                           for(j=n;j<=5;j++) b[i][j]=0;
                           
      }
      for(i=0;i<=len-n;i++)
      {
                           outcome[i]=1;
                           for(j=i+1;j<=len-n;j++)
                           if(strcmp(b[i],b[j])==0) outcome[i]+=1;
      }
      int max=0;
      for(i=0;i<=len-n;i++)
      if(outcome[i]>max) max=outcome[i];
      if(max==1) my_printf("NO");
      else
      {
      my_printf("%d\n",max);
      for(i=0;i<=len-n;i++)
      {
                           if(outcome[i]==max) my_printf("%s\n",b[i]);
      }
      }

      

}
      