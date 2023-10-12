#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct User {
    char name[30];
    char mobNo[30];
};
int allocateRoom(void);
void takeInput(char[], int);

int main() {
    struct User user;
    int choice;
    int room;
    while (1) {
        printf("1. Allocate room\n2. Delete the room\n3.Allocated room\n4. Exit\n");
        printf("Enter your choice here: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter student's name: ");
                takeInput(user.name, 30);

                printf("Enter student's mobile number: ");
                takeInput(user.mobNo, 30);

                room=allocateRoom();
                break;
            case 2:
                // Implement room deletion logic here
                break;
            case 3:
                printf("NAME\t\t\t\tMobile No\t\t\t\tAllocated Room");
                printf("\n%s\t\t\t\t%s\t\t\t\t%d\n",user.name,user.mobNo,room);
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0); // Terminate the program
                break;
            default:
                printf("Invalid choice. Please select 1, 2, or 3.\n");
                break;
        }
    }

    return 0;
}

void takeInput(char ch[], int size) {
    fflush(stdin); // Clear any remaining newline characters in the input buffer
    fgets(ch, size, stdin);
    // ch[strlen(ch) - 1] = '\0'; // Remove the trailing newline character
}
int allocateRoom(void)
{
    int room;
    int first=0;
    int last=10;
    room=(rand()%10)+1;
}
