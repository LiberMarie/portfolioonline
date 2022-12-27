/*
** EPITECH PROJECT, 2021
** main
** File description:
** print l'env
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void print_arg(char **arg)
{
    while (*arg){
        my_putstr(*arg);
        my_putchar('n');
        arg++;
    }
}

char **to_db_tab(char *av)
{
    char **str;
    int x = 0;
    int y = 0;
    int i = 0;

    while (av[i] != '\0'){
        for (;av[i] != ' '; i++){
            str[x][y] = av[i];
            y++;
        }
        str[x][y] = '\0';
        x++;
        y = 0;
        i++;
    }
    return (str);
}

void te(int argc, char **argv, char **env)
{
    char **str;
    
    if (argc == 1){
        for (int i = 0; env[i] != NULL; i++){
            my_printf("%s\n", env[i]);
            return (0);
        }
    }
    if (argc == 2){
        execve("/bin/ls", " ", NULL);
        str = to_db_tab(argv[1]);
        return (0);
    }
    else
        return (84); 
}

int step1(int ac, char **av, char **env)
{
    for (int i = 0; env[i] != NULL; i++){
        my_printf("%s\n", env[i]);
    }
    return (0);
}

int step2(int argc, char **argv, char **env)
{
    int pid;

    if (argc == 1){
        if (fork() == 0){
            pid =getpid();
            execve("/bin/ls",argv, env);
            exit(pid);
        }
    }
    return (0);
}

void step3(int ac, char **av, char **env)
{
    char **str;
    char *string = av[1];
    char *del = " ";
    int i = 0;
    int pid = 0;

    if (fork() == 0){
        pid = getpid();
        printf("%d\n", pid);
        for (; string[i] != NULL; i++)
            str[i] = strtok(string, del);
        printf("ok\n");
        str[i + 1] = '\0';
    
        for (int i = 0; str[i] != NULL; i++){
            printf("%d\n", str[i]);
        }
        printf ("%s\n", str);
    }
}

int main(int argc, char **argv, char **env)
{
    step1(argc, argv, env);
    //printf("step1 ok\n");
    step2(argc, argv, env);
    //printf("step2 ok\n");
    //step3(argc, argv, env);
    //printf("step3 ok\n");
    return (0);
}