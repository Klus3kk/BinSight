#include <stdio.h>
#include <string.h>
int main() {
    char pass[10] = "what";
    if(pass == "GummyBear") printf("You've guessed the pass!");
    else printf("Nah mate, that's not it");
    return 0;
}