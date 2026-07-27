#include <stdio.h>
#include <unistd.h>

/**
 * Grade Book Calculator
 * This program allows the user to input student names and their corresponding scores.
 * It then calculates and displays the letter grades for each student based on their scores.
 * Additionally, it provides class statistics including the average score, highest score, and lowest score.
 * 
 * This one became so easy i think yall dont even need to 
 * see the code or commentary, but here it is anyway. Hope it helps :)
 */

typedef struct
{
    char name[50];
    int score;
} Student;

char scoreToGrade(int score);
void listGrades(int numStudents, Student students[]);
void clearInputBuffer(void);
int checkValidName(char *name);


int main(void)
{
    int numStudents;

    printf("Welcome to the Grade Book Calculator!\n");

    while (1)
    {
        printf("Enter the number of students: ");

        if (scanf("%d", &numStudents) == 1 && numStudents > 0)
            break;

        printf("Invalid number of students.\n");
        clearInputBuffer();
    }

    Student students[numStudents];

    for (int i = 0; i < numStudents; i++)
    {
        printf("\nEnter the %d. student name: ", i + 1);
        scanf("%49s", students[i].name);

        while (!checkValidName(students[i].name))
        {
            printf("Invalid name. Please enter a valid name: ");
            scanf("%49s", students[i].name);
        }

        while (1)
        {
            printf("Enter the %d. student score (0-100): ", i + 1);

            if (scanf("%d", &students[i].score) == 1 &&
                students[i].score >= 0 &&
                students[i].score <= 100)
            {
                break;
            }

            printf("Invalid score. Please enter a number between 0 and 100.\n");
            clearInputBuffer();
        }

        sleep(1);
        printf("%s's grade: %c\n",
               students[i].name,
               scoreToGrade(students[i].score));
    }

    listGrades(numStudents, students);

    return 0;
}

char scoreToGrade(int score)
{
    if (score >= 90)
        return 'A';
    else if (score >= 80)
        return 'B';
    else if (score >= 70)
        return 'C';
    else if (score >= 60)
        return 'D';
    else
        return 'F';
}

void listGrades(int numStudents, Student students[])
{
    int total = 0;
    int highest = students[0].score;
    int lowest = students[0].score;
    
    printf("\nCalculating grades...\n");
    sleep(3); 
    printf("\n========== Grade Report ==========\n");

    for (int i = 0; i < numStudents; i++)
    {
        char grade = scoreToGrade(students[i].score);

        printf("%-20s %3d (%c)\n",
               students[i].name,
               students[i].score,
               grade);

        total += students[i].score;

        if (students[i].score > highest)
            highest = students[i].score;

        if (students[i].score < lowest)
            lowest = students[i].score;
    }

    printf("\nCalculating class statistics...\n");
    sleep(3);
    printf("\nClass Statistics\n");
    printf("----------------\n");
    printf("Average Score : %.2f\n", (float)total / numStudents);
    printf("Highest Score : %d\n", highest);
    printf("Lowest Score  : %d\n", lowest);
}

void clearInputBuffer(void)
{
    while (getchar() != '\n');
}

int checkValidName(char *name)
{
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (!((name[i] >= 'A' && name[i] <= 'Z') ||
              (name[i] >= 'a' && name[i] <= 'z') ||
              name[i] == ' '))
        {
            return 0;
        }
    }
    return 1; 
}