#define NUM_ITER 23625

#include <header.h>

int main_bench(){
int n,i,k,j;
char bsf[100][21];
 k=1;
 my_scanf("%d",&n);
 for(i=0;i<n;i++){
  my_scanf("%s",&bsf[i]);
 }
 for(i=0;i<n;i++){
  if(bsf[i][0]=='_'||(bsf[i][0]>='A'&&bsf[i][0]<='Z')||(bsf[i][0]>='a'&&bsf[i][0]<='z')){k*=1;}
  else{k*=0;}
   for(j=1;j<strlen(bsf[i]);j++){
    if(bsf[i][j]=='_'||(bsf[i][j]>='A'&&bsf[i][j]<='Z')||(bsf[i][j]>='a'&&bsf[i][j]<='z')||(bsf[i][j]>='0'&&bsf[i][j]<='9'))
	{k*=1;}
	else{k*=0;}
  }
  if(k){my_printf("yes\n");}
   else{my_printf("no\n");}
   k=1;
 }
 return 0;
}