#define NUM_ITER 22378

#include <header.h>

int main_bench(){
    int a;
    my_scanf("%d",&a);
    char c[100][10000];
    int d[100];
    int e[100][1000];
    int b=0;
    getchar();
    for(int i=0;i<=a-1;i++){
            gets(c[i]);
            d[i]=strlen(c[i]);
            for(int j=0;j<=d[i]-1;j++){
                    e[i][j]=0;
                    for(int k=0;k<=d[i]-1;k++){
                                   if(c[i][j]==c[i][k]){
                                                        e[i][j]++;
                                                        }}
                    if(e[i][j]==1){
                                   b++;
                                   my_printf("%c\n",c[i][j]);
                                   break;}
                    
                    }
                    if(b==0){
             my_printf("no\n");
             }
             b=0;}
    
            
    int y;
    my_scanf("%d",&y);
    return 0;}
