#include <stdio.h>
#include <string.h>
int main()
{
    char c;
    int sum = 0;
    while((c = getchar()) != '\n')  sum += c - '0';
 
    char *pinyins[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
 
    if(sum / 100)                           /* hundreds */
        printf("%s ", pinyins[sum/100]);
    if(sum / 10)                            /* tens */
        printf("%s ", pinyins[sum/10%10]);
    printf("%s", pinyins[sum%10]);          /* unit */
 
    return 0;
}


