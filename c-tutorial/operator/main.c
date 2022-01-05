#include <stdio.h>

// 연산자
//  + : Plus
//  - : Minus
//  * : Multiply
//  / : Divide
//  % : Remainer

// 증감
//  ++x : x = x + 1
//  x++ : x = x, then x = x + 1
//  --x : x = x - 1
//  x-- : x = x, then x = x - 1

// 복합 대입
//  x += y : x = x + y
//  x -= y : x = x - y
//  x *= y : x = x * y
//  x /= y : x = x / y
//  x %= y : x = x % y

// 관계 연산자 (True: 1, False: 0)
//  x == y : x의 값이 y와 같으면 true, 다르면 false
//  x === y : x의 타입과 값이 y의 타입과 값이 같으면 true, 다르면 false
//  x != y : x의 값이 y와 다르면 true, 같으면 false
//  x !== y : x의 타입과 값이 y의 타입과 값이 같지 않으면 true, 같으면 false
//  x > y : x가 y보다 크면 true, 아니면 false
//  x < y : x가 y보다 작으면 true, 아니면 false
//  x >= y : x가 y보다 크거나 같으면 true, 아니면 false
//  x <= y : x가 y보다 작거나 같으면 true, 아니면 false

// 논리 연산자
//  x && y : x 와 y가 true이면 true, 아니면 false
//  x || y : x 또는 y가 true이면 true, 아니면 false

// 조건 연산자
//  Statement ? true value : false value
//  Statement가 ture이면, true value return
//  Statement가 false이면, false value return

// 거듭제곱 함수
//  pow(x, y)함수 사용
//      - Math Library 필요
//      - x의 y제곱 == x^y

#include <math.h>

#define SECOND_PER_MINUTE 60
int main(void) {
    
    // Time Calcurator
        // int input = 1000;
        // int minute = input / SECOND_PER_MINUTE;
        // int second = input % SECOND_PER_MINUTE;
        // printf("%d초는 %d분 %d초입니다\n", input, minute, second);
    
    // 증감 연산
        // int x = 0;
        // printf("현재의 x는 %d입니다.\n", x);
        
        // x++;
        // printf("현재의 x는 %d입니다.\n", x);
        
        // printf("현재의 x는 %d입니다.\n", x--);
        // printf("현재의 x는 %d입니다.\n", x);
        
        // printf("현재의 x는 %d입니다.\n", --x);
    
    // 복합 대입 연산
        // int x = 100;
        // printf("현재 x의 값은 %d입니다.\n", x);
        // x += 50; // x = x + 50;
        // printf("현재 x의 값은 %d입니다.\n", x);
        // x -= 50; // x = x - 50;
        // printf("현재 x의 값은 %d입니다.\n", x);
        // x *= 50; // x = x * 50;
        // printf("현재 x의 값은 %d입니다.\n", x);
        // x /= 50; // x = x / 50;
        // printf("현재 x의 값은 %d입니다.\n", x);
        // x %= 3; // x = x % 50;
        // printf("현재 x의 값은 %d입니다.\n", x);
    
    // 관계 연산
        // int x = 50, y = 30;
        // printf("x가 y와 같은가 ? %d\n", x == y);
        // printf("x가 y와 다른가 ? %d\n", x != y);
        // printf("x가 y보다 큰가 ? %d\n", x > y);
        // printf("x가 y보다 작은가 ? %d\n", x < y);
    
    // 논리 연산
        // int x = 50, y = 30;
        // printf("x가 y보다 크고 y는 40미만입니까? %d\n", (x > y) && (y < 40));
        // printf("x가 y보다 작거나 혹인 y는 30입니까? %d\n", (x < y) || (y = 30));
        // printf("x가 50이 아닙니까? %d\n", x != 50);
    
    // 조건 연산
        // int x = -50, y = 30;
        // int absoluteX = (x > 0) ? x : -x;
        // int max = (x > y) ? x : y;
        // int min = (x < y) ? x : y;
        // printf("x의 절대값은 %d입니다.\n", absoluteX);
        // printf("x의 최대값은 %d입니다.\n", max);
        // printf("x의 최소값은 %d입니다.\n", min);
    
    // 거듭제곱 연산
    double x = pow(2.0, 20.0);  // x = 2^20
    printf("2의 20제곱은 %.2f입니다.\n", x);
    return 0;
}
