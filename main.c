#include <stdio.h>

// propmt function
void promptdisplay(){
    printf("> ");
}

// user input 
void parseinput(char* userInput,int numberone,int numbertwo,char operation){
    sscanf(userInput,"%i %s %i",numberone,operation,numbertwo);
}
int main(){
    int numberone;
    int numbertwo;
    char operation;
    char userInput[50];
    while(1){
        promptdisplay();
        fgets(userInput,sizeof(userInput),stdin);
        if(sscanf(userInput,"%i %s %i",numberone,operation,numbertwo)){
            parseinput(userInput,numberone,numbertwo,operation);
            if(operation == '+'){
                printf("The Result : %d\n",numberone+numbertwo);
            }else if(operation =='-'){
                printf("The Result : %d\n",numberone-numbertwo);
            }else if(operation == '*' || operation == 'x'){
                printf("The Result : %d\n",numberone * numbertwo);
            }else{
                printf("The Result : %d\n",numberone/numbertwo);
            }
        }
    }

    return 0;
}