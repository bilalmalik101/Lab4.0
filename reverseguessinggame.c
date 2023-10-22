#include<stdio.h>
int main(){
    int highestNum, lowestNum, guess;
    char decision;
    /*Giving prompt to user*/
    printf("User give the Two number from Lowest to Highest number\n");
    printf("Give the Lowets and Highest Number:");
    scanf("%d%d",&lowestNum,&highestNum);
    printf("Pick a number between %d and %d to guess\n",lowestNum,highestNum);
    