#define NUM_ITER 31881

#include <header.h>

int main_bench()
{
    int n;
    char sr[100][100];
    int i,j,sum[100];
    my_scanf("%d",&n);
    for(i=0;i<n;i++) my_scanf("%s",sr[i]);
    for(i=0;i<n;i++){
              
                     for(j=1;sr[i][j]!='\0';j++){
                                      if(((sr[i][j]>='A'&&sr[i][j]<='Z')||(sr[i][j]>='a'&&sr[i][j]<='z')||(sr[i][j]>='0'&&sr[i][j]<='9')||(sr[i][j]=='_'))&&((sr[i][0]>='A'&&sr[i][0]<='Z')||(sr[i][0]>='a'&&sr[i][0]<='z')||(sr[i][0]=='_'))) sum[i]=1;
                                      else{
                                           sum[i]=0;
                                           break;
                                           }
                                      }
                      if(sum[i]==0) my_printf("no\n");
                      else my_printf("yes\n");
                      }                 
    
    return 0;
}