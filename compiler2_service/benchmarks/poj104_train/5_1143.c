#define NUM_ITER 782769

#include <header.h>

int main_bench(){
   int n,m,i,j=0;
   double g,t;
   char a[501],b[501];
   my_scanf("%lf",&g);
   my_scanf("%s",a);
   my_scanf("\n");
   my_scanf("%s",b);
   n=strlen(a);
   m=strlen(b);
   if(n!=m){my_printf("error");}
   else{
       for(i=0;i<n;i++){
           if((a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G')&&(b[i]=='A'||b[i]=='T'||b[i]=='C'||b[i]=='G')){
               if(a[i]==b[i]){j++;}
               else{;}
           }
           else{j=-1;my_printf("error");break;}
       }
       t=1.0*j/n;
       if(t>g){my_printf("yes");}
       else if(t<=g&&j!=-1){my_printf("no");}
   }  
return 0;
}