//calcule o número de anos necessários para que a população cresça do tamanho inicial ao tamanho final

#include <stdio.h>
#include <cs50.h>

int main(void) {
    int start_size, end_size;

    // Solicita o tamanho inicial da população
    do {
        start_size = get_int("Tamanho inicial da população: ");
    } while (start_size < 9);

    // Solicita o tamanho final da população
    do {
        end_size = get_int("Tamanho final da população: ");
    } while (end_size < start_size);

    // Calcula o número de anos necessários para atingir o tamanho final
    int years = 0;
    int current_size = start_size;

    while (current_size < end_size) {
        int born = current_size / 3;
        int die = current_size / 4;
        current_size = current_size + born - die;
        years++;
    }

    // Imprime o número de anos necessários
    printf("Years: %i\n", years);

    return 0;
}
