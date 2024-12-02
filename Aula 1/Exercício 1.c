//1- Peça ao usuário o tamanho da altura da pirâmide.
//2 - Se o tamanho da altura for menor que 1 ou maior que 8, fique nesse passo até que o usuário insira uma entrada válida. Faça o mesmo caso a entrada não seja um inteiro.
//3 - Crie uma variável contador auxiliar i e itere essa variável de 0 até o tamanho da altura.
//4 - Imprima os #.

#import <stdio.h>
#import <cs50.h>

int main (void){

  int answer;

   do{

   answer = get_int("Put an integer:");

   }
   while(answer<0);

   if(answer>8){
    answer = get_int("Put an integer:");
   }

   printf("Height: %i\n", answer);

   
  for(int i=answer; i>0; i--){
      for(int j=i; j>1; j--){
       printf(" ");
      }
      for(int m=0; m<=(answer-i); m++){

         printf("#");

      }

       printf("\n");
      }

  }
