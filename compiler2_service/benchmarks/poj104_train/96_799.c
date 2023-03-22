#include <header.h>

int main_bench(){
char cs[102];
int ys=0,c=0,s;
gets(cs);
for  (int i=0;i<strlen(cs);i++){
     c=10*ys+(int)(cs[i]-'0');
     ys=c%13;
     s=c/13;
    if (s!=0){
	   my_printf("%d",s);
	}
	else {
		if (i==0){
			if(strlen(cs)==1){
			my_printf("%d",s);
			}
			else {
			 continue;
			}
		}
	    else if (i==1){
		   if  (strlen(cs)>2){
			continue ;
			}
		    else {
			 my_printf("%d",s);
			}
		}
	   else {
		 my_printf("%d",s);
		} 
	}
	 if (i==strlen(cs)-1){
	   my_printf("\n");
	   my_printf("%d",ys);
	}
}
return 0;
}