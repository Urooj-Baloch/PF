#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Dept {
    char Name[20];
    char Role[20];
    int Communication;
    int Teamwork;
    int Creativity;
};

char* NameRand(char Names[20][20], int Name_Used[20]);
char* RoleRand(char Roles[5][20], int Role_Used[5]);
void InitializeDept(struct Dept dept[], char Names[20][20], int Name_Used[20]);
void PrintDept(struct Dept dept[]);
int DeptSum(struct Dept dept[]);

int main() {
     int i;
    printf("*******UROOJ BALOCH (23K-0071)*********\n");
    srand(time(NULL));

    char NamePool[20][20] = {"urooj", "Zani", "Johar", "Farhana",
                              "Bushra", "Mazhar", "Uzma", "Fawad",
                              "kalsoom", "amna", "Minal", "Uzair",
                              "Faiza", "rehana", "naina", "Fakhira",
                              "Ali", "rabeel", "Razia", "Aiza"};
    int NameUsed[20] = {0};

    struct Dept HR[5];
    struct Dept Finance[5];
    struct Dept Marketing[5];
    struct Dept Logistics[5];

    InitializeDept(HR, NamePool, NameUsed);
    InitializeDept(Finance, NamePool, NameUsed);
    InitializeDept(Marketing, NamePool, NameUsed);
    InitializeDept(Logistics, NamePool, NameUsed);

    int sum[4] = {DeptSum(HR), DeptSum(Finance), DeptSum(Marketing), DeptSum(Logistics)};
    int maxIndex = 0;
    int maxSum = sum[0];

    for (int i = 1; i < 4; i++) {
        if (sum[i] > maxSum) {
            maxSum = sum[i];
            maxIndex = i;
        }
    }

    switch (maxIndex) {
        case 0:
            PrintDept(HR);
            break;

        case 1:
            PrintDept(Finance);
            break;

        case 2:
            PrintDept(Marketing);
            break;

        case 3:
            PrintDept(Logistics);
            break;

        default:
            break;
    }

    return 0;
}

char* NameRand(char Names[20][20], int Name_Used[20]) {
    while (1) {
        int randomIndex = rand() % 20;
        if (!Name_Used[randomIndex]) {
            Name_Used[randomIndex] = 1;
            return Names[randomIndex];
        }
    }
}

char* RoleRand(char Roles[5][20], int Role_Used[5]) {
    while (1) {
        int randomIndex = rand() % 5;
        if (!Role_Used[randomIndex]) {
            Role_Used[randomIndex] = 1;
            return Roles[randomIndex];
        }
    }
}

void InitializeDept(struct Dept dept[], char Names[20][20], int Name_Used[20]) {
    char Roles[5][20] = {"Director", "Executive", "Manager ", "Employee", "Trainee "};
    int RoleUsed[5] = {0};

    for (int i = 0; i < 5; i++) {
        strcpy(dept[i].Name, NameRand(Names, Name_Used));
        strcpy(dept[i].Role, RoleRand(Roles, RoleUsed));
        dept[i].Communication = rand() % 101;
        dept[i].Creativity = rand() % 101;
        dept[i].Teamwork = rand() % 101;
    }
}

void PrintDept(struct Dept dept[]) {
    printf("\n***************************************************************\n");
    printf("| %-10s | %-15s | Communication | Creativity | Teamwork |\n", "Name", "Role");
    printf("*************************************************************\n");

    for (int i = 0; i < 5; i++) {
        printf("| %-10s | %-15s | %-13d | %-10d | %-8d |\n",
               dept[i].Name,
               dept[i].Role,
               dept[i].Communication,
               dept[i].Creativity,
               dept[i].Teamwork);
    }

    printf("*************************************************************\n");
}

int DeptSum(struct Dept dept[]) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += dept[i].Communication + dept[i].Creativity + dept[i].Teamwork;
    }
    return sum;
}

