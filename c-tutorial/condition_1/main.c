#include <stdio.h>

//  조건문
//  if ~ else if ~ else
//      if 조건문이 true이면, if statement 실행
//      if 조건문이 false이면, else if 조건문 확인
//      else if 조건문이 true이면, else if statement 실행
//      else if 조건문이 false이면, else statement 실행

int main(void) {
    // 절대값 프로그램
        // int x = -150;
        // if (x < 0) {
        //   x = -x;
        // }
        // printf("x의 절대값은 %d입니다.\n", x);
    
    // 학생 점수
    int score = 85;
    if (score >= 90) {
        printf("당신의 학점은 A입니다.\n");
    } else if (score >= 80) {
        printf("당신의 학점은 B입니다.\n");
    } else if (score >= 70) {
        printf("당신의 학점은 C입니다.\n");
    } else {
        printf("당신의 학점은 F입니다.\n");
    }
    
    return 0;
}
