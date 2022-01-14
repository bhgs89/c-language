#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 임의의 값 넣기 배열에
    char test[10];

    printf("Enter string: ");
    scanf("%s", test);
    
    for (int i = 0; i < 10; i++) {
        printf("%c\n", test[i]);
        if (test[i] == '0' || test[i] == '1') {
            printf("yes\n");
        }
    }
    printf("-------\n");
    printf("String: %s\n", test);
    printf("Size: %d\n", sizeof(test));
    return 0;
}
