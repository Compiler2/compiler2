#define NUM_ITER 218356

#include <header.h>

int a[5][5];
        int i=0, j=0, m=0, n=0, t=0;
int main_bench()
{
	
        for(i=0;i<5;i++){
           for(j=0;j<5;j++){
               my_scanf("%d ", &a[i][j]);
              }
                }
        my_scanf("%d%d",&n,&m);
        if((n<5)&&(m<5)){
            for(i=0;i<5;i++){
               t=a[n][i];
               a[n][i]=a[m][i];
               a[m][i]=t;}
            for(i=0;i<5;i++){
               for(j=0;j<4;j++){
                  my_printf("%d ",a[i][j]);
                }
			   my_printf("%d",a[i][4]);
                  my_printf("\n");}
         }
        else my_printf("error");
	return 0;
}