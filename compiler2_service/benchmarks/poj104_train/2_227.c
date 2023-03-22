#include <header.h>


main_bench()
{
  struct book
  {
    int num;
    char name[26];
  }b[1000];
  
  int m,i,j,n[26]={0},max=0,t;
  my_scanf("%d",&m);
  for(i=0;i<m;i++)
  {  my_scanf("%d %s",&b[i].num,b[i].name);
  }
  for(i=0;i<m;i++)
  {  
     for(j=0;j<strlen(b[i].name);j++)
     { ++n[b[i].name[j]-65];
     }
  }
  for(i=0;i<26;i++)
  {
    if(n[i]>max)
    { max=n[i];
      t=i+65;
     }
  }
  my_printf("%c\n",t);
  my_printf("%d\n",max);
  for(i=0;i<m;i++)
  {
    for(j=0;j<strlen(b[i].name);j++)
    {  if(b[i].name[j]==t)
       my_printf("%d\n",b[i].num);
    }
  }
}
