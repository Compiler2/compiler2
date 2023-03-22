#include <header.h>



main_bench(){
       int row,col,i,j,*p[100];
       my_scanf("%d %d",&row,&col);
       for(i=0;i<row;i++){
         p[i]=(int*)malloc(sizeof(int)*col);
         for(j=0;j<col;j++){
           my_scanf("%d",p[i]+j);
         }
       }
       for(i=0;i<row+col;i++){
         for(j=i;j>=0;j--){
           if(i-j>=row||j>=col) continue;
           else my_printf("%d\n",*(p[i-j]+j));
         }
       }
}
