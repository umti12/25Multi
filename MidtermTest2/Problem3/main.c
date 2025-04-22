#include <stdio.h>

int main() {
    printf("\x1b[40m\x1b[33m         o     o\n");
    printf("\x1b[40m\x1b[34m         |");
    printf("\x1b[32m     |\n");
    printf("\x1b[0m");         // 색상 초기화
    printf("     ");
    printf("\x1b[40m\x1b[37m--------------\n");
    printf("\x1b[0m");         // 색상 초기화
    printf("    ");
    printf("\x1b[45m\x1b[37m|\\/\\/\\/\\/\\/\\/\\/|\n");
    printf("\x1b[0m");
    printf("    ");
    printf("\x1b[47m\x1b[30m|              |\n");
    printf("\x1b[0m");
    printf("     ");
    printf("\x1b[40m\x1b[37m--------------\n");
    printf("\x1b[40m\x1b[37m -----------------------\n");
    printf("\x1b[45m\x1b[37m|\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/|\n");
    printf("\x1b[47m\x1b[30m|                      |\n");
    printf("\x1b[40m\x1b[37m -----------------------\n");
    printf("\x1b[0m");

    return 0;
}
