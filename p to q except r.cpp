#include <stdio.h>

int main() {
    int P, Q, R;
    printf("Enter P, Q and R separated by spaces: ");
    scanf("%d %d %d", &P, &Q, &R);

    for (int i = P; i <= Q; i++) {
    if(i%10 == R || i==R) {
	continue;
    }
    printf("  %d",i);
}
    return 0;
}

