#define NUM_ITER 36

#include <header.h>

char a[105][105];
int n;
void infect(int m)
{
  int i,j
  ;if(m==1) return ;
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      if(a[i][j]=='@')
      {
        if(i+1<n &&a[i+1][j]=='.')
          a[i+1][j]=',';
        if(j+1<n &&a[i][j+1]=='.')
          a[i][j+1]=',';
        if(i-1>=0 &&a[i-1][j]=='.')
          a[i-1][j]=',';
        if(j-1>=0 && a[i][j-1]=='.')
          a[i][j-1]=',';
      }
    for(i=0;i<n;i++)
     for(j=0;j<n;j++)
        if(a[i][j]==',')
           a[i][j]= '@';
    
    infect(m-1);
    return ;
}
int main_bench()
{
  int m,i,j;
  my_scanf("%d",&n);
  for(i=0;i<n;i++)
    my_scanf("%s",a[i]);
  my_scanf("%d",&m);
  infect(m);
  int sum=0;
  for(i=0;i<n;i++)
     for(j=0;j<n;j++)
        if(a[i][j]=='@')
          sum++;
  my_printf("%d",sum);
 return 0;    
}
