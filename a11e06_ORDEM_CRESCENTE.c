/* Nathan e Theo - Aula 11: questão 06

6)  Faça  um  programa  que  receba  três  números  e  mostre-­os  em  ordem  crescente.  

*/

#include <stdio.h>


int main() {
  int num1, num2, num3;

  printf("Digite o primeiro número: ");
  scanf("%d", &num1);
  
  printf("Digite o segundo número: ");
  scanf("%d", &num2);
  
  printf("Digite o terceiro número: ");
  scanf("%d", &num3);

  //condição de que se o número 1 for maior que os outros dois
  if (num1 > num2 && num1 > num3) {
    //e o número dois mair que o três
    if (num2 > num3) {
      //se imprime a sequencia natural com que foram digitadas
      printf("%d - %d - %d\n", num1, num2, num3);
    } else {
      //caso contrario, inverte o terceiro e segundo 
      printf("%d - %d - %d\n", num1, num3, num2);
    }
  //condição contrária ao número um maior que os outros dois
  } else {
    //e o número dois ser maior que os números um e três
    if (num2 > num3 && num2 > num1) {
      if (num1 > num3) {
      //e ainda sim o número um seja maior que a três
        printf("%d - %d - %d\n", num2, num1, num3);
      } else {
      //caso contrário, três a frente do número um
        printf("%d - %d - %d\n", num2, num3, num1);
      }
    //caso contrário às duas condições anteriores, onde número três seja maior que os outros dois
    } else {
      if (num1 > num2) {
      //com número um sendo maior que o número dois
        printf("%d - %d - %d\n", num3, num1, num2);
      } else {
      //e com dois maior que o número um
        printf("%d - %d - %d\n", num3, num2, num1);
      }
    }
  }

  return 0;
}
