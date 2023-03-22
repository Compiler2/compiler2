#include <header.h>

int main_bench(){
    int n,i,SA=0,SB=0;
    my_scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
    my_scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]==b[i]-1||a[i]==b[i]+2){
            SA++;
        }
        else if(b[i]==a[i]-1||b[i]==a[i]+2){SB++;}
        else{SA=SA;SB=SB;}
    }
   if(SA>SB){my_printf("A");} 
   else if(SA<SB){my_printf("B");}
   else if(SA=SB){my_printf("Tie");}
   return 0;
}