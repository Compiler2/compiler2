#define NUM_ITER 25565

#include <header.h>

int main_bench()
{
    int n,a[100][3],i,j;
    float b;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
    for(j=0;j<2;j++){
    my_scanf("%d",&a[i][j]);}}
    b=100.0*(float)a[0][1]/(float)a[0][0];
    for(i=1;i<n;i++){
    if((100.0*(float)a[i][1]/(float)a[i][0]-b)>5){
    my_printf("better\n");}
    if((100.0*(float)a[i][1]/(float)a[i][0]-b)<=5&&(b-100.0*(float)a[i][1]/(float)a[i][0])<=5){
    my_printf("same\n");}
    if((100.0*(float)a[i][1]/(float)a[i][0]-b)<-5){
    my_printf("worse\n");}}
    return 0;
}


    
        