#define NUM_ITER 1342483

#include <header.h>

int main_bench(){
int a;
char zfc[6],exc[6];
my_scanf("%s",zfc);
a=strlen(zfc);
for(int i=0;i<a/2;i++){
exc[i]=zfc[i];
zfc[i]=zfc[a-i-1];
zfc[a-i-1]=exc[i];}
my_printf("%s\n",zfc);
return 0;
}