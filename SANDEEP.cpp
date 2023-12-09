#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char gender; 
    int a = 0, b = 0, c = 0, d = 0, choice, age;
    printf("--------------------VOTE FOR INDIA--------------------\n");

    while (1) {
        printf("\nEnter Voter's Name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0'; 

        printf("Enter Voter's Age: ");
        if (scanf("%d", &age) != 1) {
            printf("ERROR IN ENTERING THE VOTER'S AGE!!!!\n");
            continue; 
        }

        while (1) {
            printf("Enter Voter's Gender (M/F): ");
            if (scanf(" %c", &gender) != 1 || (gender != 'M' && gender != 'F')) {
                printf("!!!Invalid input for gender!!! \nPlease enter 'M' for Male or 'F' for Female.\n");
                continue; 
            } else {
                break; 
            }
        }

        printf("\n***CONFIRMATION***\n");
        if (gender == 'M') {
            printf(" NAME: Mr. %s ", name);
        } else if (gender == 'F') {
            printf(" Voter Name is : Miss. %s ", name);
        }

        printf("\n Voter Age is : %d \n", age);

        if (age < 18) {
            printf("Sorry, %s, you are not ready for the vote.\n", name);
        } else {
            printf("\nPolitical Representatives:\n");
            printf("1-> (NARENDRA MODI)\n");
            printf("2-> (AKHILESH YADAV)\n");
            printf("3-> (ARVIND KEJRIVAL)\n");
            printf("4-> (MAYAWATI)\n");
            
            printf("Give the vote : ");
            if (scanf("%d", &choice) != 1 || choice < 1 || choice > 4) {
                printf("Invalid choice! \nPlease choose a representative from 1 to 4.\n");
                continue; 
            }

            switch (choice) {
                case 1:
                    a++;
                    break;
                case 2:
                    b++;
                    break;
                case 3:
                    c++;
                    break;
                case 4:
                    d++;
                    break;
                default:
                    printf("ERROR!!!\n");
            }
        }

       while (1) {
            printf("Do you want to proceed (Y/N): ");
            char ch;
            scanf(" %c", &ch);

            if (ch == 'Y' || ch == 'y') {
                getchar(); 
                break; 
            } else if (ch == 'N' || ch == 'n') {
                goto end; 
            } else {
                printf("Invalid input. Please enter 'Y' or 'N'.\n");
            }
        }
    }

end:

    printf("\n :VICTORY REPRESENTATIVE IS:  ");
    if (a > b && a > c && a > d) {
        printf("(NARENDRA MODI)\n");
    } else if (b > a && b > c && b > d) {
        printf("(AKHILESH YADAV)\n");
    } else if (c > a && c > b && c > d) {
        printf("(ARVIND KEJRIWAL)\n");
    } else if (d > a && d > b && d > c) {
        printf("(MAYAWATI)\n");
    } else {
        printf(" NO DATA FOUND ");
    }

    printf("\n-------THANK YOU HAVE A GOOD DAY---------\n");
    return 0;
}
