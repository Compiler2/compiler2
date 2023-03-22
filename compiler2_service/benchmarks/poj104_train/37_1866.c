#define NUM_ITER 395768

#include <header.h>

main_bench()
{
      int n,p;
      my_scanf("%d",&n);
      for(p=1;p<=n;p++)
      {
      char a[100000];
      my_scanf("%s",a);
      int i,j,k,m=0,q,w,r,t=0;
      int b[26][2]={0},c[26]={0};
      for(i=0;a[i]!='\0';i++)
      {
                             j=a[i]-97;
                             b[j][0]++;
                             if(b[j][0]==1)
                             b[j][1]=i+1;
      }
      for(k=0;k<26;k++)
      if(b[k][0]==1)
      {
      c[m]=b[k][1];
      m++;
      }
      if(m==0)
      {
              my_printf("no\n");
      return 0;
      }
      for(q=0;q<m-1;q++)
      if(c[q]<c[q+1])
      c[q+1]=c[q];
      for(w=0;w<26;w++)
      if(c[q]==b[w][1])
      {
      my_printf("%c\n",w+97);
      break;
      }
      }
}