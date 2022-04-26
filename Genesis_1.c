#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main()
{
    char name[100],username[100],pass[50],c_pass[50],pass_1[50],gender;
    char number[15],email[200],date[12],nationality[15],username_1[100];
    int age,option;
    printf("Welcome To Genesis.com\n");
    start:
    printf("\n1.Signup\n");
    scanf("%d", &option);

    if(option==1){
        printf("\nFill in Your Details\n");
    printf("\nEnter Your First and Last Name\n");
    scanf(" %[^\n]%*c", &name);
    printf("\nEnter Your Username; (Case Sensitive)\n");
    scanf(" %[^\n]%*c", &username);
    roll:
    printf("\nEnter Your Password\n");
    scanf(" %[^\n]%*c", &pass);
    printf("Confirm Password\n");
    scanf(" %[^\n]%*c", &c_pass);
    if(strcmp(pass, c_pass)==0){
        pass:
    printf("\nGender: (M/F)\n");
    scanf(" %c", &gender);
    if(gender=='M'||gender=='m'||gender=='F'||gender=='f'){
            goto lead;
            }else{
    printf("Incorrect input");
        goto pass;
    }
    lead:
    printf("\nEnter Your Email\n");
    scanf(" %[^\n]%*c", email);
    printf("\nEnter Your Phone Number: (include country code)\n");
    scanf(" %s", number);
    printf("\nWhat's Your Date Of Birth?(DD/MM/YYYY)\n");
    scanf(" %[^\n]%*c", &date);
    printf("\nWhat's Your Age?\n");
    scanf("%d", &age);
    if(age<18){
        printf("You are not allowed on this site\n");
        return 0;
    }else{
    printf("What's Your Nationality:\n");
    scanf(" %s", nationality);
        printf("Account Successfully Created.\n");
        printf("Please wait...");

    }
    }else{
        printf("Password and confirmation doesn't match\n");
        goto roll;
    }
}else{
    printf("Incorrect option");
    goto start;
}
if(option==2){
    goto login;
}
    sleep(5);
    system("cls");
    printf("\nWelcome\nLogin now\n");
    login:
    printf("Enter Your Username:\n");
    scanf(" %[^\n]%*c", &username_1);
    if(strcmp(username_1, username)==0){
    log:
        printf("Enter Your Password:\n");
        scanf(" %[^\n]%*c", pass_1);
        if(strcmp(pass_1, pass)!=0){
            printf("Incorrect password\n");
            goto log;
        }else{
            printf("Login Successful.\n");
            printf("______________________________________________________________\n");
            printf("Please wait...");
        }

    }else{
        printf("There is no account associated with this username.\n");
        goto login;
    }
    sleep(5);
    system("cls");
    printf("Welcome To My Website\n");
    printf("\nYour Details\n_____________________\n");
    printf("\nName: %s.\n", name);
    printf("Username: %s.\n", username);
    printf("Gender: %c.\n", gender);
    printf("Email: %s.\n", email);
    printf("Number: %s.\n", &number);
    printf("DOB: %s.\n", date);
    printf("Age: %d.\n", age);
    printf("Nationality: %s.\n", nationality);
    return 0;

}




