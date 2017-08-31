#include <stdio.h>

main() {
    printf("%i \n", plus(6, 7));
    printf("%i", minus(6, 7));
}

// Cộng hai số với tham số đầu vào
// là a, b là hai số nguyên.
int plus(int a, int b) {
    return a + b;
}

int minus(int a, int b){
    return a - b;
}
