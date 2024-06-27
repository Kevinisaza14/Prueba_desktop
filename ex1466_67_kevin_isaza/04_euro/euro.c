#include <unistd.h>
#include <stdio.h>

void euro(char *s1, char *s2){
    int i;
    int boolean;
    int boolean2;
    char *Spain = "Spain";
    char *Croatia = "Croatia";
    char *Albania = "Albania";
    char *Italy = "Italy";
    //España - Croacia
    //España - Italia
    //Albania - España
    i = 0;
    boolean = 0;
    boolean2 = 0;
    while(s1[i]){
        if(s1[i] == Spain[i] || s1[i] == Albania[i]){
            boolean = 1;
        }
        else{
            boolean = 0;
            write(1, "Arguments Error\n", 16);
            return ;
        }
        i++;
    }
    i = 0;
    while(s2[i]){
        if(s2[i] == Spain[i] || s2[i] == Croatia[i] || s2[i] == Italy[i]){
            boolean2 = 1;
        }
        else{
            boolean2 = 0;
            write(1, "Arguments Error\n", 16);
            return ;
        }
        i++;
    }
    i = 0;
    int caso1 = 0;
    int caso2 = 0;
    int caso3 = 0;
    int caso1a = 0;
    int caso2a = 0;
    int caso3a = 0;
    while(s1[i]){
        if(s1[i] == Spain[i]){
            caso1 = 1;
        }
        else
            caso1 = 0;
        i++;
    }
    i = 0;
    while(s1[i]){
        if(s1[i] == Spain[i]){
            caso2 = 1;
        }
        else
            caso2 = 0;
        i++;
    }
    i = 0;
    while(s1[i]){
        if(s1[i] == Albania[i]){
            caso3 = 1;
        }
        else
            caso3 = 0;
        i++;
    }
    // segundo equipo
    i = 0;
    while(s2[i]){
        if(s2[i] == Croatia[i]){
            caso1a = 1;
        }
        else
            caso1a = 0;
        i++;
    }
    i = 0;
    while(s2[i]){
        if(s2[i] == Italy[i]){
            caso2a = 1;
        }
        else
            caso2a = 0;
        i++;
    }
    i = 0;
    while(s2[i]){
        if(s2[i] == Spain[i]){
            caso3a = 1;
        }
        else
            caso3a = 0;
        i++;
    }
    if(caso1 == 1 && caso1a == 1)
    {
        printf("1");
    }
    if(caso2 == 1 && caso2a == 1)
    {
        printf("1");
    }
    if(caso3 == 1 && caso3a == 1)
    {
        printf("2");
    }
}

int main(int argc, char **argv){
    if(argc == 3){
        
        euro(argv[1], argv[2]);
    }
    else{
        write(1, "Arguments Error\n", 16);
        return 1;
    }
    return 0;
}
