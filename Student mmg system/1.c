#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

// Structure for storing date of birth
struct dob {
    int day;
    int month;
    int year;
};

// Structure for storing student data
struct student {
    char firstName[25];
    char lastName[25];
    char roll[20];
    char mobile[15];
    char email[40];
    char course[30];
    struct dob birthDate;
    float fees;
};

// Utility function to convert string to uppercase
void toUpperCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
}

// Function declarations
void add(void);
void view(void);
void search(void);
void modify(void);
void delete_record(void);

// Main function
int main() {
    int choice = 0;

    while (choice != 6) {
        system("cls");
        printf("################## STUDENT DATABASE MANAGEMENT #####################\n");
        printf("\n1. Add Student Record\n");
        printf("2. View Student Details\n");
        printf("3. Search Student\n");
        printf("4. Modify Student Record\n");
        printf("5. Delete Student Record\n");
        printf("6. Exit\n");
        printf("_____________________________________________________________________\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: add(); break;
        case 2: view(); break;
        case 3: search(); break;
        case 4: modify(); break;
        case 5: delete_record(); break;
        case 6: printf("Exiting program.\n"); break;
        default:
            printf("Invalid choice. Press Enter to continue...");
            getchar(); getchar();
        }
    }

    return 0;
}

// Add student record
void add() {
    FILE *fp;
    char another = 'y';
    struct student s;

    fp = fopen("abc.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    do {
        system("cls");
        printf("======== ADD STUDENT INFORMATION ========\n");

        printf("First Name: ");
        scanf("%s", s.firstName);
        printf("Last Name: ");
        scanf("%s", s.lastName);
        printf("Roll Number: ");
        scanf("%s", s.roll);
        toUpperCase(s.roll);
        printf("Mobile Number: ");
        scanf("%s", s.mobile);
        printf("Email Address: ");
        scanf("%s", s.email);
        printf("Course: ");
        scanf("%s", s.course);
        toUpperCase(s.course);

        printf("Enter date of birth (day month year): ");
        scanf("%d %d %d", &s.birthDate.day, &s.birthDate.month, &s.birthDate.year);

        fprintf(fp, "%s %s %s %s %s %s %d %d %d\n",
                s.firstName, s.lastName, s.roll, s.mobile, s.email, s.course,
                s.birthDate.day, s.birthDate.month, s.birthDate.year);

        printf("\nStudent record added successfully!\n");
        printf("Do you want to add another record? (y/n): ");
        scanf(" %c", &another);
    } while (another == 'y' || another == 'Y');

    fclose(fp);
}

// View student records
void view() {
    FILE *fp;
    struct student s;

    fp = fopen("abc.txt", "r");
    if (fp == NULL) {
        printf("\nFile cannot be opened.\n");
        exit(0);
    }

    system("cls");
    printf("========== VIEW STUDENT RECORDS ==========\n\n");

    while (fscanf(fp, "%s %s %s %s %s %s %d %d %d",
                  s.firstName, s.lastName, s.roll, s.mobile, s.email, s.course,
                  &s.birthDate.day, &s.birthDate.month, &s.birthDate.year) != EOF) {
        printf("\nName: %s %s\nRoll No: %s\nMobile: %s\nEmail: %s\nCourse: %s\nDate of Birth: %d-%d-%d",
               s.firstName, s.lastName, s.roll, s.mobile, s.email, s.course,
               s.birthDate.day, s.birthDate.month, s.birthDate.year);
        printf("\n_________________________________\n");
    }

    fclose(fp);
    printf("\nPress any key to return...");
    getch();
}

