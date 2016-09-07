#include <stdio.h>

int main( int argc, char *argv[])
{
    if (argc == 2){
        printf("The argument supplied is %s\n", argv[1]);
    }
    else if (argc > 2)
    {
        printf("Too many arguments supplied.\n");
    }
    else{
        printf("One argument expected.\n");
    }
    printf("The arguments:\n");
    int i;
    for (i=0; i < argc; i++){
        printf("index(%d):%s\n", i, argv[i]);
    }
}
