#define NUM_ITER 23610

#include <header.h>


int main_bench(){
char zfc[9999][256],jg[9999][256];
int n,l,i,j;
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%s",&zfc[i]);
}
for(i=0;i<n;i++){
l=strlen(zfc[i]);
for(j=0;j<l;j++){
            if(zfc[i][j]=='A'){
				jg[i][j]='T';
			}
			else if(zfc[i][j]=='T'){
	            jg[i][j]='A';
			}
			else if(zfc[i][j]=='G'){
	            jg[i][j]='C';
			}
			else{
	            jg[i][j]='G';
}
                      jg[i][l]='\0';
		}
}
for(i=0;i<n;i++)
   my_printf("%s\n",jg[i]);

return 0;
}