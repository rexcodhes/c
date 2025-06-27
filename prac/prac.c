//conditional statements
// if-else / switch-case
//i iterator ; counter
//strlen, strcpy, strcat, strcmp, 
#include <stdio.h>
#include <string.h>

int main (){

   char name[100];
   char ch;
   int i;
   char newPass;
   for (i=0; i<100; i++){
      scanf("%c", &ch);

      if (ch == '\n'){
         break;
      }
      name[i] = ch;
   }
   name[i] = '\0'; // Null-terminate the string
   printf("The string is: %s\n", name);
   char salt[] = "123";
   strcpy(newPass, name);
   strcpy(newPass,salt);
   printf("The new password is: %s\n", newPass);
   return 0;
}

