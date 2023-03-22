#define NUM_ITER 7344

#include <header.h>

struct book
{
  int num;
  char aut[26];
}bo[999];
main_bench()
{
  int n,i,j,k,count[26],max;
  my_scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    my_scanf("%d %s",&bo[i].num,&bo[i].aut);
  }
  for(i=0;i<26;i++)
    count[i]=0;
  for(i=0;i<n;i++)
  {
    for(j=0;j<26;j++)
      {
        if(bo[i].aut[j]-65>=0&&bo[i].aut[j]-65<26)
          count[bo[i].aut[j]-65]++;
      }
  }
  max=0;
  for(i=0;i<26;i++)
  {
    if(count[i]>max)
      {max=count[i];k=i;}
  }
  my_printf("%c\n%d\n",k+65,max);
  for(i=0;i<n;i++)
  {
    for(j=0;j<26;j++)
      {
        if(bo[i].aut[j]-65==k)
          my_printf("%d\n",bo[i].num);
      }
  }
}