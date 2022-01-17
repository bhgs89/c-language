// 기본 입출력 관련 Library
#include <stdio.h>

// scanf()
//  Input을 받는 함수 (read input)
// printf()
//  Output을 출력한다 (display output)

int main(int argc, const char * argv[]) {
    // 간단한 계산기
    char o;
    int x, y;
    while (1) { // 무한 반복
        printf("수식을 입력하세요 : ");
        // 입력 후, Enter를 누르면 Enter에 관련된 input도 같이 받는다
        scanf("%d %c %d", &x, &o, &y);
        
        if (o == '+') {
            printf("%d %c %d = %d\n", x, o, y, x + y);
        } else if (o == '-') {
            printf("%d %c %d = %d\n", x, o, y, x - y);
        } else if (o == '*') {
            printf("%d %c %d = %d\n", x, o, y, x * y);
        } else if (o == '/') {
            printf("%d %c %d = %d\n", x, o, y, x / y);
        } else if (o == '%') {
            printf("%d %c %d = %d\n", x, o, y, x % y);
        } else {
            printf("입력이 잘못 되었습니다.\n");
        }
        
        // Buffer 처리
        // 단 하나의 문자를 입력받는다
        getchar();
        printf("프로그램을 종료하시겠습니까? (y/n) ");
        scanf("%c", &o);
        if (o == 'n' || o == 'N') {
            continue;
        } else if (o == 'y' || o == 'Y') {
            break;
        } else {
            printf("입력이 잘못 되었습니다.\n");
        }
    }
    
    return 0;
}
