#include <stdio.h>
#include<string.h>
int main()
{
    char choose[8];
    char names [20][20]={"manar","manora"};
    char pass[20][20]={"123","456"};
    int num=2;
    
    again:
    
    printf("\nDo you want to login or register: ");
    scanf("%s", choose);
    
    printf("\nHello to %s form \n ", choose);
    if(strcmp(choose,"login")==0){
      char name[20];
      printf( "\nEnter your username : ");
      scanf("%s", name);
      
      char password [20];
      printf("\nEnter your password :");
      scanf("%s", password);
      
      int i=0;
      while (i<20){
        if(strcmp(name,names[i])==0 && strcmp(password,pass[i])==0){
        printf("\nHello %s to our application \n",name);
        break;
        }

        i++;
        if(i==20){
            printf("\npassword or username is rong\n");
            goto again;
        }
      }
    }
    else if(strcmp(choose,"register")==0){
      printf("\nEnter username :");
      scanf("%s", names[num]);
      
      printf("\nEnter password :");
      scanf("%s", pass[num]);
      printf("\nyou regisered successfully\n");
      num++;
      goto again;

    
    }else {
     printf("\nchose one option please");
    
    }

    return 0;
}