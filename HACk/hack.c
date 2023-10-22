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

    double balance=initialBalance;

    double montlyRateOfReturn=annualRateOfReturn/12;

    printf("Year | Month | Balance | Interst | Contribution |\n");

    printf(".................................................\n");

    //use for loops

    for(int year = 1 ; year <= yearUntileRetirment; year++){

       for (int month= 1 ; month <= 12 ; month ++){

        //declared variable and assigning values

        double interstEarned= balance * montlyRateOfReturn ; /*multiplication of balance and motly 
                                                             return is the value of interst*/

        double contibution= montlyContribution;//montly contribution is assigned to contribution

        balance + =interstEarned + contibution; //balance is added with interst earned and contibution rate

       balance = balance * (1.0 + annualRateOfReturn) / (1.0 +  annualInflamation);

       printf("%4d | %5d  | $%.2f | $%.2f | $%.2f \n", year,month,balance,interstEarned,contibution);
       }
    }
    return 0;
}
