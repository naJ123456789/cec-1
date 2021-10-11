#include <stdio.h>
int main() {
    double a, b, product;
    printf("Enter two numbers to multiply: ");
    scanf("%lf %lf", &a, &b);  
 
    // Calculating product
    product = a * b;

    // Result up to 2 decimal point is displayed using %.2lf
    printf("Product = %.2lf", product);
    
    return 0;
}
void function fizzbuzz {
  for (i = 1; i <= 100; i++) {
    set print_number to true;
    If i is divisible by 3 {
      print "Fizz";
      set print_number to false; }
    If i is divisible by 5 {
      print "Buzz";
      set print_number to false; }
    If print_number, print i;
    print a newline;
  }
}
