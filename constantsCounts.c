#include<stdio.h>
int consonantsCount(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' &&
           str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U'){
            count++;
        }
    }
    return count;
}
int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]",str);
    int count=consonantsCount(str);
    printf("number of consonants %d",count);
    return 0;
}