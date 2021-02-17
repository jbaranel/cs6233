#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
    int line = 0;
    const int BUFFSIZE = 512;
    char buf[BUFFSIZE];


    int numLines = 1;
    for(int i = 0; i < sizeof(buf); i++){
        if(buf[i] == '\n')
            numLines++;
    }

    int charCount = 1;
    char* lines[numLines];

    lines[line] = malloc(sizeof(char) * BUFFSIZE);
    for(int i = 0; i < sizeof(buf); i++){

        if(buf[i] != '\n'){
            lines[line][charCount-1] = buf[i];
            charCount++;
        }
        else {
            line++;
            lines[line] = malloc(sizeof(char) * BUFFSIZE);
            charCount = 1;
        }

    }

    printf("%s\n", lines[0]);
    for(int i = 1; i < numLines; i++){
        if(strcmp(lines[i-1], lines[i]) != 0){
            printf("%s\n", lines[i]);
        }
    }
    for(int i = 1; i < numLines; i++){
        free(lines[i]);
    }
    return 0;
}
