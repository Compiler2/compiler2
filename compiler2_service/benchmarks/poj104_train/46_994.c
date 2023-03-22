#include <header.h>


void circle(int list[][100], int row_min, int row_max, int col_min, int col_max)
{
  int i,j;
  if (row_min==row_max || col_min==col_max) {
    for (i=col_min; i<col_max; i++) {
      my_printf("%d\n",list[row_min][i]);
    }
    for (i=row_min; i<=row_max; i++) {
      my_printf("%d\n",list[i][col_max]);
    }
  } else {
    for (i=col_min; i<col_max; i++) {
      my_printf("%d\n",list[row_min][i]);
    }
    for (i=row_min; i<row_max; i++) {
      my_printf("%d\n",list[i][col_max]);
    }
    for (i=col_max; i>col_min; i--) {
      my_printf("%d\n",list[row_max][i]);
    }
    for (i=row_max; i>row_min; i--) {
      my_printf("%d\n",list[i][col_min]);
    }
  }
}

int main_bench() 
{
  int array[100][100];
  int i,j;
  int sumrow,sumcol;
  my_scanf("%d %d",&sumrow,&sumcol);
  for (i=0; i<sumrow; i++) {
    for (j=0; j<sumcol; j++) {
      my_scanf("%d",&array[i][j]);
    }
  }

  int row_min=0, row_max=sumrow-1, col_min=0, col_max=sumcol-1;

  while (row_min<=row_max && col_min<=col_max) {
    circle(array, row_min, row_max, col_min, col_max);
    row_min++;
    row_max--;
    col_min++;
    col_max--;
  }
  
  return 0;
}