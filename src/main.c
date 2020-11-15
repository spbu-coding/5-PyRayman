#include <stdio.h>

void other(){
    printf("Please don't disgrace \n");
}


void input(){
    char buffer[20];
    printf("Enter text: ");
    fflush(stdout);
    scanf("%s",buffer);
    printf("\n You have entered: %s \n",buffer);
    fflush(stdout);
}



int main(){
    input();
    printf("Process Status: Ok \n");
    

    return 0;
}

