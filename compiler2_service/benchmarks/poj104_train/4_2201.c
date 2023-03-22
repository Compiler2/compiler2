#define NUM_ITER 558

#include <header.h>

int main_bench() { 
     int row, col, i, j, temp_i, a[100][100]; 
     my_scanf("%d%d", &row, &col); 
     for(i=0;i<row;i++) 
          for(j=0;j<col;j++) 
               my_scanf("%d", &a[i][j]); 
     for(j=0;j<col;j++){
           for(i=0;i<=j&&i<row;i++) 
                 my_printf("%d\n", a[i][j-i]); 
     } 
     for(i=1;i<row;i++){ 
           temp_i=i;
           for(j=col-1;j>=0 && temp_i<row;j--){ 
                 my_printf("%d\n", a[temp_i][j]); 
                 temp_i++;
           } 
     } 
     return 0; 
} 
