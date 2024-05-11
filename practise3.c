#include<stdio.h>
#include<string.h>
int main(){
    char str1[50] = "Hello";
    char str2[50] = "World";
    printf("Befor cncatenation ");
    printf("str1%\n", str1);
    printf("str1%\n", str2);
    strcat(str1,str2);
    printf("After cncatenation ");
    printf("str1:%&\n",str1);
    printf("str1:%&\n",str2);
    return 0;


}