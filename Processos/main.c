#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pid;

    pid = fork();

    //se o fork for menor que zero, deve retornar um erro
    if (pid < 0) {
        printf(stderr,"erro\n");
        exit(1);
    }

    //se o fork for 0, retorna o id do processo filho
    if (0 == pid)
        printf("FILHO: \t id is %d, pid (valor) is %d\n", getpid(), pid);

    //retorna o valor do processo pai e do processo filho
    else {
        printf("PAI: \t id is %d, pid (filho) is %d\n", getpid(), pid);
    }
    /*este comando executado duas vezes..*/
    system("date");
}
