#include<stdio.h>
#include<string.h>


int main(){
    int ch;

    printf("\t\t\n=== WELCOME ON THE GAME SHOW====== \t\t\n: ");
    printf("\t\t\n (1). ===== PLAY GAME=====\t\t\n");   
    printf("\t\t\n (2). ===EXIT GAME====\t\t\n");
    printf("\t\t\n=== ENTER OPTIONS====\t\n(1-2): \t");
    scanf("%d",&ch);          // for the user choice
    switch(ch){
        case 1:
        
     // dividing question on different category user choice 
        printf("\t\t ===== DISPLAY THE CATEGORY OF QUESTION===\t\t\n: ");
        printf("\t\t 1. Display the sports category question\t\t\n ");
        printf("\t\t 2. Display the history related question: \t\t\n");
        printf("\t\t\n 3. Display math related question:\t\t\n");
        printf("choice options(1-3): \n");
         int choice;
        scanf("%d",&choice);
        

        switch (choice)  // user choice options
        {
        case 1:
            printf("\n\t sports question selected: \n");
            break;
            case 2:
            printf("\t\n History question selected: \n");
            break;
            case 3:
            printf("\t\n Math questions selected: \n\t");
            break;
        
        default:   // defaulting case
        printf("\n\t invilid category queestion: \n");
            break;
        }


        case 2:    // if doesn't want to play game
        printf("thank you !\n");
        break;
        default:
        printf("please enter the valid number (1 or 2): ");
        break;
    }
    return 0;
}
