#include <stdio.h>
main() {
 int a = 20;
 int b = 10;
 int c = 15;
 int d = 5;
 int e;
 e = (a + b) * c / d; 
 e = ((a + b) * c) / d; 
 e = (a + b) * (c / d); 
 e = a + (b * c) / d;
}