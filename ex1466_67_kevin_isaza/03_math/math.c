#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void math(int n){
    int i;
    int result;
    result = 0;
    i = 1;
    while(i < 11){
        result = i * n;
        if((result % 2) == 0){
            printf("%i X %i = %i <Par>\n", i, n, result);
        }
        else{
            printf("%i X %i = %i <Impar>\n", i, n, result);
        }
        i++;
    }
}
int main(int argc, char **argv){
    int i;
    if(argc == 2){  
        i = atoi(argv[1]);
        if(i == 0){
            write(1, "Error\n", 6);
            return 1;
        }
        math(i);
    }
    else{
        write(1, "Error\n", 6);
        return 1;
    }
    return 0;
}