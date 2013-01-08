#include <stdio.h>
void main(void);
int test(const char *s);
int strLenCmp(const char *s1, const char *s2);
/* 文字列の長さを返す */
int test(const char *s)
{
    int n = 0;          /* カウンタを０に初期化 */
    while (*s++)        /* sが'\0'でなければ */
        n++;            /* カウンタを１増やす */
    return (n);         /* 文字列の長さを返す */
}
/* 文字列の長さの差を返す */
int strLenCmp(const char *s1, const char *s2){
	/* s1とs2の長さの差を返す */
    return (test(s1) - test(s2));
}
void main(void){
    int n;
    char str1[100] ;
    char str2[100] ;
    printf("1番目の文字列を入力してください:");
    scanf("%s",str1);
    printf("%s\n", str1);
    printf("2番目の文字列を入力してください:");
    scanf("%s",str2);
    printf("%s\n", str2);
    test(str1);
    test(str2);
    if ((n = strLenCmp(str1, str2)) > 0)
        printf("1番目の方が長いです\n");
    else if (n == 0)
        printf("1番目と2番目の長さは同じです\n");
    else
        printf("2番目のほうが長いです\n");
}