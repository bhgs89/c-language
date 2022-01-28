#include <stdio.h>

// File 입출력
//  Open
//  Close
//  Read
//  Write
//  Create
//  Delete
//  Rename

int main(void) {
    FILE *fp = NULL;
    
    /* 파일 쓰기 */
    // fopen(FILE, MODE)
    //  - FILE을 원하는 MODE로 여는 함수
    //  - Mode: w -> 쓰기 모드(write), r -> 읽기 모드 (read)
    // fp = fopen("output.txt", "w");  //
    // if (fp == NULL) {
    //     printf("파일 열기에 실패했습니다.\n");
    // } else {
    //     printf("파일 열기에 성공했습니다.\n");
    // }

    // fputc(CHARACTER, FILE_포인터)
    // - FILE_포인터의 파일에 1글자(CHARACTER)를 출력한다 (쓰기)
    // fputc('H', fp);
    // fputc('E', fp);
    // fputc('L', fp);
    // fputc('L', fp);
    // fputc('O', fp);
    
    /* 파일 읽기 */
    // int c;
    // fp = fopen("input.txt", "r");
    // if (fp == NULL) {
    //     printf("파일 열기에 실패했습니다.\n");
    // } else {
    //     printf("파일 열기에 성공했습니다.\n");
    // }

    // fgetc(FILE_포인터)
    // - FILE_포인터의 File을 가장 앞 한글자를 읽는다
    // while ((c = fgetc(fp)) != EOF) { // - EOF는 End Of File의 약자
    //     // putchar(CHARACTER)
    //     // - 1글자(CHARACTER)를 출력한다
    //     putchar(c);
    // }

    /* 파일 분석 */
    char fname[256];
    char buffer[256];
    char word[256];
    int line = 0;

    printf("파일 이름을 입력하세요: ");
    scanf("%s", fname);

    printf("탐색할 단어를 입력하세요: ");
    scanf("%s", word);

    if ((fp = fopen(fname, "r")) == NULL) {
        // File 관련 Error 출력 함수
        fprintf(stderr, "파일 %s을 열 수 없습니다\n", fname);
        return 0;
    }

    while (fgets(buffer, 256, fp)) {
        line++;
        if (strstr(buffer, word)) {
            printf("라인 %d : 단어 %s이(가) 발견되었습니다.\n", line, word);777777777
        }
    }

    // fclose(FILE_포인터)
    // - FILE_포인터의 File을 닫는다
    // - FILE을 Open했다면 프로그램 종료 전에 반드시 FILE을 Close해야한다
    fclose(fp);

    return 0;
}
