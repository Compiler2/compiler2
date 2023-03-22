#define NUM_ITER 871989

#include <header.h>

int main_bench(){
   int i,len,ans=0,len1;
   double n;
   char s[2][500];
   my_scanf("%lf",&n);
   my_scanf("%s",s[0]);
   len1=strlen(s[0]);
   my_scanf("%s",s[1]);
   len=strlen(s[1]);
   if(len1!=len){
      my_printf("error");
	  return 0;
   }
    for(int j=0;j<len1;j++){
		if (s[0][j]!='A'&&s[0][j]!='T'&&s[0][j]!='G'&&s[0][j]!='C'){
	     my_printf("error");
	     return 0;
	   }
	}
	for(int k=0;k<len;k++){
		if (s[1][k]!='A'&&s[1][k]!='T'&&s[1][k]!='G'&&s[1][k]!='C'){
	     my_printf("error");
	     return 0;
	   }
   }
	if(len==len1){
   for(i=0;i<len;i++){
    if(s[0][i]==s[1][i]) ans+=1;
   }
   if(ans*1.0/len>n) {
	   my_printf("yes");
   }else{my_printf("no");}
	}
   return 0;
}