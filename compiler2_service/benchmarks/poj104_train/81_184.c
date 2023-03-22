#include <header.h>

int add(int m,int n);
int main_bench(){
    int a[5][5],m,n,i,j,p,b,c;
    for(i=0;i<5;i++){
         for(j=0;j<5;j++){
              my_scanf("%d",&a[i][j]);
         }
    }
    my_scanf("%d %d",&m,&n);
    if(add(m,n)){
        for(p=0;p<5;p++){
                 c=a[m][p];
                 a[m][p]=a[n][p];
                 a[n][p]=c;
        } 
         for(i=0;i<5;i++){
            for(j=0;j<5;j++){
              if(j==4){
                  my_printf("%d\n",a[i][j]);
              }else{
                   my_printf("%d ",a[i][j]);
              }
            }
         }
    }else{
           my_printf("error");
    }
    return 0;
}
 int add(int m,int n){
     if(m>=0&&m<5&&n>=0&&n<5){
              return 1;
     }else{
             return 0;
     }
  }
                
 
    