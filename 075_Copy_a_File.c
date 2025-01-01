#include<stdio.h>

int main(){

    FILE *file, *copy;

    file = fopen("sample.txt", "r");
    copy = fopen("copy.txt", "w");

    if(file == NULL || copy == NULL){
        printf("Error opening file(s).\n");
        return 1;
    }

    char c;
    // reading file content character by character using fgetc() and storing in c character type
    while((c = fgetc(file)) != EOF)
        fputc(c, copy);   // writing every character to our new file

    fclose(file);
    fclose(copy);


    return 0;
}