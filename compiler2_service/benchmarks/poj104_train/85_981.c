#include <header.h>

int main_bench(){
char sz[30];
int n,e;
my_scanf("%d",&n);
for(int i=0;i<n;i++){
   my_scanf("%s",sz);
   e=1;
   for(int j=0;j<strlen(sz);j++){
	   if((sz[j]=='_')||(sz[j]>='A'&&sz[j]<='Z')||(sz[j]>='a'&&sz[j]<='z')||(sz[j]>='0'&&sz[j]<='9'&&j>0)){
	     continue;
	   }
	   else{
	     e=0;
		 break;
	   }
   }
   if(e==0){
     my_printf("no\n");
   }
   else{
     my_printf("yes\n");
   }
}

return 0;
}