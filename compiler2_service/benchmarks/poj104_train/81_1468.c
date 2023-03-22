#include <header.h>

int exchange(int matrix[][5],int n,int m);
int main_bench() 
{
    int det[5][5];
    int m,n,i,j;
    
    for(i=0;i<5;i++){ 
       for(j=0;j<5;j++){
                        my_scanf("%d",&det[i][j]);
                        }
    } 
    my_scanf("%d%d",&n,&m);
    if(exchange(det,n,m)== 1){
                               
                                                
                                for(i=0;i<5;i++){
                                   for(j=0;j<5;j++){
                                      my_printf("%d",det[i][j]);
                                      if(j<4)
                                             my_printf(" ");
                                   }
                                   my_printf("\n");
                                }
    }else{ 
         my_printf("error\n");
    } 
    
    

    return 0;
}

int exchange(int matrix[5][5],int nf,int mf)
{
    
    int temp,i;
    if(mf>=0 && mf<5 && nf>=0 && nf<5){
             for(i=0;i<5;i++){
                              temp=matrix[nf][i];
                              matrix[nf][i]=matrix[mf][i];
                              matrix[mf][i]=temp;
                                }
            return 1;
            
                            
    }else
            return 0;
}

