#include <stdio.h>

// 초필살기 발동 함수 정의
int SS(int mp, int range) {
    if (mp >= 50 && range > 10) {
        printf("주인공 : 너는 점수를 획득했나?\n");
    }
    return 0;
}

int main() {
    int mp = 150;     // 주인공의 마력
    int range = 20;   // 주인공의 사거리

    SS(mp, range);    // 초필살기 시도

    return 0;
}