// Search student by roll number
void search() {
    FILE *fp;
    struct student s;
    char r[20];
    int found = 0;

    fp = fopen("abc.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    system("cls");
    printf("======== SEARCH STUDENT INFORMATION ========\n");

    printf("\nEnter roll number to search: ");
    scanf("%s", r);
    toUpperCase(r);

    while (fscanf(fp, "%s %s %s %s %s %s %d %d %d",
                  s.firstName, s.lastName, s.roll, s.mobile, s.email, s.course,
                  &s.birthDate.day, &s.birthDate.month, &s.birthDate.year) != EOF) {
        if (strcmp(s.roll, r) == 0) {
            printf("\nRecord Found:\n");
            printf("Name: %s %s\n", s.firstName, s.lastName);
            printf("Roll: %s\n", s.roll);
            printf("Mobile: %s\n", s.mobile);
            printf("Email: %s\n", s.email);
            printf("Course: %s\n", s.course);
            printf("Date of Birth: %d-%02d-%02d\n", s.birthDate.day, s.birthDate.month, s.birthDate.year);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nStudent with Roll No. %s not found.\n", r);

    fclose(fp);
    printf("\nPress any key to return...");
    getch();
}

// Modify student record
void modify() {
    FILE *fp, *temp;
    struct student s;
    char r[20];
    int found = 0;

    fp = fopen("abc.txt", "r");
    temp = fopen("temp.txt", "w");

    if (fp == NULL || temp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    system("cls");
    printf("======== MODIFY STUDENT INFORMATION ========\n");

    printf("\nEnter roll number to modify: ");
    scanf("%s", r);
    toUpperCase(r);

    while (fscanf(fp, "%s %s %s %s %s %s %d %d %d",
                  s.firstName, s.lastName, s.roll, s.mobile, s.email, s.course,
                  &s.birthDate.day, &s.birthDate.month, &s.birthDate.year) != EOF) {
        if (strcmp(s.roll, r) == 0) {
            found = 1;

            printf("\nExisting record:\n");
            printf("Name: %s %s\n", s.firstName, s.lastName);
            printf("Roll: %s\n", s.roll);
            printf("Mobile: %s\n", s.mobile);
            printf("Email: %s\n", s.email);
            printf("Course: %s\n", s.course);
            printf("Date of Birth: %d-%d-%d\n", s.birthDate.day, s.birthDate.month, s.birthDate.year);

            printf("\nEnter new First Name: ");
            scanf("%s", s.firstName);
            printf("Enter new Last Name: ");
            scanf("%s", s.lastName);
            printf("Enter new Roll Number: ");
            scanf("%s", s.roll);
            toUpperCase(s.roll);
            printf("Enter new Mobile Number: ");
            scanf("%s", s.mobile);
            printf("Enter new Email: ");
            scanf("%s", s.email);
            printf("Enter new Course: ");
            scanf("%s", s.course);
            toUpperCase(s.course);
            printf("Enter new date of birth (day month year): ");
            scanf("%d %d %d", &s.birthDate.day, &s.birthDate.month, &s.birthDate.year);
        }

        fprintf(temp, "%s %s %s %s %s %s %d %d %d\n",
                s.firstName, s.lastName, s.roll, s.mobile, s.email, s.course,
                s.birthDate.day, s.birthDate.month, s.birthDate.year);
    }

    fclose(fp);
    fclose(temp);

    remove("abc.txt");
    rename("temp.txt", "abc.txt");

    if (found)
        printf("\nRecord modified successfully.\n");
    else
        printf("\nRecord not found.\n");

    printf("\nPress any key to return...");
    getch();
}

// Delete student record
void delete_record() {
    FILE *fp, *temp;
    struct student s;
    char r[20];
    int found = 0;

    fp = fopen("abc.txt", "r");
    temp = fopen("temp.txt", "w");

    if (fp == NULL || temp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    system("cls");
    printf("======== DELETE STUDENT INFORMATION ========\n");

    printf("Enter roll number to delete: ");
    scanf("%s", r);
    toUpperCase(r);

    while (fscanf(fp, "%s %s %s %s %s %s %d %d %d",
                  s.firstName, s.lastName, s.roll, s.mobile, s.email, s.course,
                  &s.birthDate.day, &s.birthDate.month, &s.birthDate.year) != EOF) {
        if (strcmp(s.roll, r) == 0) {
            found = 1;
            printf("\nDeleted Record:\n");
            printf("Name: %s %s\n", s.firstName, s.lastName);
            printf("Roll: %s\n", s.roll);
            continue; // Skip writing this record
        }

        fprintf(temp, "%s %s %s %s %s %s %d %d %d\n",
                s.firstName, s.lastName, s.roll, s.mobile, s.email, s.course,
                s.birthDate.day, s.birthDate.month, s.birthDate.year);
    }

    fclose(fp);
    fclose(temp);

    remove("abc.txt");
    rename("temp.txt", "abc.txt");

    if (found)
        printf("\n!!!!! Record deleted successfully !!!!!\n");
    else
        printf("\nRecord not found.\n");

    printf("\nPress any key to return...");
    getch();
}

