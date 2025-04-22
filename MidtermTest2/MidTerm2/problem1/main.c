#include <stdio.h>

// PassOrFail 함수 정의
int PassOrFail(int score) {
    if (score >= 50) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int myScore = 75; // 본인의 예상 점수 입력 (예: 75)
    int result = PassOrFail(myScore);

    if (result == 1) {
        printf("재시험 없습니다!\n");
    }
    else {
        printf("재시험 있습니다\n");
    }

    return 0;
}
