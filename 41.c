#include <stdio.h>
#define is_letter(ch) ((ch)>='a' && (ch)<='z' || (ch)>='A' && (ch)<='Z')
#define size 26
int main(void)
{
    char letter_cnt[size] = {0};
    
    // 读入并统计字母
    char ch;
    while ((ch = getchar()) != EOF) {
        if (is_letter(ch)) {
            int i = ch <= 'Z' ? ch-'A' : ch-'a';
            letter_cnt[i]++;
        }
    }
    
    int i;
    int max_idx = 0;
    for (i=0; i<size; i++) {
        if (letter_cnt[i] > letter_cnt[max_idx]) {
            max_idx = i;
        }
    }
    printf("%c %d", max_idx+'a', letter_cnt[max_idx]);
}
