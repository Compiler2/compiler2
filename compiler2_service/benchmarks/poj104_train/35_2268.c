#define NUM_ITER 493

#include <header.h>

int main_bench(){
int x,a[100][100],i,j,k,l,y=0,z=0,hang,lie;
my_scanf("%d,%d",&hang,&lie);
     for(i=0;i<hang;i++){
                       for(j=0;j<lie;j++){
                                       my_scanf("%d",&a[i][j]);}}
	 
     for(i=0;i<hang;i++){ 
                          z=0;
                          x=a[i][0];
                          k=0;
                           for(j=0;j<lie;j++){
                                            if(a[i][j]>x){
                                            x=a[i][j];
                                          k=j;  }
                                            }
						   
                                            for(l=0;l<hang;l++){
                                                           
                                                             if(x<=a[l][k])
                                                            z=z+1;
                                                             }
                                                             if(z==hang){
                                                                       
                                                             y++;
                                                             my_printf("%d+%d",i,k);}
                                                             }
                                                             if(y==0)
                                                             my_printf("No");      
return 0;
}