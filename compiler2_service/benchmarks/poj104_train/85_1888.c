#define NUM_ITER 25446

#include <header.h>

int panduan(char x);
int panduan(char x){
   int s=1;
   if((x>='a'&&x<='z')||(x>='A'&&x<='Z')||(x=='_')||(x>='0'&&x<='9'))
   {
   s=0;
   }
   return s;

}
int main_bench(){
    int i,j,n,len;
    my_scanf("%d",&n);
    char zfc[100][21];
    for(i=0;i<n;i++){
   my_scanf("%s",zfc[i]);
}
     int s=0;
     for(i=0;i<n;i++){
len=strlen(zfc[i]);
s=0;

for(j=1;j<len;j++){
s=s+panduan(zfc[i][j]);
}     
       if(
((zfc[i][0]>='a'&&zfc[i][0]<='z')||(zfc[i][0]>='A'&&zfc[i][0]<='Z')||zfc[i][0]=='_')&&

(s==0)
){
            my_printf("yes\n");
        }
       else{
            my_printf("no\n");
        }
    }
    return 0;
}