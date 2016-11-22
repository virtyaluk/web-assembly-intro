#include <stdio.h>

float multiply(float a, float b);
float add(float a, float b);
float substract(float a, float b);
float divide(float a, float b);

int main(int argc, char ** argv) {
	float a, b, c, d;

  printf("\nHello, world!");

  a = multiply(12.4, 64.3);
  printf("\nThe result of multiplying is %f", a);

  b = add(43.3, 75.3);
  printf("\nThe result of addition is %f", b);

  c = substract(86.5, 32.4);
  printf("\nThe result of substraction is %f", c);

  d = divide(64.3, 23.2);
  printf("\nThe result of division is %f", d);
}

float multiply(float a, float b) {
	float r;
	r = a * b;
	return (r);
}

float add(float a, float b) {
	float r;
	r = a + b;
	return (r);
}

float substract(float a, float b) {
	float r;
	r = a - b;
	return (r);
}

float divide(float a, float b) {
	float r;
	r = a / b;
	return (r);
}
