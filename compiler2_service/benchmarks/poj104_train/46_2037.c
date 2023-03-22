#define NUM_ITER 583

#include <header.h>

int  main_bench(){
int  sz[100][100]; 
int m,n,b=0;

int i,j,c=0;
my_scanf("%d%d",&m,&n);
b=m*n;
for(i=0;i<m;i++){                                                                                                                                                                                                           
			for(int j=0;j<n;j++)
				my_scanf("%d",&sz[i][j]);
}
for(int h=0;;h++)
{
for(j=0+h;j<n-h;j++){
my_printf("%d\n",sz[h][j]);c++;}
if  (b==c)   break; 
for(i=1+h;i<m-h;i++){
my_printf("%d\n",sz[i][n-1-h]);c++;}
if  (b==c)   break;
for(j=n-2-h;j>=0+h;j--){
my_printf("%d\n",sz[m-1-h][j]);c++;}
if  (b==c)   break; 
for(i=m-2-h;i>h;i--){
my_printf("%d\n",sz[i][h]);c++;}
if  (b==c)   break;
}
return 0;

}