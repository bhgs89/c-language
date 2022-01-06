#include <stdio.h>
//  while 문
//      while (조건문) { 반복문 }
//      조건문이 false일 때까지, { 반복문 } 실행 (조건문이 true이면, { 반복문 } 실행)

//  for 문
//      for (초기화; 조건; 증감) { 반복문 }
//      1. 초기화 부분은 for문 처음 실행 시만 불려진다
//      2-1. 조건이 true이면 { 반복문 } 실행
//      2-2. 조건이 false이면 { 반복문 } 탈출
//      3. { 반복문 } 실행 이후, 증감 부분 실행
//      4. 다시 2-1로 돌아와 수행
int main(void) {
    // 합계 출력 (while)
        // int i = 1, sum = 0;
        // while (i <= 1000) {
        //     sum = sum + i;
        //     i++;
        // }
        // printf("1부터 1000까지의 합은 %d입니다.\n", sum);

    // 사각형 출력 (for)
    //    int i, j;
    //    for (i = 0; i < 10; i++) {
    //        for (j = 0; j < 10; j++) {
    //            printf("* ");
    //        }
    //        printf("\n");
    //    }
    
    // 피라미드 출력 (for)
    int i, j;
    for (i = 0; i < 20; i++) {
        for (j = 20 - i - 1; j > 0; j--) {
            printf("  ");
        }
        for (j = 0; j < i; j++) {
            printf("* ");
        }
        for (j = 0; j < i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
