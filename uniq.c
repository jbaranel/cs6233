#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {

    for(int i = 1; i <= 100; i++) {
        char str[] = "";
        if((i % 3) == 0)
            strcpy(str, "Fizz");
        if((i % 5) == 0)
            strcpy(str, "Buzz");
        if (strlen(str) == 0)
            printf("%d\n", i);
        else
            printf("%s\n", str);
    }
    return 0;
}
