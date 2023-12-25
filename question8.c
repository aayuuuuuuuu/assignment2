#include <stdio.h>

int main() {

  char opr;
  float first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &opr);
  printf("Enter two operands: ");
  scanf("%d  %d", &first, &second);

  switch (opr) {
    case '+':
      printf("%f + %f = %f", first, second, first + second);
      break;
    case '-':
      printf("%f - %f = %f", first, second, first - second);
      break;
    case '*':
      printf("%f * %f = %f", first, second, first * second);
      break;
    case '/':
      printf("%f / %f = %f", first, second, first / second);
      break;
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
