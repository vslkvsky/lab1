#include <stdio.h>

int main()
{
    int dp[10000], n, i;    //n- довжина, i - для циклу, dp - масив
    dp[0] = 1; dp[1] = 2; dp[2] = 3;    //Початкові значення
    printf("Введіть довжину послідовностей n:\n");
    scanf("%d",&n);
    for(i=1;i<=n+1;i++){        //Аби отримати кількість послідовностей,
    dp[i] = dp[i-1] + dp[i-2];} //потрібно додати дві попередні кількості
    printf("Кількість шуканих послідовностей: %d\n", dp[n+1]);

    return 0;            //UPD. Я писав код у onlinegdb.com, і там він обчислював правильно, але я помітив, що Clion та інших компіляторах код видає інші значення -_-.
}
