#include <stdio.h>

int main() {
    int t1, t2, t3; //За скільки годин кожен їсть торт
    float t, tt;    //Додаткові змінні

    printf("Enter times\n");
    scanf("%d",&t1);
    scanf("%d",&t2);
    scanf("%d",&t3);

    t = (t1 + t2 + t3)/3;
    tt = t/3;

    printf("Час необхідний для з'їдання пирога: %.2f годин",tt);


    return 0;
}