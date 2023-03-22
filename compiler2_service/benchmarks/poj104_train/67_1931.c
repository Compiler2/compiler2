#include <header.h>

int main_bench(){
int n, i;
my_scanf ("%d", &n);
float a[n], e[n];
for(i=1;i<=n;i++){
my_scanf ("%f %f", &a[i], &e[i]);
if (i>1){
if (e[i]/a[i]>0.05+e[1]/a[1]){
my_printf ("better");
my_printf ("\n");}
else if (e[i]/a[i]<e[1]/a[1]-0.05){
my_printf ("worse");
my_printf ("\n");}
else my_printf("same\n");}}
return 0;}