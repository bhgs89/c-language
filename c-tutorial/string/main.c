#include <stdio.h>
#include <string.h>

// 문자열
//  - char type의 배열
//  - 문자형 배열은 내부적으로 Pointer와 같다
//  - 영어: char 1개씩 (1byte) 들어갈 수 있다
//  - 한글: char 2개씩 (2bytes) 들어갈 수 있다
//  - 문자열을 입력받으면 마지막은 '\0' (NULL)이 들어간다
//  - 문자열을 출력할 때 서식지정자는 %s 이다
//  - <string.h> library는 문자열 관련 기능들을 가지고 있는 header file이다

int main(int argc, const char * argv[]) {
    // 하나의 문자열 안의 글자수 세기
    //    char input[1001];
    //    gets(input);    // gets(): 입력하는 값을 매개변수에 저장하는 함수 (Enter를 만날 때 까지의 값을 저장한다)
    //    int count = 0;
    //    while (input[count] != '\0') {
    //        count++;
    //    }
    //    printf("입력한 문자열의 길이는 %d입니다.\n", count);
    //    printf("입력한 문자열은 : %s입니다", input);

    //  strlen(문자열)
    //  - 문자열의 크기를 알려주는 함수
    //    char input[5] = "Love";
    //    printf("문자열의 길이 : %d\n", strlen(input));
    
    // strcmp(문자열1, 문자열2)
    //  - 문자열을 사전적으로 비교한다
    //  - 두 문자가 사전적으로 같다면, Return 0
    //  - 문자열1이 문자열2보다 사전적으로 앞에 있다면, Return -1;
    //  - 문자열1이 문자열2보다 사전적으로 뒤에 있다면, Return 1;
    //    char inputOne[5] = "A";
    //    char inputTwo[5] = "B";
    //    printf("문자열 비교 : %d\n", strcmp(inputOne, inputTwo));
    
    //  strcop(문자열1, 문자열2)
    //  - 문자열 복사 함수
    //  - 문자열1에 문자열2를 복사 붙여넣기 한다
    //  - 문자열 크기를 조심해야한다
    char input[10] = "ABC";
    char result[5] = "Love";
    printf("%s\n", input);
    printf("%s\n", result);
    strcpy(result, input);
    printf("문자열 복사 : %s\n", result);
    return 0;
}
