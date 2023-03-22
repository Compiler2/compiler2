#define NUM_ITER 25559

#include <header.h>

int main_bench(){
int n;
my_scanf("%d\n",&n);
for(int i=1;i<=n;i++){
char zfc[21];
my_scanf("%s\n",zfc);
int s;
if((65<=zfc[0]&&zfc[0]<=90)||(97<=zfc[0]&&zfc[0]<=122)||(zfc[0]==95)){s=1;}
else{s=0;}
for(int t=1;t<=20&&zfc[t-1]!=0;t++){
if((zfc[t-1]<48)||(57<zfc[t-1]&&zfc[t-1]<65)||(90<zfc[t-1]&&zfc[t-1]<95)||(zfc[t-1]==96)||(zfc[t-1]>122)){s=0;}
}
if(s==0){my_printf("no\n");}
else{my_printf("yes\n");}
}
return 0;
}

