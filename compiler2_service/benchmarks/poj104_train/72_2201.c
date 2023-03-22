#define NUM_ITER 563

#include <header.h>

int area[100][100];
int main_bench(){
    int m;
    int n;
    int i;
    int j;
    my_scanf("%d",&m);
    my_scanf("%d",&n); 
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
          my_scanf("%d",&area[i][j]);
    }}
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
           if((area[i][j]>=area[i-1][j])&&(area[i][j]>=area[i+1][j])&&(area[i][j]>=area[i][j-1])&&(area[i][j]>=area[i][j+1])){
               my_printf("%d %d\n",i,j);         }}
    }
    return 0;
}