#include <unistd.h>

void prints_str(char *str, int par){
    int i;
    int str_len;
    i = 0;
    str_len = 0;
    while(str[str_len]){
        str_len++;
    }
    if(par == 1){
        while(str[i]){
            if(str[i] == ' '){
                i++;
            }
            else{
                write(1, &str[i], 1);
                i++;
            }
        }
        write(1, "\n", 1);
    }
    else{
        i = str_len; 
        i--;
        while(i >= 0){
            write(1, &str[i], 1);
            i--;
        }
        str[str_len] = '\0';
        write(1, "\n", 1);
    }
}

int main(int argc, char **argv){
    char *str;
    int i;
    int j;
    int par;

    i = 1;
    j = 2;
    par = 1;
    if(argc > 1)
    {
        while(j <= argc)
        {
            str = argv[i];
            if((i % 2) == 0){
                par = 0;
            }
            else
                par = 1;
            i++;
            j++;
            prints_str(str, par);
        }    
    }
    else{
        write(1, "\n", 1);
        return 1;
    }
    return 0;
}