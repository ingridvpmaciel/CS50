//Criar um algoritmo de verificação da validade de um cartão via digitação do usuário

#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Função para verificar a validade do cartão usando o algoritmo de Luhn
bool luhn_check(long number);

int main(void) {
    long card_number = get_long("Número do cartão: ");

    // Verifica a validade do cartão
    if (luhn_check(card_number)) {
        // Determina o tipo de cartão
        if ((card_number >= 340000000000000 && card_number < 350000000000000) ||
            (card_number >= 370000000000000 && card_number < 380000000000000)) {
            printf("AMEX\n");
        } else if (card_number >= 5100000000000000 && card_number < 5600000000000000) {
            printf("MASTERCARD\n");
        } else if ((card_number >= 4000000000000 && card_number < 5000000000000) ||
                   (card_number >= 4000000000000000 && card_number < 5000000000000000)) {
            printf("VISA\n");
        } else {
            printf("INVALID\n");
        }
    } else {
        printf("INVALID\n");
    }
}

bool luhn_check(long number) {
    int sum = 0;
    bool alternate = false;
    while (number > 0) {
        int digit = number % 10;
        if (alternate) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        alternate = !alternate;
        number /= 10;
    }
    return (sum % 10 == 0);
}
