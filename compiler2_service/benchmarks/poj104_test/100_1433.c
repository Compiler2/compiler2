#include <header.h>


int main_bench()
{
    char ch, str[301];
    int i, len, no=1, counter[26]={0};
    
    my_scanf("%s", str);
    
    len = strlen(str);
    
    for (i=0; i<len; i++) {
        ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            counter[ch-'a']++;
            no = 0;
        }
    }
    
    for (ch='a'; ch<='z'; ch++) {
        if (counter[ch-'a'] > 0) {
            my_printf("%c=%d\n", ch, counter[ch-'a']);
        }
    }
    
    if (no) {
        my_printf("No");
    }
    return 0;
}




int main_h5_1_ptr()
{
    char *p, str[301];
    int i, no=1, counter[26]={0};
    
    my_scanf("%s", str);
    
    for (p=str; *p; p++) {
        if (*p >= 'a' && *p <= 'z') {
            counter[*p-'a']++;
            no = 0;
        }
    }
    
    if (no) {
        my_printf("No");
    }
    
    else for (i=0; i<26; i++) {
        if (counter[i] > 0) {
            my_printf("%c=%d\n", 'a'+i, counter[i]);
        }
    }
    return 0;
}
