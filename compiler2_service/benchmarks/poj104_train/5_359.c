#define NUM_ITER 882780

#include <header.h>

int main_bench(){
   int a=0,i,l,b=0;
   double n;
   char B[2][510];
   my_scanf("%lf",&n);
   my_scanf("%s",B[0]);
   for(i=0;B[0][i]!='\0';i++){
       if(B[0][i]!='A'&&B[0][i]!='T'&&B[0][i]!='C'&&B[0][i]!='G'){a=1;}
   }
   my_scanf("%s",B[1]);
     for(i=0;B[1][i]!='\0';i++){
       if(B[1][i]!='A'&&B[1][i]!='T'&&B[1][i]!='C'&&B[1][i]!='G'){a=1;}
   }
	 if(strlen(B[0])!=strlen(B[1])||a==1){my_printf("error");
	 return 0;}
	 l=strlen(B[0]);
     for(i=0;i<l;i++){
		 if(B[0][i]==B[1][i]){b++;}
	 }
	 	 if(1.0*b/l>n){my_printf("yes");}
	 else{my_printf("no");}
	  return 0;
}


