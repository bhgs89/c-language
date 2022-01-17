// 기본 입출력 관련 Library
#include <stdio.h>

// scanf()
//  Input을 받는 함수 (read input)
// printf()
//  Output을 출력한다 (display output)

int main(int argc, const char * argv[]) {
    // 간단한 계산기
    //    char o;
    //    int x, y;
    //    while (1) { // 무한 반복
    //        printf("수식을 입력하세요 : ");
    //        // 입력 후, Enter를 누르면 Enter에 관련된 input도 같이 받는다
    //        scanf("%d %c %d", &x, &o, &y);
    //
    //        if (o == '+') {
    //            printf("%d %c %d = %d\n", x, o, y, x + y);
    //        } else if (o == '-') {
    //            printf("%d %c %d = %d\n", x, o, y, x - y);
    //        } else if (o == '*') {
    //            printf("%d %c %d = %d\n", x, o, y, x * y);
    //        } else if (o == '/') {
    //            printf("%d %c %d = %d\n", x, o, y, x / y);
    //        } else if (o == '%') {
    //            printf("%d %c %d = %d\n", x, o, y, x % y);
    //        } else {
    //            printf("입력이 잘못 되었습니다.\n");
    //        }
    //
    //        // Buffer 처리
    //        // 단 하나의 문자를 입력받는다
    //        getchar();
    //        printf("프로그램을 종료하시겠습니까? (y/n) ");
    //        scanf("%c", &o);
    //        if (o == 'n' || o == 'N') {
    //            continue;
    //        } else if (o == 'y' || o == 'Y') {
    //            break;
    //        } else {
    //            printf("입력이 잘못 되었습니다.\n");
    //        }
    //    }
    
    // 정해진 개수의 정수를 더하는 프로그램
    //    int number, x, i, sum = 0;
    //    printf("정수의 개수를 입력하세요 : ");
    //    scanf("%d", &number);
    //
    //    for (i = 0; i < number; i++) {
    //        printf("정수의 값을 입력하세요 : ");
    //        scanf("%d", &x);
    //        sum += x;
    //    }
    //
    //    printf("전체 정수의 값은 %d입니다.\n", sum);
    
    // 특정한 단의 구구단을 출력하는 프로그램
    //    int x, i;
    //    printf("정수를 입력하세요 : ");
    //    scanf("%d", &x);
    //    for (i = 1; i <= 9; i++) {
    //        printf("%d X %d = %d\n", x, i, x * i);
    //    }
    
//    char a,b;
//    printf("Enter 2 values: ");
//    scanf("%c %c", &a, &b);
//    printf("a는 %c, b는 %c\n", a, b);
    
    char a,b;
    printf("Enter first value: ");
    scanf("%c", &a);
    getchar();
    printf("Enter second value: ");
    scanf("%c", &b);
    printf("a는 %c, b는 %c\n", a, b);
    return 0;
}
