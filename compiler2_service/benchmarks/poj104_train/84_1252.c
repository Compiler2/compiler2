#include <header.h>

int main_bench(){
  
    
    int a,b,c,d,e,f,g;
    
  
              my_scanf("%d\n",&a);
              if(a==2){
              my_scanf("%d\n",&e);
              my_scanf("%d",&f);
           if(e>f){
           c=e;
           d=f;
           }else{
            c=f;
           d=e;     
           }
           }else{
            my_scanf("%d\n",&e);
            my_scanf("%d\n",&f);
           if(e>f){
           c=e;
           d=f;
           }else{
            c=f;
           d=e;     
           }            
           b=1;
           while(b<(a-2)){
           b=b+1;
           my_scanf("%d\n",&g);
           if(c<=g){
                    d=c;
                    c=g;
                   
                    }else{
                    if(d<=g){
                    d=g;
                    }
                    }
                    }
                    
            my_scanf("%d",&g) ;  
            if(c<=g){
                    d=c;
                    c=g;
                   
                    }else{
                    if(d<=g){
                    d=g;
                    }
                    }
                    }
       my_printf("%d\n%d\n",c,d);
     
    return 0;
}
