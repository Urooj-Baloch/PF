#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Dep {
    char Name[20];
    char Role[20];
    int Communication;
    int Teamwork;
    int Creativity;
};

char* NameRand(char Names[20][20], int Name_Used[20]);
char* RoleRand(char Roles[5][20], int Role_Used[5]);
void InitializeDep(struct Dep dep[], char Names[20][20], int Name_Used[20]);
void PrintDep(struct Dep dep[]);
int DepSum(struct Dep dep[]);

int main() {
     int i;
    printf("*******UROOJ BALOCH (23K-0071)*********\n");
    srand(time(NULL));

    char NamePool[20][20] = {"urooj", "Zoni", "Johar", "Farhana",
                              "Bushra", "Mazhar", "Uzma", "Fawad",
                              "kalsoom", "amna", "Minal", "Uzair",
                              "Faiza", "rehana", "naina", "Fakhira",
                              "Ali", "rabeel", "Razia", "Aiza"};
    int NameUsed[20] = {0};

    struct Dep HR[5];
    struct Dep Finance[5];
    struct Dep Marketing[5];
    struct Dep Logistics[5];

    InitializeDep(HR, NamePool, NameUsed);
    InitializeDep(Finance, NamePool, NameUsed);
    InitializeDep(Marketing, NamePool, NameUsed);
    InitializeDep(Logistics, NamePool, NameUsed);

    int sum[4] = {DepSum(HR), DepSum(Finance), DepSum(Marketing), DepSum(Logistics)};
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
            PrintDep(HR);
            break;

        case 1:
            PrintDep(Finance);
            break;

        case 2:
            PrintDep(Marketing);
            break;

        case 3:
            PrintDep(Logistics);
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

void InitializeDep(struct Dep dep[], char Names[20][20], int Name_Used[20]) {
    char Roles[5][20] = {"Director", "Executive", "Manager ", "Employee", "Trainee "};
    int RoleUsed[5] = {0};

    for (int i = 0; i < 5; i++) {
        strcpy(dep[i].Name, NameRand(Names, Name_Used));
        strcpy(dep[i].Role, RoleRand(Roles, RoleUsed));
        dep[i].Communication = rand() % 101;
        dep[i].Creativity = rand() % 101;
        dept[i].Teamwork = rand() % 101;
    }
}

void PrintDep(struct Dep dep[]) {
    printf("\n***************************************************************\n");
    printf("| %-10s | %-15s | Communication | Creativity | Teamwork |\n", "Name", "Role");
    printf("*************************************************************\n");

    for (int i = 0; i < 5; i++) {
        printf("| %-10s | %-15s | %-13d | %-10d | %-8d |\n",
               dep[i].Name,
               dep[i].Role,
               dep[i].Communication,
               dep[i].Creativity,
               dep[i].Teamwork);
    }

    printf("*************************************************************\n");
}

int DepSum(struct Dep dep[]) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += dep[i].Communication + dep[i].Creativity + dep[i].Teamwork;
    }
    return sum;
    
}

