#define NUM_ITER 145

#include <header.h>

int main_bench(){
    int i,j,k,f,m[50]={0},n[50]={0},b[300]={0};
    
    for(k=0;k<50;k++){
         my_scanf("%d%d",&n[k],&m[k]);
         if(m[k]==0)
             break;      
    }   

    for(k=0;n[k]>0;k++){          
         f=0;                    
         for(i=0;i<n[k];i++)
             b[i]=0;              

         for(i=0;i<n[k];i++){
             for(j=0;j<m[k];j++){
                 f=(f+1)%n[k];
                 while(b[f]==1)
                 f=(f+1)%n[k];
             }   
             b[f]=1;   
         } 
         if(f==0)
             f=n[k];
         my_printf("%d\n",f); 
    }

    return 0;
}