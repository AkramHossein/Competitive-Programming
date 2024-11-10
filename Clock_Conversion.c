#include <stdio.h>

int main() {
    int t, i;
    scanf("%d", &t);

    for (i = 0; i < t; i++) {
        int a, b, c;
        char str[6];
        scanf("%s", str);

        
        a = (str[0] - '0') * 10 + (str[1] - '0');  
        b = (str[3] - '0') * 10 + (str[4] - '0'); 


        if (a < 12 && a != 0) {
            printf("%02d:%02d AM\n", a, b); 
        } else if (a > 11) {
            if (a == 12) {
                printf("12:%02d PM\n", b); 
            } else {
                c = a - 12;
                printf("%02d:%02d PM\n", c, b);  
            }
        } else if (a == 0) {
            printf("12:%02d AM\n", b);  
        }
    }

    return 0;
}
