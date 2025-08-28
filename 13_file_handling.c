#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    fp = fopen("sample.txt", "w");
    
    printf("Enter a string to write into file: ");
    fgets(str, sizeof(str), stdin);   
    fputs(str, fp);                  

    fclose(fp);

    fp = fopen("sample.txt", "r");
    printf("\nContents of file:\n");
    printf("%s", str);
 
    fclose(fp);  
    return 0;
}
