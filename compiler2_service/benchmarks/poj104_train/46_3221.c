#include <header.h>

int main_bench(){
    int matrix[100][100],i,j,m,n,row,col,counter=0,sum,flag;
    my_scanf("%d %d",&row,&col);
    sum=row*col;
    for(i=0;i<row;i++){
                       for(j=0;j<col;j++)
                       my_scanf("%d",&matrix[i][j]);
                       }
    for(flag=0;;flag++){
                        for(j=flag;j<col-flag;j++){
                                                   my_printf("%d\n",matrix[flag][j]);
                                                   counter++;
                                                   }
                        if(counter==sum)
                        break;
                        for(i=flag+1;i<row-flag;i++){
                                                     my_printf("%d\n",matrix[i][col-1-flag]);
                                                     counter++;
                                                     }
                        if(counter==sum)
                        break;
                        for(j=col-2-flag;j>=flag;j--){
                                                      my_printf("%d\n",matrix[row-1-flag][j]);
                                                      counter++;
                                                      }
                        if(counter==sum)
                        break;
                        for(i=row-2-flag;i>flag;i--){
                                                     my_printf("%d\n",matrix[i][flag]);
                                                     counter++;
                                                     }
                        if(counter==sum)
                        break;
                        }
    return 0;
}