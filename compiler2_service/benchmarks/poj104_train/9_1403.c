#include <header.h>

int main_bench(){
int n,i,t,k;
my_scanf("%d",&n);
char a[100][10],c[11];
int b[100];
for(i=0;i<n;i++){
my_scanf("%s %d",a[i],&b[i]);
if(b[i]<60){
 b[i]=0;
}
}
for(k=1;k<=n;k++){
for(i=0;i<n-k;i++){
 if(b[i]<b[i+1]){
   t=b[i];
   b[i]=b[i+1];
   b[i+1]=t;
   strcpy(c, a[i]);
   strcpy(a[i], a[i+1]);
   strcpy(a[i+1], c);
}
}
}
for(i=0;i<n;i++){
my_printf("%s\n",a[i]);
}
return 0;
}
