#define NUM_ITER 224443

#include <header.h>



int main_bench()
{
    int judge(int array[][5],int x,int y);
    int sz[5][5],n,m,i,j;
    for(i=0;i<5;i++){
                     for(j=0;j<5;j++){
                                      my_scanf("%d",&sz[i][j]);
                                      }                     
                     }
    my_scanf("%d%d",&n,&m);
    if(judge(sz,n,m)==0){
                         my_printf("error\n");
                         }
    else{
         for(i=0;i<5;i++){
                          for(j=0;j<4;j++){
                                           my_printf("%d ",sz[i][j]);
                                           }
                          for(j=4;j<5;j++){
                                           my_printf("%d",sz[i][j]);
                                           }                                                                
                          my_printf("\n");
                          }
         }
   
    return 0;
    }
int judge(int array[][5],int x,int y)
{
    int a,t[5],i;
    a=(x>=0&&x<=4&&y>=0&&y<=4)?1:0;
    if(a==1){
             for(i=0;i<5;i++){
                              t[i]=array[x][i];
                              array[x][i]=array[y][i];
                              array[y][i]=t[i];
                              }
             }
    return a;
    }