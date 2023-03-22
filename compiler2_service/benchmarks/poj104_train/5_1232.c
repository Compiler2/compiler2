#include <header.h>


int main_bench(){    
        int i,x,y;
        double n;
        double count=0.00;   
        char a[501];    
        char b[501];
   
        
        my_scanf("%lf\n",&n);    
        gets(a);
        gets(b);
        
                x=strlen(a);
                y=strlen(b);
                if(x!=y){
                        my_printf("error");
						return 0;
					
                }
                
        for (i=0; a[i]!='\0' ,b[i]!='\0'; i++){
        if ((a[i]!='A' && a[i]!='T' && a[i]!='G' && a[i]!='C')||(b[i]!='A' && b[i]!='T' && b[i]!='G' && b[i]!='C')){     
                        my_printf("error");   
                        return 0 ;
						break;
                }
        

                if(a[i]==b[i]){
                        count++;
                }
        }

        
                if (count/(x-1)>=n){
                        my_printf("yes");
                }else{
                        my_printf("no");
                }
        
        return 0;
}