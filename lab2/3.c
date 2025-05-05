// to find the profit or loss percent
#include <stdio.h>
int main()
{
    int cp, sp;
    printf("enter cp and sp: ");
    scanf("%f%f", &cp, &sp);
    if (sp > cp)
    {
        int pa = sp - cp;
        printf("Profit percent %f", ((pa*100)/cp));
    }
    else
    {
        int la = cp - sp;
        printf("loss percent %f", (la*100)/cp);
    }

    return 0;
}