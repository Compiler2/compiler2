#define NUM_ITER 586

#include <header.h>

int main_bench()
{ 
int row,col,rowsx,rowxx,colsx,colxx;
   my_scanf("%d%d",&row,&col);
   int sz[100][100];
   for(int i=0;i<row;i++)
   {
      for(int j=0;j<col;j++)
      {
          my_scanf("%d",&sz[i][j]);
      }
   }
   rowsx=row-1;
   rowxx=0;
    colsx=col-1;
    colxx=0;
    while(rowxx<=rowsx&&colxx<=colsx)
    {
       if(rowxx==rowsx){
          for(int o=colxx;o<=colsx;o++)
          {
             my_printf("%d\n",sz[rowxx][o]);
          }
          break;
       }
       if(colsx==colxx){
          for(int p=rowxx;p<=rowsx;p++)
          {
             my_printf("%d\n",sz[p][colxx]);
          }
          break;
       }             
                       
       for(int k=colxx;k<=colsx;k++){
          my_printf("%d\n",sz[rowxx][k]);
          }
       for(int l=rowxx+1;l<=rowsx;l++){
          my_printf("%d\n",sz[l][colsx]);
          }
       for(int m=colsx-1;m>=colxx;m--){
          my_printf("%d\n",sz[rowsx][m]);
          }
       for(int n=rowsx-1;n>rowxx;n--){
          my_printf("%d\n",sz[n][colxx]);
          }
       rowsx--;
       rowxx++;
       colsx--;
       colxx++;
    }
return 0;
}
       
       