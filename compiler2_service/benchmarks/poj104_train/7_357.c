#include <header.h>

int main_bench(){
  int le,len,lenn,i,j,k,a=0,b,m=0;
  char aa[256],bb[256],cc[256];
  my_scanf("%s%s%s",aa,bb,cc);
  le=strlen(aa);
  len=strlen(bb);
  lenn=strlen(cc);
  for(i=0;i<le;i++)
  {      a=0;
       for(j=i,k=0;j<len+i&&k<len;j++,k++)
	   {
	   if(bb[k]==aa[j])
             a++;  
	   }
	   if(a==len){b=i;m++;break;}
 }

     if(m==0) puts(aa);
     else{ 
      for(i=0;i<b;i++){my_printf("%c",aa[i]);}
      for(k=0;k<lenn;k++){my_printf("%c",cc[k]);}
      for(i=b+len;i<le;i++){my_printf("%c",aa[i]);}
          }
return 0;}