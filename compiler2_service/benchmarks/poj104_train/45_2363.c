#define NUM_ITER 1080552

#include <header.h>

int main_bench()
{
  char s[51];
  char w[51];
  int i,j,jd;
  my_scanf("%s",s);
  my_scanf("%s",w);
  for (i=0;i<=(strlen(w)-strlen(s));i++){
      jd=0;
      if (w[i]==s[0]){
        for (j=0;j<strlen(s);j++){
            if (w[i+j]==s[j]){
                jd=0;
                }
            else jd=1;
            }
        if (jd==0){
            my_printf("%d",i);
            break;
            }
        }
    }
  return 0;
}