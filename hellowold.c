#include<stdio.h>

int main() {
    // testing strong number
    int n, str = 0, t;

    printf("Enter the value of n \n");
    scanf("%d", &n);

    t = n;
    int rem;

    while (n > 0) {
        rem = n % 10;
        int fact = 1;

        for (int i = 1; i <= rem; i++) {
            fact = fact * i;
        }

        str = str + fact;
        n = n / 10;
    }

    if (str == t) {
        printf("%d is a strong number\n", t);
    } else {
        printf("%d is not a strong number\n", t);
    }

    return 0;
}
