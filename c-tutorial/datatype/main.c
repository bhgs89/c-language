#include <stdio.h>
// Data Types
//  Primitive Data Type [원시 자료형]
//      char: 문자 또는 문자열
//          char형은 내부적으로 ASCII code 숫자로 표현된다
//      int: 정수
//      float: 실수
//      double: 실수
//      void: Data type이 없다는 의미
//  Derivied Data Type [파생 자료형]
//      array: 배열
//      pointer
//      function
//  User Defined Data Type [사용자 정의 자료형]
//      enum
//      structure
//      union


// 상수 정의 변수
//  #define [변수이름] [변수값]
#define MONTHS 12

int main(void) {
    // Salary Calculator
        // double monthSalary = 1000.5;
        // printf("$ %.2f\n", monthSalary * MONTHS);
    
    // Char type
    //  'A' char형은 내부적으로 ASCII code 숫자 65로 표현된다
    //  char type은 printf()에서 %c로 참조한다
    //  char type은 printf()에서 %d로 참조하면, ASCII Code 숫자를 출력한다
        // char x = 'A';
        // printf("%c\n", x);
        // printf("%d\n", x);
        // char y = 65;
        // printf("%c\n", y);
        // int z = 65;
        // printf("%c\n", z);
    
    // Int type
    //  int type은 printf()에서 %d로 참조하면, 10진수로 출력한다
    //  int type은 printf()에서 %o로 참조하면, 8진수로 출력한다
    //  int type은 printf()에서 %x로 참조하면, 16진수로 출력한다
    int x = 100;
    printf("10진수로 출력 : %d\n", x);
    printf("8진수로 출력 : %o\n", x);
    printf("16진수로 출력 : %x\n", x);
    
    return 0;
}
