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
        // int score = 85;
        // if (score >= 90) {
        //     printf("당신의 학점은 A입니다.\n");
        // } else if (score >= 80) {
        //     printf("당신의 학점은 B입니다.\n");
        // } else if (score >= 70) {
        //     printf("당신의 학점은 C입니다.\n");
        // } else {
        //     printf("당신의 학점은 F입니다.\n");
        // }
    
    // 윤년 판독 프로그램
    //  4년 마다, 그렇지만 100년 단위일 때는 윤년에 해당하지 않도록
    //  400년 단위일 때는 어떤 상황이든간에 윤년으로 설정
    int year = 2022;
    if (((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0) {
        printf("%d년은 윤년입니다.\n", year);
    } else {
        printf("%d년은 윤년이 아닙니다.\n", year);
    }
    
    return 0;
}
