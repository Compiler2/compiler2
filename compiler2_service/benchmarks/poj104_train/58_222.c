#define NUM_ITER 29461

#include <header.h>

int main_bench()
{ 
   
    int n,l,i,j;
    my_scanf("%d\n",&n);
    char c[81],*p;
    for(i=0;i<n;i++){
         gets(c);
         l=strlen(c);p=c;
         int a=1;
         if(*p==95||(*p>64&&*p<91)||(*p>96&&*p<123)){
            for(p=c+1;p<c+l;p++){
                if(*p==95||(*p>64&&*p<91)||(*p>96&&*p<123)||(*p>47&&*p<58)){a++;}
                else {my_printf("%d\n",0);break;}
            }
            if(a==l){my_printf("%d\n",1);}
         }
         else {my_printf("%d\n",0);}
    }                         
	return 0;
}