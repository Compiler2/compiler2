#include <header.h>

int main_bench(){
    int sz[5][5];
    int n,m,i,j,e;
    for(i=0;i<5;i++){
       for(j=0;j<5;j++){
         my_scanf("%d",&sz[i][j]);
       }                 
    }
    my_scanf("%d %d",&n,&m);
    if((n>=0)&&(n<5)&&(m>=0)&&(m<5)){
      for(i=0;i<5;i++){
        e=sz[n][i];
        sz[n][i]=sz[m][i];
        sz[m][i]=e;
      }
  
      for(i=0;i<5;i++){
       for(j=0;j<5;j++){
         my_printf("%d",sz[i][j]);
       if(j<4){my_printf(" ");} 
       else if(!(j<4)){my_printf("\n");}
       } 
         
      }return 0;  
}
    my_printf("error");
    
    return 0;
}
