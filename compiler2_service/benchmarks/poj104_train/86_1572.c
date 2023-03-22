#define NUM_ITER 1245

#include <header.h>









int main_bench(){
    int n;
    my_scanf("%d",&n);
    for (int i=0; i<n; i++) {
        int m;
        my_scanf("%d",&m);
      
        if (m==0) {
            my_printf("60\n");
            continue;
        }
        int num[100]={0};
        for (int j=1; j<=m; j++) {
            my_scanf("%d",&num[j]);
            
        }
       
            if (num[m]+3*m<=60) {
                my_printf("%d\n",(60-3*m));
                
            }else{
                int c=1;
                for (int k=m; k>1; k--) {
                    if (num[k]+3*(k-1)<=60&&num[k]+3*k>60) {
                        my_printf("%d\n",num[k]);
                        c=0;
                        break;
                        
                    }else if(num[k-1]+3*(k-1)<60&&num[k]+3*(k-1)>60){
                        my_printf("%d\n",(60-3*(k-1)));
                        c=0;
                        break;
                        
                    }
                    
                }
               
                
                
            
            }
    }
    return 0;
    
}