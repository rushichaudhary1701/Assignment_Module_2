#include <stdio.h>
int main() {
    for(int i=1;i<=10;i++)
    {
        if(i==5) 
        {
            break;
        }
        printf("%d ", i);
    }
    printf("\n");

    for(int i=1;i<=5;i++)
    {
        if(i==3) 
        {
            continue;
        }

        printf("%d ", i);
    }
    return 0;
}
