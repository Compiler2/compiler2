#define NUM_ITER 848182

#include <header.h>

int main_bench(){
    double m,a,b,t=1,k=0,s=1,result;
    char r[501],e[501];
    int i;
    my_scanf("%lf",&m);
    my_scanf("%s",r);
    my_scanf("%s",e);
    a=strlen(r);
    b=strlen(e);
    if(a!=b){
             my_printf("error");}        
    for(i=0;i<(a-1);i++){
          if((r[i]=='A')||(r[i]=='T')||(r[i]=='C')||(r[i]=='G')){
                t++;};
          if((e[i]=='A')||(e[i]=='T')||(e[i]=='C')||(e[i]=='G')){
                s++;}; 
                }                                                                                                     
    if((t==a)&&(s==b)&&(a==b)){
      for(i=0;i<a-1;i++){            
       if(r[i]==e[i]){k++;};
       };    
       result=k/(a-1);          
    if(result>m){
                my_printf("yes");}else{
                   my_printf("no");};
                   }
                   if(((t!=a)||(s!=b))&&(a==b)){
          my_printf("error");}
	 return 0;
}

