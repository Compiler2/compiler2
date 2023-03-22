#include <header.h>

int main_bench(){
int n,sz[2],a=0,b=0,i;
my_scanf("%d\n",&n);
for(i=0;i<n;i++){
my_scanf("%d %d",&(sz[0]),&(sz[1]));
if((sz[0]==0&&sz[1]==1)||(sz[0]==1&&sz[1]==2)||(sz[0]==2&&sz[1]==0)){
a++;
}
else if((sz[0]==1&&sz[1]==0)||(sz[0]==2&&sz[1]==1)||(sz[0]==0&&sz[1]==2)){
b++;
}
}
if(a>b){
my_printf("A");
}
else if(a<b){
my_printf("B");
}
else{
my_printf("Tie");
}
return 0;
}
