#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    if (n < 1 || n > 20) {
        return 1;
    }


    int alarms[20];

    for (int i = 0; i < n; i++) {
        int h, m;
        scanf("%d:%d", &h, &m);
        alarms[i] = (h - 7) * 60 + m;
    }

    for (int i = 0; i <= n - 3; i++) {
        if (alarms[i + 2] - alarms[i] <= 10) {
            printf("0");
            return 0;
        }
    }

    for (int i = 0; i <= n - 2; i++) {
        if (alarms[i + 1] - alarms[i] <= 10) {
            printf("1");
            return 0;
        }
    }

    printf("2");
    return 0;
}
