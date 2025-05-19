
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<time.h>

#define MAX_QUES_LEN 300
#define MAX_OPTION_LEN 100

typedef struct {
    char text[MAX_QUES_LEN];
    char options[4][MAX_OPTION_LEN];
    char correct_option;
    int timeout;
    int prize_money;
} Question;

// Function prototypes
int read_questions(char* file_name, Question** questions);
int print_formatted_question(Question question);
int play_game(Question* questions, int no_of_questions);
int use_lifeline(Question* question, int* lifeline);

int main() {
    int choice, chh;  // Changed from char to int since you're using %d in scanf
    srand(time(NULL));
    
    printf("\t\t Welcome to the game show! ! !\n");
    printf("\t\t 1. Play game.\t\t\n");
    printf("\t\t 2. Exit game \t\t\n");
    printf("\t Choose option\t\n: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("Choose a category:\n");
            printf("1. Sports\n");
            printf("2. History\n");
            printf("3. Math\n");
            printf("Choose the option: \n");
            scanf("%d", &chh);
            
            switch (chh) {
                case 1:
                case 2:
                case 3:
                    printf("Displaying questions...\n");
                    Question* questions;
                    int no_of_questions = read_questions("questions.txt", &questions);
                    if (no_of_questions > 0) {
                        play_game(questions, no_of_questions);
                    }
                    free(questions);
                    break;
                default:
                    printf("Invalid choice\n"); // 
                    break;
            }
            break;
        case 2:
            printf("Exiting game...\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    
    return 0;
}
