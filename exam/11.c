#include <stdio.h>

struct player {
    char name[20];
    char pos[20];
    int age;
    int hei;
};

int main() {
    struct player p[2];

    printf("Enter the data (name position age height): \n");
    for (int i = 0; i < 2; i++) {
        scanf("%s %s %d %d", (p + i)->name, (p + i)->pos, &(p + i)->age, &(p + i)->hei);
    }

    printf("\n......................\n");
    for (int i = 0; i < 2; i++) {
        printf("Name = %s\n", (p + i)->name);
        printf("Position = %s\n", (p + i)->pos);
        printf("Age = %d\n", (p + i)->age);
        printf("Height = %d\n", (p + i)->hei);
        printf("----------------------\n");
    }

    return 0;
}
