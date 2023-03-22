#include <header.h>


int main_bench(){
  int k;
  char ch,s[100];
  my_scanf("%d\n",&k);
  for (;k;k--){
    my_scanf("%c",&ch);
    if ((ch>47)&&(ch<58)){
      while (ch!='\n') my_scanf("%c",&ch);
      my_printf("0\n");
    }
    else{
      while (ch!='\n'){
        if ((ch!='_')&&((ch<48)||((ch>57)&&(ch<65))||((ch>90)&&(ch<97))||(ch>122))){
          while (ch!='\n') my_scanf("%c",&ch);
          ch=' ';
          my_printf("0\n");
          break;
        }
        my_scanf("%c",&ch);
      }
      if (ch=='\n')
        my_printf("1\n");
    }
  }
}
