#define NUM_ITER 19848

#include <header.h>


int main_bench()
{ char jianji[1000][399];
 int n,i,j;
 char jianji1[1000][399];
 int m[1000];
 my_scanf("%d",&n);
 for(i=0;i<n;i++){
                  my_scanf("%s",jianji[i]);}
                  for(i=0;i<n;i++){
                                   m[i]=strlen(jianji[i]);
                                   for(j=0;j<m[i];j++){
                                                    if(jianji[i][j]=='A')
                                                    jianji1[i][j]='T';
                                                    else if(jianji[i][j]=='T')
                                                    jianji1[i][j]='A';
                                                    else if(jianji[i][j]=='G')
                                                    jianji1[i][j]='C';
                                                    else if(jianji[i][j]=='C')
                                                    jianji1[i][j]='G';}}
                  for(i=0;i<n;i++){
                                   for(j=0;j<m[i];j++)
                                   {my_printf("%c",jianji1[i][j]);}
                                   my_printf("\n");}                                  
                  
  return 0;
}
