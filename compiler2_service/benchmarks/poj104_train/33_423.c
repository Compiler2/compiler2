#include <header.h>

int main_bench(){
int n;
char c[300];
my_scanf("%d",&n);
getchar();
for (int j=0;j<n;j++){
   gets(c);
   for (int i=0;i<strlen(c);i++){
	 if (c[i]=='A') {
      my_printf("T");
     }
     if (c[i]=='T') {
      my_printf("A");
     }
     if (c[i]=='G') {
      my_printf("C");
     }
     if (c[i]=='C') {
      my_printf("G");
     }
    if (i==(strlen(c)-1)){
      my_printf("\n");
	 }
	}
}
return 0;
}