#include <stdio.h>  

int main() {
    FILE *file;  
    char filename[100];  
    char ch;  

    
    printf("Enter the filename to read: ");
    scanf("%s", filename);  

    file = fopen(filename, "r");  
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;  
    }

    printf("\nContents of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);  
    }

    fclose(file);

    return 0;  
}
