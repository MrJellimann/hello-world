#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Uh oh, spaghetti-o!\n");
        return 0;
    }
    
    FILE *f = fopen(argv[1]);
    char line[256];
    
    printf("Hello world!\nThe file contains:\n\n");
    
    while (!feof(f))
    {
        fscanf("%s", &line);
        printf("%s", line);
    }
    
    return 0;
}
