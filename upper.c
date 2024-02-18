#include<stdio.h>
#include<string.h>
str[50][50];

int string_greater(int a, int b){
    return strcmp(str[a], str[b]);
}

char* string_toupper(int d){
    int i=0;
    while(str[d][i]!='\0'){
        if(str[d][i]>96){
            str[d][i]-=32;
        }
        i++;
    }
    return str[d];
}

int main(){
    int n,a,b,d;
    printf("enter the no' of strings for operation\n");
    scanf("%d", &n);
    printf("enter the strings:\n");
    for(int i=0; i<n;i++){
        printf("%d> ", i+1);
        scanf("%s", str[i]);
    }
    printf("enter the string no's you want to compare:\n");
    scanf("%d %d", &a, &b);
    int c=string_greater(a-1,b-1);
    if(c==0){
        printf("both are same.\n");
    }
    else if(c>0){
        printf("%s is greater than %s\n", str[a-1], str[b-1]);
    }
    else{
        printf("%s is greater than %s\n", str[b-1], str[a-1]);
    }
    printf("enter the string no' for converting it to only uppercase:\n");
    scanf("%d",&d);
    printf("it is now:%s\n", string_toupper(d-1));
    return 0;
}