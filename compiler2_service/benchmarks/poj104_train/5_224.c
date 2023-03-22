#define NUM_ITER 928977

#include <header.h>

int main_bench(){
  int n,i,s=0;
  double r;
  char a[600],b[600];
  my_scanf("%lf",&r); my_scanf("%s",a); my_scanf("%s",b);
  if(strlen(a)!=strlen(b)){
      my_printf("error"); 
      return 0; 
  } 
  for(i=0;i<strlen(a);i++){ 
      if((a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G')&&(b[i]=='A'||b[i]=='T'||b[i]=='C'||b[i]=='G')){
           if(a[i]==b[i]){ 
                s++; 
           } 
      }else{
            my_printf("error"); 
            return 0; 
      } 
  } 
  if(1.0*s/strlen(a)>r){ my_printf("yes"); }else if(1.0*s/strlen(a)<r){ my_printf("no"); } return 0;}
