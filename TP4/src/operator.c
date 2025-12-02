#include "operator.h"

int addition(int a, int b) { return a + b; }
int soustraction(int a, int b) { return a - b; }
int produit(int a, int b) { return a * b; }
int quotient(int a, int b) { return b != 0 ? a / b : 0; }
int modulo(int a, int b) { return b != 0 ? a % b : 0; }
int et_bit(int a, int b) { return a & b; }
int ou_bit(int a, int b) { return a | b; }
int negation(int a) { return ~a; }
