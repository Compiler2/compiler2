#define NUM_ITER 572

#include <header.h>

int xiangsu[1000][1000];
int main_bench(){
    int n;
 
    int head1;
    int head2;
    int end1;
    int end2;
    my_scanf("%d",&n);
  
    int sum;
    int j;
    int i;
    for( i=0;i<n;i++)
    for( j=0;j<n;j++)
    my_scanf("%d",&(xiangsu[i][j]));        
            
    int f=1;        
    for(i=0;i<n;i++){
                     for(j=0;j<n;j++){
                                      if((xiangsu[i][j]==0)&&(f==1)){
                                                                 head1=i+1;
                                                                 head2=j+1;
                                                                 f=0;
                                                                 }
                                      if(xiangsu[i][j]==0){
                                                           end1=i-1;
                                                           end2=j-1;
                                                           }                           
                                      }
                     }
    sum=(end1-head1+1)*(end2-head2+1);                 
    my_printf("%d",sum);
    getchar();
    getchar();
    return 0;
}