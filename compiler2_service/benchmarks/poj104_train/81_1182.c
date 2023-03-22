#include <header.h>

int a[5][5];
    int m,n;
int jh(int a[5][5],int m,int n){
    int c;
    if(m>4||m<0||n>4||n<0){
                           my_printf("error");}
    else{
         for(int j=0;j<=4;j++){
                 c=a[m][j];
                 a[m][j]=a[n][j];
                 a[n][j]=c;}
         for(int i=0;i<=4;i++){
            for(int j=0;j<=3;j++){
                    my_printf("%d ",a[i][j]);}
            my_printf("%d\n",a[i][4]);}}
    return 0;
    }
int main_bench(){
    for(int i=0;i<=4;i++){
            for(int j=0;j<=4;j++){
                    my_scanf("%d",&a[i][j]);}}
    my_scanf("%d %d",&m,&n);
    jh(a,m,n);
    int y;
    my_scanf("%d",&y);
    return 0;}
