/***
 * Hack four for loop
 * starting date 22/10/2023
 * Naame : Abdullah
 * Section:2D
*/

//add header file to link program 
#include<stdio.h>

#include<stdlib.h>

int main(){

    //declaring variable

    double initialBalance,montlyContribution,annualRateOfReturn,annualInflamation;

    int yearUntileRetirment;

    //printf out put on console

    printf("Please Enter Initial Balance =>");

    scanf("%lf", & initialBalance); //to read value form user

    printf("Please Enter Montly Contribution =>");

    scanf("%lf", & montlyContribution); //user enter his montly contribution

    printf("Please Enter Annual Rate of Return<= As Decimal i.e 1.2 or 21.2=>");

    scanf("%lf", & annualRateOfReturn);//user enter annual Rate of return 

    printf("Please Enter Annual Inflamation <= as a Decimal i.e 0.8 or 8.9=>");

    scanf("%lf", & annualInflamation);//user enter his annual inflamation rate

    printf("Please Enter Year of Retirment =>");

    scanf("%i", & yearUntileRetirment);
}