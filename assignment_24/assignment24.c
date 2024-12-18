#include <stdio.h>

int main(void) {
    // open the file
    FILE *file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("error: unable to open the file.\n");
        return 1;
    }

    char buffer[128];
    // read the file
    if (fgets(buffer, sizeof(buffer), file)) 
        printf("succeded: read line: %s", buffer);
    else 
        printf("failed: to read line or empty file\n");
    
    // close the file
    fclose(file);

    return 0;
}