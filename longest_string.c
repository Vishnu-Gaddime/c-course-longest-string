#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char *argv[] )
{
    char* toCompare = "";
    for ( int i = 1; i < argc; i++ )
    {
        if ( strlen(toCompare) < strlen(argv[i]) )
        {
            toCompare = argv[i];
        }
    }
    puts(toCompare);
    return EXIT_SUCCESS;
}