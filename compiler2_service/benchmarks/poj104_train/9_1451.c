#define NUM_ITER 2271

#include <header.h>


int main_bench(){
int n,i,j;
struct ren{
  char b[100];
  int c;

}a[100],d[100],m;
my_scanf("%d",&n);
for(i=0;i<n;i++){
   my_scanf("%s%d",a[i].b,&a[i].c);
   d[i]=a[i];

}
for(i=n-1;i>0;i--){
    for(j=0;j<i;j++){
if(d[j].c<d[j+1].c){
   m=d[j+1];
   d[j+1]=d[j];
   d[j]=m;

}

}

}
for(i=0;i<n;i++){
    if(d[i].c>=60){
  my_printf("%s\n",d[i].b);
}

}
for(i=0;i<n;i++){
    if(a[i].c<60){
   my_printf("%s\n",a[i].b);
}
}
return 0;
}
