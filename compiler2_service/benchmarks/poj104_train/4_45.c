#include <header.h>

int main_bench()
{
    int row,col,i,j,**p,k;
    my_scanf("%d %d",&row,&col);
    p=(int**)malloc(row*sizeof(int*));
    for(i=0;i<row;i++)
    *(p+i)=(int*)malloc(col*sizeof(int));
      for(i=0;i<row;i++)
      for(j=0;j<col;j++)
      my_scanf("%d",*(p+i)+j);
    for(j=0;j<col;j++)
    {
        i=0;
        k=j;
        while(k>=0&&i<row)
        {
            my_printf("%d\n",*(*(p+i)+k));
            i++;
            k--;
        }
    }
    for(i=1;i<row;i++)
    {
        j=col-1;
        k=i;
        while(k<row&&j>=0)
        {
            my_printf("%d\n",*(*(p+k)+j));
            k++;
            j--;
        }
    }
}
