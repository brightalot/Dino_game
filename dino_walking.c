#include <stdio.h>
#include <stdlib.h>

#define _CRT_OBSOLETE_NO_WARNINGS //구식 함수 사용의 위험성 무시
int main() {
    while(1)
    {
        //공룡 원본
        printf("  □□□□ \n");
        printf("  □ □□ \n");
        printf("  □□□□ \n");
        printf("  □□ \n");
        printf(" □ □□□ \n");
        printf(" □□□□ \n");
        printf("  □ □ \n");
        _sleep(100);
        system("cls"); //화면 초기화

        //공룡이 걷는 순간
        printf("  □□□□ \n");
        printf(" □ □□ \n");
        printf(" □□□□ \n");
        printf(" □□ \n");
        printf("□ □□□ \n");
        printf("□□□□ \n");
        printf("   □ \n");
        _sleep(100);
        system("cls");

    }

    return 0;
}