#include <stdio.h>
void main(void);
int test(const char *s);
int strLenCmp(const char *s1, const char *s2);
/* ������̒�����Ԃ� */
int test(const char *s)
{
    int n = 0;          /* �J�E���^���O�ɏ����� */
    while (*s++)        /* s��'\0'�łȂ���� */
        n++;            /* �J�E���^���P���₷ */
    return (n);         /* ������̒�����Ԃ� */
}
/* ������̒����̍���Ԃ� */
int strLenCmp(const char *s1, const char *s2){
	/* s1��s2�̒����̍���Ԃ� */
    return (test(s1) - test(s2));
}
void main(void){
    int n;
    char str1[100] ;
    char str2[100] ;
    printf("1�Ԗڂ̕��������͂��Ă�������:");
    scanf("%s",str1);
    printf("%s\n", str1);
    printf("2�Ԗڂ̕��������͂��Ă�������:");
    scanf("%s",str2);
    printf("%s\n", str2);
    test(str1);
    test(str2);
    if ((n = strLenCmp(str1, str2)) > 0)
        printf("1�Ԗڂ̕��������ł�\n");
    else if (n == 0)
        printf("1�Ԗڂ�2�Ԗڂ̒����͓����ł�\n");
    else
        printf("2�Ԗڂ̂ق��������ł�\n");
}