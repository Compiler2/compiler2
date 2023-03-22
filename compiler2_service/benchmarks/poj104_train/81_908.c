#define NUM_ITER 209143

#include <header.h>

int judge(int n,int m)
{
    if((n>=0)&&(m>=0)&&(n<=4)&&(m<=4))
      return(1);
    else
      return(0);
}

int main_bench()
{ 
  int judge(int n,int m);
  int n,m;
  int a[5][5];
  int i,j,flag,t;
  for(i=0;i<=4;i++)
  {
       for(j=0;j<=4;j++)
       {
             my_scanf("%d",&a[i][j]);
       }
       my_scanf("\n");
  }
  my_scanf("\n");
  my_scanf("%d%d",&n,&m);
  
  flag=judge(n,m);
  if(flag==0)
  my_printf("error");
  else
  {
      for(j=0;j<=4;j++)
      {
          t=a[n][j];
          a[n][j]=a[m][j];
          a[m][j]=t;
      }
      for(i=0;i<=4;i++)
      {
          for(j=0;j<=4;j++)
          {   
              if(j==0)
              my_printf("%d",a[i][j]);           
              else
              {
                  if((j==4)&&(i!=4))
                     my_printf(" %d\n",a[i][j]);
                  else
                  {   
                      if((j==4)&&(i==4))
                        my_printf(" %d",a[i][j]);
                      else
                        my_printf(" %d",a[i][j]);
                  }
              }
          }
      }
  } 
  return 0;
}