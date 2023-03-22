#include <header.h>

main_bench()
{
 int m=0,a[1000]={0},b[1000]={0},c[1000]={0},i,j,s=0,s1=1;
 char x;
 i=0;
 while(1)
 {
    my_scanf("%d",&a[i]);
    x=getchar();
    m=m+1;
    if(x!=',')break;
    i++;}
    i=0;
 while(1)
 {s++;
    my_scanf("%d",&b[i]);x=getchar();
    if(x!=',')break;
    i++;
 }

 for(i=0;i<1000;i++)
 {
        for(j=0;j<1000;j++)
        {
            if(i<b[j]&&i>=a[j])c[i]++;
        }
 }

  for(i=0;i<1000;i++)
  {
      if(c[i]>s1)s1=c[i];
  }
  my_printf("%d %d",s,s1);



}
