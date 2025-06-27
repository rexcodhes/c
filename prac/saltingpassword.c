#include <stdio.h>
#include <string.h>

void salting(char password[]);

int main (){
    char password[100];
   
    printf("Enter a password: ");
    scanf("%s", password);
    
    salting(password);
   
    return 0;
}
void salting(char password[]){
   
    char newPassword[200];
    char salt[] = "123";
    
    strcpy(newPassword, password);
    strcat(newPassword, salt);
    
    printf("The new password is %s", newPassword);
} 