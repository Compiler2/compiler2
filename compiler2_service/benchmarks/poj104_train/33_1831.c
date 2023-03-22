#define NUM_ITER 999

#include <header.h>

main_bench(){
int n,i,j,k;
char chm[257];
my_scanf("%d\n",&n);
i=0;

while(i<n){
for(j=0;j<257;j++)
chm[j]='\0';
gets(chm);
for(j=0;j<257;j++){
if(chm[j]=='T')
my_printf("A");
if(chm[j]=='A')
my_printf("T");
if(chm[j]=='C')
my_printf("G");
if(chm[j]=='G')
my_printf("C");
}
my_printf("\n");
i++;
}

}