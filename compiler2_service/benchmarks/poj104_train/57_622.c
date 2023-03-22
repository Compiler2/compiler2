#define NUM_ITER 32046

#include <header.h>

int main_bench(){
    int n;
    char word[33];
    my_scanf("%d",&n);
    for (int i=0;i<n;i++){
         my_scanf("%s",word);
         if(word[strlen(word)-2]=='e'&&
            word[strlen(word)-1]=='r'){
                  word[strlen(word)-2]='\0';
                  my_printf("%s\n",word);
         }
         if(word[strlen(word)-2]=='l'&&
            word[strlen(word)-1]=='y'){
                  word[strlen(word)-2]='\0';
                  my_printf("%s\n",word);
         }
         if(word[strlen(word)-3]=='i'&&
            word[strlen(word)-2]=='n'&&
            word[strlen(word)-1]=='g'){
                  word[strlen(word)-3]='\0';
                  my_printf("%s\n",word);
         }
    }
return 0;
}