#include<stdio.h>
#include<string.h>

void funcString(char str1[100], char str2[100]){
    char *pont;
    int i=0;

    pont = strstr(str1,str2);

    if(pont != NULL){
        printf("\nA segunda string esta contida na primeira\n\n");
            while(i<strlen(str2)){
                printf("%c", *(pont+i));
            i++;
            }
    }
    else{
        printf("\nA segunda string NAO esta contida na primeira\n");
    }
}

int main(){

    char str1[100], copia1[100], str2[100], copia2[100];
    int i,j=0;

    printf("Insira a primeira string: ");
    scanf("%100[^\n]", str1);
    printf("Insira a segunda string: ");
    fseek(stdin,0,SEEK_END);
    scanf("%100[^\n]", str2);

    funcString(str1, str2);

return 0;
}

