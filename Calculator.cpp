#include <cstdio>
#include <cmath>
int main(){
    float n1, n2;
    char op;
    printf("Enter an equation: ");
    scanf("%f %c %f", &n1, &op, &n2);
    if (op == '+'){
        printf("%f + %f = %f", n1, n2, (n1 + n2));
    } else if (op == '-'){
        printf("%f - %f = %f", n1, n2, (n1 - n2));
    } else if (op == '*'){
        printf("%f * %f = %f", n1, n2, (n1 * n2));
    } else if (op == '/'){
        printf("%f / %f = %f", n1, n2, (n1 / n2));
    } else if (op == '^'){
        printf("%f ^ %f = %f", n1, n2, (pow(n1, n2)));
    } else if (op == 'r'){
        printf("%f-rt(%f) = %f", n2, n1, (pow(n1, (1/n2))));
    } else if (op == '%'){
        printf("%f percent of %f = %f", n1, n2, ((n1/100)*n2));
    } else {
        printf("ERROR");
    }
    return 0;
}