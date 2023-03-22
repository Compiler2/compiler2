#define NUM_ITER 32620

#include <header.h>

int main_bench() {  
char zf[100][21]; 
int n,i,j;
int m=0;
my_scanf("%d",&n); 
for(i=0;i<n;i++){
my_scanf("%s",zf[i]);}

for(j=0;j<n;j++){
    int flag = 0;
   for(i=0;zf[j][i]!='\0';i++){
        if(!((zf[j][i]=='_')||
            (zf[j][i]>='A'&&zf[j][i]<='Z')
            ||(zf[j][i]>='a'&&zf[j][i]<='z')
            ||(zf[j][i]>='0'&&zf[j][i]<='9'&&i>0))){
                my_printf("no\n");
                flag = 1;
                break;
            }            
   }
   if (flag == 0)my_printf("yes\n");
}

   return 0;
}



