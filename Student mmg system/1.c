#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
  char f_name[20];
  char l_name[20];
  char roll[15];
  char dob[15];
  char mobile[15];
  char email[30];
  char address[50];
  char course[20];
  char branch[20];
  char parent_name[30];
  char parent_contact[15];
};

// ####### to convert into uppercase the course, roll number########
void to_uppercase(char *str)
{
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
    {
      str[i] -= 32; // Convert lowercase to uppercase
    }
  }
}
// #####Capatalize the first letter of name and last name#######
void capitalize_name(char *str)
{
  if (str[0] >= 'a' && str[0] <= 'z')
  {
    str[0] -= 32; // Make first letter uppercase
  }
  for (int i = 1; str[i] != '\0'; i++)
  {
    if (str[i] >= 'A' && str[i] <= 'Z')
    {
      str[i] += 32; // Make rest lowercase
    }
  }
}

// ######### capatalize addtess ############
void capitalize_address(char *str)
{
  int capitalizeNext = 1; // capitalize first letter and letters after commas

  for (int i = 0; str[i] != '\0'; i++)
  {
    if (capitalizeNext && str[i] >= 'a' && str[i] <= 'z')
    {
      str[i] -= 32; // convert to uppercase
      capitalizeNext = 0;
    }
    else if (str[i] == ',')
    {
      capitalizeNext = 1; // next letter after comma should be capitalized
    }
    else if (str[i] != ' ')
    {
      capitalizeNext = 0; // normal letters after first letter or comma
    }
  }
}
// capatilize the parents name
void capitalize_full_name(char *str)
{
  int capitalizeNext = 1; // capitalize first letter and letters after spaces

  for (int i = 0; str[i] != '\0'; i++)
  {
    if (capitalizeNext && str[i] >= 'a' && str[i] <= 'z')
    {
      str[i] -= 32; // convert to uppercase
      capitalizeNext = 0;
    }
    else if (str[i] == ' ')
    {
      capitalizeNext = 1; // next letter after space should be capitalized
    }
    else
    {
      capitalizeNext = 0; // normal letters after first letter or space
    }
  }
}

// ####################################
void add(void);

int main()
{
  int choice = 0;

  while (choice != 6)
  {
    system("cls"); // only works in CMD
    printf("################## STUDENT DATABASE MANAGEMENT #####################\n");
    printf("1. Add student Record\n");
    printf("2. View Student Details\n");
    printf("3. Search Student\n");
    printf("4. Modify Student Record\n");
    printf("5. Delete Student Record\n");
    printf("6. Exit\n");
    printf("_____________________________________________________________________\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      add();
      break;
    case 6:
      printf("Exiting program.\n");
      break;
    default:
      printf("Invalid choice. Press Enter to continue...");
      getchar(); // to pause
      getchar();
    }
  }

  return 0;
}

void add()
{
  FILE *fp;
  char another = 'y';

  struct student info;

  fp = fopen("studentsinfo.txt", "a");
  if (fp == NULL)
  {
    printf("Error opening file!\n");
    return;
  }

  do
  {
    system("cls");
    printf("======== ADD STUDENT INFORMATION ========\n");

    printf("First name: ");
    scanf("%s", info.f_name);
    capitalize_name(info.f_name);

    printf("Last name: ");
    scanf("%s", info.l_name);
    capitalize_name(info.l_name);

    printf("Roll Number: ");
    scanf("%s", info.roll);
    to_uppercase(info.roll);

    printf("Date of Birth (DD-MM-YYYY): ");
    scanf("%s", info.dob);

    printf("Mobile Number: ");
    scanf("%s", info.mobile);

    printf("Email: ");
    scanf("%s", info.email);

    printf("Address: ");
    scanf(" %[^\n]", info.address); // accepts full address with spaces
    capitalize_address(info.address);

    printf("Course: ");
    scanf("%s", info.course);
    to_uppercase(info.course);

    printf("Branch: ");
    scanf("%s", info.branch);
    capitalize_name(info.branch);

    printf("Parent's Name: ");
    scanf(" %[^\n]", info.parent_name);
    capitalize_full_name(info.parent_name);

    printf("Parent's Contact Number: ");
    scanf("%s", info.parent_contact);

    fprintf(fp, "Name: %s %s\n", info.f_name, info.l_name);
    fprintf(fp, "Roll No: %s\n", info.roll);
    fprintf(fp, "DOB: %s\n", info.dob);
    fprintf(fp, "Mobile: %s\n", info.mobile);
    fprintf(fp, "Email: %s\n", info.email);
    fprintf(fp, "Course: %s\n", info.course);
    fprintf(fp, "Branch: %s\n", info.branch);
    fprintf(fp, "Parent Name: %s\n", info.parent_name);
    fprintf(fp, "Parent Contact: %s\n", info.parent_contact);
    fprintf(fp, "Address: %s\n", info.address);
    fprintf(fp, "--------------------------\n");
    printf("\n");
    printf("*******Student record added successfully!*******\n");

    printf("Do you want to add another record? (y/n): ");
    scanf(" %c", &another); // space before %c clears newline
  } while (another == 'y' || another == 'Y');

  fclose(fp);
}
