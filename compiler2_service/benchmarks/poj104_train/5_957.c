#define NUM_ITER 911059

#include <header.h>

int main_bench(){
	int i,j,len1,len2,num=0,t=1;
        double rate;
	char a[500],b[500];
     my_scanf("%lf",&rate);
     my_scanf("%s",a);
    my_scanf("%s",b);
    len1=strlen(a);
    len2=strlen(b);
    if(len1!=len2){
      my_printf("error");
      }
     if(len1==len2){
       for(i=0;i<len1;i++){
       if(a[i]==b[i]&&(a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G')&&(b[i]=='A'||b[i]=='T'||
b[i]=='C'||b[i]=='G'))
        num++;
       else if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&
b[i]!='C'&&b[i]!='G')){
        t=0;
        break;
       }
       }
      if(t==0)
       my_printf("error");
      else {
        if(num*1.0/len1>rate)
         my_printf("yes");
        else 
         my_printf("no");
      }
      
    }
     
	return 0;
}