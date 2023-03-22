#include <header.h>

int main_bench()
{
    int n,i,j,s1=0,t,s2=0;
    char a[200],b[200];
    my_scanf("%d",&n);
    for(i=0,j=0;i<n,j<n;i++,j++)
      {
          my_scanf("%s %s",&a[i],&b[j]);
          t=a[i]-b[i];
          if(t==-1||t==2)
            {
                s1++;
            }
          else
            if(t==1||t==-2)
              {
                  s2++;
              }
      }
    if(s1==s2)
      {
        my_printf("Tie");
      } 
    else
      if(s1>s2)
        {
            my_printf("A");
        }
      else
        if(s1<s2)
          {
              my_printf("B");
          }
    return 0;
}