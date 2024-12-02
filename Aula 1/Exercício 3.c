#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) {
    float amount;
    int cents, coins = 0;

    // Solicita ao usuário um valor positivo
    do {
        amount = get_float("Quanto dinheiro é devido? ");
    } while (amount < 0);

    // Converte reais para centavos e arredonda para evitar imprecisões
    cents = round(amount * 100);

    // Calcula o número mínimo de moedas
    coins += cents / 25; // Moedas de 25 centavos
    cents %= 25;
    coins += cents / 10; // Moedas de 10 centavos
    cents %= 10;
    coins += cents / 5;  // Moedas de 5 centavos
    cents %= 5;
    coins += cents;      // Moedas de 1 centavo

    // Imprime o número mínimo de moedas
    printf("%i\n", coins);

    return 0;
}
