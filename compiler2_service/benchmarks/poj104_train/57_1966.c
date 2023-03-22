#define NUM_ITER 31491

#include <header.h>

int main_bench(){
  int n,i,l,j;
  char s[20],c[20];
  my_scanf("%d",&n);
  for(i=0;i<n;i++){
    my_scanf("%s",s);
    l=strlen(s);
    for(j=0;j<l;j++){
      if(s[j]=='e'||s[j]=='l'||s[j]=='i'){
        strcpy(c,s+j);
        if(strcmp(c,"er")==0||strcmp(c,"ly")==0||strcmp(c,"ing")==0){
          s[j]='\0';
          my_printf("%s\n",s);
        }
      }
    }
  }
  return 0;
}