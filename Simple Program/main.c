#include <stdio.h>

void greet() {
    printf("Hello, Reverse Engineering World!\n");
}

int add(int a, int b) {
    return a + b;
}

int main() {
    greet();
    int result = add(5, 10);
    printf("Result: %d\n", result);
    return 0;
}
