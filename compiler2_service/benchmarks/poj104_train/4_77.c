#define NUM_ITER 478

#include <header.h>



int main_bench()
{
    void print(int *p[101],int row,int col);
    int *p[101];
    int row,col,i,j;
    my_scanf("%d %d",&row,&col);
    for(i=0;i<row;i++)
    {
                      p[i]=(int *)calloc(101,sizeof(int));
                      for(j=0;j<col;j++)
                      {
                                        my_scanf("%d",(p[i]+j));
                      }
    }
    print(p,row,col);
    
    return 0;
}

void print(int *p[101],int row,int col)
{
     int k,i;
     for(k=0;k<(row+col-1);k++)
     {
                               for(i=0;(i<k+1)&&(i<row);i++)
                               {
                                                 if((k-i)<col)
                                                 my_printf("%d\n",*(p[i]+(k-i)));
                               }
     }
}