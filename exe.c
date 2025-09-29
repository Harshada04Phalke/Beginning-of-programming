#include <stdio.h>

int main() {
    char name[100];
    printf("Enter your name: ");
    scanf(" Sanskar %99s", name);   // safer input, prevents buffer overflow

    printf("Hello, Robotics!\n");
    printf("Welcome Sanskar %s\n", name);

    return 0;
}
