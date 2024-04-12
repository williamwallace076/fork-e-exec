#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int num_proces) {
    int n = num_proces;

    if (num_proces <= 0) {
    printf("O número de processos deve ser maior do que zero ! (erro) \n");
    return 1;
  }

    for (int i = 0; i < n; i++) {
        pid_t pid = fork();

        if (pid == 0) {
            // proceeso filho
            execl("./hello_world", "hello_world", NULL);

            return 1;

        } else if (pid < 0) {
            printf("Erro ao criar o processo filho");
            return 1;
        }
    }

    // espera todos os processo filhos terminarem

    for (int i = 0; i < n; i++) {
        wait(NULL);
    }

    return 0;
}
