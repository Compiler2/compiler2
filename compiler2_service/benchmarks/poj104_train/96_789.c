#define NUM_ITER 981508

#include <header.h>

int main_bench()
{ char a[101];
int l,bc,s,ys;
gets(a);
l=strlen(a);
if(l==1){
         bc=(a[0]-'0');
        my_printf("0\n%d",bc);
        }
if(l==2){
 bc=(a[0]-'0')*10+a[1]-'0';
 s=bc/13;
 ys=bc%13;
         my_printf("%d",s);
         my_printf("\n%d",ys);
        }
if(l>2){
 bc=(a[0]-'0')*10+a[1]-'0';
 if(bc>13){
         s=bc/13;
          ys=bc%13;
          my_printf("%d",s);
          a[0]=ys/10+'0';
          a[1]=ys%10+'0';
           }
for(int i=1;i<l-1;i++){
        bc=(a[i-1]-'0')*100+(a[i]-'0')*10+a[i+1]-'0';
        s=bc/13;
        ys=bc%13;
        my_printf("%d",s);
        a[i]=ys/10+'0';
        a[i+1]=ys%10+'0';        
        }
my_printf("\n%d",ys);
}


    return 0;
}
