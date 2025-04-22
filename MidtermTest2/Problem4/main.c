#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <conio.h>
#else
#include <termios.h>
#include <unistd.h>
char getch() {
    struct termios oldt, newt;
    char ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}
#define _getch getch
#endif

void drawCake(int stage) {
    system("cls");  // Windows. Mac/Linux는 "clear"로 교체 가능

    printf("\x1b[40m\x1b[33m         o     o\n");
    printf("\x1b[40m\x1b[34m         |");
    printf("\x1b[32m     |\n");

    printf("\x1b[0m");
    printf("     ");
    printf("\x1b[40m\x1b[37m--------------\n");

    printf("\x1b[0m");
    printf("    ");
    printf("\x1b[45m\x1b[37m|\\/\\/\\/\\/\\/\\/\\/|\n");

    printf("\x1b[0m");
    printf("    ");
    if (stage >= 1) {
        printf("\x1b[47m\x1b[95m|   Happy      |\n");  // 밝은 분홍 (FG 95)
    }
    else {
        printf("\x1b[47m\x1b[30m|              |\n");
    }

    printf("\x1b[0m");
    printf("     ");
    printf("\x1b[40m\x1b[37m--------------\n");

    printf("\x1b[40m\x1b[37m -----------------------\n");
    printf("\x1b[45m\x1b[37m|\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/|\n");

    if (stage >= 2) {
        printf("\x1b[47m\x1b[96m|      Birthday        |\n");  // 밝은 하늘색 (FG 96)
    }
    else {
        printf("\x1b[47m\x1b[30m|                      |\n");
    }

    printf("\x1b[40m\x1b[37m -----------------------\n");
    printf("\x1b[0m");
}

int main() {
    int stage = 0;

    drawCake(stage);

    while (stage < 2) {
        printf("\n\n[H] 키를 눌러 메시지를 확인하세요... ");
        char ch = _getch();
        if (ch == 'H' || ch == 'h') {
            stage++;
            drawCake(stage);
        }
    }

    printf("\n🎉 메시지 모두 출력 완료! 🎉\n");
    return 0;
}
