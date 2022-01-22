#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 임의의 값 넣기 배열에
    //    char test[10];
    //
    //    printf("Enter string: ");
    //    scanf("%s", test);
    //
    //    for (int i = 0; i < 10; i++) {
    //        printf("%c\n", test[i]);
    //        if (test[i] == '0' || test[i] == '1') {
    //            printf("yes\n");
    //        }
    //    }
    //    printf("-------\n");
    //    printf("String: %s\n", test);
    //    printf("Size: %d\n", sizeof(test));
    
    //    char a[]  = {'0', '9'};
    //    char b = '.';
    //    printf("a[0]은 %c\n", a[0]);
    //    printf("a[1]은 %c\n", a[1]);
    //
    //    printf("a[0]은 %d\n", a[0]);
    //    printf("a[1]은 %d\n", a[1]);
    //
    //    printf("a[0]은 %d\n", (int)a[0]);
    //    printf("a[1]은 %d\n", (int)a[1]);
    //
    //    printf("b는 %c\n", b);
    //    printf("b는 %d\n", b);
    
    //    char a = '0';
    //    if ((int)a >= 48 && (int)a <= 57) {
    //        printf("yes");
    //    } else {
    //        printf("no");
    //    }
    
    int a = 157;
    int b = -157;
    
    printf("%d\n", a / 60);
    printf("%d\n", a % 60);
    
    printf("%d\n", b / 60);
    printf("%d\n", b % 60);
    return 0;
}
