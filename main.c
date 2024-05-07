#include <stdio.h>

void promptdisplay(){
    printf("> ");
}

int main(){
    int numberone;
    int numbertwo;
    char operation;
    char userInput[50];
    while(1){
        promptdisplay();
        fgets(userInput,sizeof(userInput),stdin);
        if(sscanf(userInput,"%i %c %i",&numberone,&operation,&numbertwo) == 3){
            if(operation == '+'){
                printf("The Result : %d\n",numberone+numbertwo);
            }else if(operation =='-'){
                printf("The Result : %d\n",numberone-numbertwo);
            }else if(operation == '*' || operation == 'x'){
                printf("The Result : %d\n",numberone * numbertwo);
            }else if(operation =='/'){
                if(numbertwo != 0){
                printf("The Result : %d\n",numberone/numbertwo);
                }else{
                 printf("Error: Division by zero!\n");
                }
            }else{
                printf("Error : Invalid operation \n");
            }
        }else{
            printf("Error invalid input format \n");            
        }
    }

    return 0;
}