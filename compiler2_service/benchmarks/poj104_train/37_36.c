#define NUM_ITER 54246

#include <header.h>


int main_bench(){
    int i,j,ii,jj,flag,word[2][30];
    int c,n;
    my_scanf("%d",&n);
    c=getchar();
    for (i=1;i<=n;i++){
        for (ii=0;ii<=25;ii++) 
          for (jj=0;jj<=1;jj++) word[jj][ii]=0;
        int j=0;
        do{
          j++;
          c=getchar();
          word[0][c-97]=j;
          word[1][c-97]++;
          }while (islower(c));
        int min=1000111,cc=-1;
        for (j=0;j<=25;j++)
          if (word[1][j]==1&&word[0][j]<min){
                                             min=word[1][j];
                                             cc=j;
                                             }
        if (cc!=-1) my_printf("%c\n",cc+97);
          else my_printf("no\n");
        }
}
        
       