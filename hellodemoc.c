#include <stdio.h>
#include <unistd.h>   // for usleep
#include <stdlib.h>   // for system("clear")
//This is first file created by GK
int main() {
    int i;
    for (i = 0; i < 50; i++) {
        system("clear"); // clears screen
        for (int j = 0; j < i; j++) {
            printf(" ");  // print spaces to move right
        }
        printf("HELLO 🌟\n");  // the animated message
        usleep(100000);  // delay = 0.1 second
    }
    return 0;

}
