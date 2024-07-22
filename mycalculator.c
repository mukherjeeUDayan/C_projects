#include <stdio.h>
#include <math.h>

double division(double, double);
double modulus(int, int);
void print_menu();

int main() {
  int choice;
  double first, second, result;
  while(1) {
    print_menu();
    scanf("%d", &choice);
    if (choice == 7) {
      break;
    }

    if (choice < 1 || choice > 7) {
      fprintf(stderr, "Invalid Menu Choice.");
      continue;
    }

    printf("\nPlease Enter The First Number: ");
    scanf("%lf", &first);
    printf("\nEnter The Second Number: ");
    scanf("%lf", &second);

    switch (choice)
    {
      case 1: //addition
        result = first + second;
        break;
      case 2: //subtract
        result = first - second;
        break;
      case 3: //multiply
        result = first * second;
        break;
      case 4: //divide
        result = division(first, second);
        break;
      case 5: //modulus
        result = modulus(first, second);
        break;
      case 6: //power
        result = pow(first, second);
        break;
    }
    if (!isnan(result)) {
      printf("\nResult of the Operation is: %.2f", result);
    }
  };
  
  return 0;
}

double division(double a, double b) {
  if (b == 0) {
    fprintf(stderr, "Invalid Argument for Division");
    return NAN;
  } else {
    return a / b;
  }
}

double modulus(int a, int b) {
  if (b == 0) {
    fprintf(stderr, "Invalid Argument for Modulus");
    return NAN;
  } else {
    return a % b;
  }
}

void print_menu() {
  printf("\n\n---------------------------------");
  printf("\nWelcome to Simple Calculator\n");
  printf("\nChoose any of the following options:");
  printf("\n1. Add");
  printf("\n2. Subtract");
  printf("\n3. Multiply");
  printf("\n4. Divide");
  printf("\n5. Modulus");
  printf("\n6. Power");
  printf("\n7. Exit");
  printf("\n Enter your choice: ");
}