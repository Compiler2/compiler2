#include <header.h>


int main_bench()
{
    int n,i,j,m,k;
    my_scanf("%d",&n);
    char y;
    char a[100][100];
    char c[100];
    
    my_scanf("%c",&y);
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            my_scanf("%c",&(a[i][j]));
        }
        my_scanf("%c",&(c[i]));
    }
    
    my_scanf("%d",&m);
    
    
   
    for(k=1;k<m;k++)
    {
    
       for(i=0;i<n;i++)
      {
          for(j=0;j<n;j++)
          {
              if(a[i][j]=='@')
              {
                  if(i>0)
                  {
                    if(a[i-1][j]=='.') a[i-1][j]='$';
                  }
                  if(j>0)
                  {
                    if(a[i][j-1]=='.') a[i][j-1]='$';
                  }
                  
                  if(a[i][j+1]=='.') a[i][j+1]='$';
                  if(a[i+1][j]=='.') a[i+1][j]='$';
                
              }
          }
      }
      
      for(i=0;i<n;i++)
      {
          for(j=0;j<n;j++)
          {
              if(a[i][j]=='$') a[i][j]='@';
          }
      }
      
      
    }
       
     int t;
     t=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]=='@') t=t+1;
        }
    }
    
    my_printf("%d",t);
    
    
    
    
    return 0;
}


