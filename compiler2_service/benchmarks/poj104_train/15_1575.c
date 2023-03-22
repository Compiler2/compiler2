#define NUM_ITER 466

#include <header.h>

int main_bench()
{
  int n,a,b,c,d,sum;
  my_scanf("%d\n",&n);
  int sz[100][100];
  int row,col;
  for(row=0;row<n;row++)
  {
     for(col=0;col<n;col++)
     {
        my_scanf("%d\n",&(sz[row][col]));
      }
   }
  for(row=0;row<n;row++)
  {
     for(col=0;col<n;col++)
     {
       if(sz[row][col]==0&&sz[row][col+1]==255)
       {
          a=row;
          b=col;
          break;
        }
     }
   }
   for(row=n-1;row>0;row--)
  {
     for(col=n-1;col>0;col--)
     {
       if(sz[row][col]==0&&sz[row][col-1]==255)
       {
         c=row;
         d=col;
         break;
        }
      }
   }
  sum=(c-a+1)*(d-b+1);
  my_printf("%d",sum);
  return 0;
}
