#include <stdio.h>

int main() {
    float cp, sp, percentage;

    scanf("%f %f", &cp, &sp);

    if (sp > cp) {
        percentage = ((sp - cp) / cp) * 100;
        printf("Profit %g%%", percentage);
    }
    else if (sp < cp) {
        percentage = ((cp - sp) / cp) * 100;
        printf("Loss %g%%", percentage);
    }
    else {
        printf("No Profit No Loss");
    }

    return 0;
}