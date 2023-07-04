#include <stdio.h>
#include <math.h>

int main() {
    int p, result;   //p- кількість розрядів, result - відповідь
    printf("Введіть кількість розрядів:\n");
    scanf("%d",&p);
    switch(p){
        case 1: result = pow(2,p); printf("кількість чисел із %d розрядів: %d\n", p, result); break;    //формула з методички правильно працює тільки, коли p=2
        case 2: result = pow(2,p); printf("кількість чисел із %d розрядів: %d\n", p, result); break;    //тому стілки кейсів
        case 3: result = pow(2,p) - pow(2,1); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
        case 4: result = pow(2,p) - pow(2,2); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
        case 5: result = pow(2,p) - pow(2,3); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
        case 6: result = pow(2,p) - pow(2,4); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
        case 7: result = pow(2,p) - pow(2,5); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
        case 8: result = pow(2,p) - pow(2,6); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
        case 9: result = pow(2,p) - pow(2,7); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
        case 10: result = pow(2,p) - pow(2,8); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
        case 11: result = pow(2,p) - pow(2,9); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
        case 12: result = pow(2,p) - pow(2,10); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
        case 13: result = pow(2,p) - pow(2,11); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
        case 14: result = pow(2,p) - pow(2,12); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
        case 15: result = pow(2,p) - pow(2,13); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
        case 16: result = pow(2,p) - pow(2,14); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
        case 17: result = pow(2,p) - pow(2,15); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
        case 18: result = pow(2,p) - pow(2,16); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
        case 19: result = pow(2,p) - pow(2,17); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
        case 20: result = pow(2,p) - pow(2,18); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
        case 21: result = pow(2,p) - pow(2,19); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
        case 22: result = pow(2,p) - pow(2,20); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
        case 23: result = pow(2,p) - pow(2,21); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
        case 24: result = pow(2,p) - pow(2,22); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
        case 25: result = pow(2,p) - pow(2,23); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
        case 26: result = pow(2,p) - pow(2,24); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
        case 27: result = pow(2,p) - pow(2,25); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
        case 28: result = pow(2,p) - pow(2,26); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
        case 29: result = pow(2,p) - pow(2,27); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
        case 30: result = pow(2,p) - pow(2,28); printf("кількість чисел із %d розрядів: %d\n", p, result); break;
    }
    return 0;
}