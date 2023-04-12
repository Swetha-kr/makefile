#include<stdio.h>
#include <unistd.h>
#include <string.h>
#include <crypt.h>
//char *salt = "30";
//char *result = crypt("swe",salt);
int main() {
        char *pass = "30F6HBpyo1952";//vvdn 30 salted//

         char *salt = "30", passi[20];
	 printf("\n pass:");
	 scanf("%s",passi);
        //char *result = crypt(getpass("password:"),salt);
	char *result = crypt(passi,salt);
        printf("result : %s",result);


       // if(strcmp(pass,result)==0) {
         //       printf("\nOk");
       // }
        //else {
          //      printf("\nNot ok");
       // }
}
