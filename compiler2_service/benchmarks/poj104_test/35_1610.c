#define NUM_ITER 512

#include <header.h>


int main_bench()

{

  int row,col,i,j,t,max,min,l=0,k;

  my_scanf("%d,%d",&row,&col);

  int a[row][col];

  for(i=0;i<row;i++)

  {

   for(j=0;j<col;j++)

   {

 my_scanf("%d",&a[i][j]);

   }

   }

   for (i=0;i<row;i++)

   { 

   max=a[i][0];

   k=0;

   for (j=1;j<col;j++)

   {

    if (a[i][j]>max)

    {

      max=a[i][j];

      k=j;

    }

   }

   min=a[0][k];

   for (t=1;t<row;t++)

   { 

   if (a[t][k]<min)

   {

     min=a[t][k];

   }

   }

   if (max==min)

   {

    my_printf("%d+%d",i,k);

    l++;

   }

  }

  if(l==0)

  my_printf("No");

  return 0;

}


