#define NUM_ITER 879692

#include <header.h>

int main_bench(){
char s1[501],s2[502];
int l1,l2,i;
double std,aa;
my_scanf("%lf\n",&std);
my_scanf("%s\n",s1);
my_scanf("%s",s2);
l1=strlen(s1);
l2=strlen(s2);
aa=-1;
if(l1==l2){
aa=0;
   for(i=0;i<l1;i++){
    if(s1[i]==s2[i])aa++;
	if(s1[i]!='A'&&s1[i]!='C'&&s1[i]!='T'&&s1[i]!='G'){aa=-1;break;}
    if(s2[i]!='A'&&s2[i]!='C'&&s2[i]!='T'&&s2[i]!='G'){aa=-1;break;}
   }
}
if(aa==-1)my_printf("error");
else{
 aa=aa/l1;
 if(aa>std)my_printf("yes");
 else my_printf("no");
}
return 0;
}
