#define NUM_ITER 901309

#include <header.h>

int main_bench(){
int c=0,m=0,i,a,b,j,z=1;
double n,q=0,w;
char x[505],y[505];
my_scanf("%lf",&n);
my_scanf("%s",x);
my_scanf("%s",y);
a=strlen(x);
b=strlen(y);
if(a!=b){z=0;}
else{for(i=0;i<a;i++){if((x[i]=='A'||
						  x[i]=='T'||
						  x[i]=='C'||
						  x[i]=='G')&&
						  (y[i]=='A'||
						  y[i]=='T'||
						  y[i]=='C'||
						  y[i]=='G'))z=1;else z=0;}     
     }
if(z==0)my_printf("error");
if(z!=0){for(i=0;i<a;i++){if(x[i]==y[i])q++;}
        }
if(z!=0){w=q/a;if(w>=n)my_printf("yes");else my_printf("no");}
return 0;
}