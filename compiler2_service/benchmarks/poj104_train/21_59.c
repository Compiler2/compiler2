#include <header.h>

main_bench()
{
    int max,min,n,s=0,i,j,m;
    int a[301];
    float aver,s1,s2,sum=0;
    my_scanf("%d",&n);

    for(i=0;i<n;i++)
    my_scanf("%d",&a[i]);
    for(i=0;i<n;i++)
      sum=sum+a[i];
    aver=sum/n;
  
    max=a[0];
    for(i=1;i<n;i++)
    {if(max<a[i]) max=a[i];}
 
    min=a[0];
    for(j=1;j<n;j++)
    {if(min>a[j])  min=a[j];}
    
    s1=max-aver;
    s2=aver-min;

    if(s1>s2)   my_printf("%d\n",max);  
    if(s1<s2)   my_printf("%d\n",min); 
    if(s1==s2)  my_printf("%d,%d\n",min,max);
}