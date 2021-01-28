#include <stdio.h>

int main() {
    
    float *ptr_float;
    
    printf("El valor apuntado por ptr_float es %f \n", *ptr_float);
    
    *ptr_float = 10.5;

    printf("El valor apuntado por ptr_float es %f", *ptr_float);

    return 0;
}
  