#include<stdio.h>
// --------------------------------------------------------------------------------
// AUTHOR: Joshua Wade West
// FILENAME: HW4.cpp
// SPECIFICATION: Calculates return change using a function
// FOR: CS 1412 Lab- Section 502

void disp_change(float amount,int* dollars,int* quarters,int* dimes,int* nickels,int* pennies);//declares The disp_change function


int main()
{
float Amount_Due, Amount_Paid; //decleration of the Amount_Due and Amount_Paid variables
int dollars,quarters,dimes,nickels,pennies;// decleration of all the change variables
printf("\nWhat Is The Amount Due? : $ ");//input for the amount due
scanf("%f",&Amount_Due);
printf("\nWhat Is The Amount Paid? : $ ");//input to the amount paid
scanf("%f",&Amount_Paid);

while(Amount_Paid < Amount_Due)//while loop for if amount paid is less than the amount due
{
printf("\nInvalid ($ %.2f Is Less Than $ %.2f)",Amount_Paid,Amount_Due);
printf("\n\nInput A Different Amount paid: $ ");
scanf("%f",&Amount_Paid);
}

disp_change(Amount_Paid-Amount_Due,&dollars,&quarters,&dimes,&nickels,&pennies);//function call for change

printf("\nYour change is: ");

printf("\n %2d dollars\n %2d quarters\n %2d dimes\n %2d nickels\n %2d pennies",dollars,quarters,dimes,nickels,pennies);//output for the # of dollars/quarters/dimes/nickels/and pennies

return 0;
}



void disp_change(float amount,int* dollars,int* quarters,int* dimes,int* nickels,int* pennies)//the disp_change Function
{
int left_amount;// decleration of the amount of change yet to be given back 

*dollars = amount;//amount comes from function call where Amount_Paid-Amount_Due
//dollar is an int, amount is a float
left_amount =(amount-*dollars)*100;// the decimal leftover is multiplied by 100

*quarters = left_amount/25;//calculate # of quarters

left_amount = left_amount - 25*(*quarters);//find new leftovers

*dimes = left_amount/10;//calcualte # of dimes

left_amount = left_amount - 10*(*dimes);//find new leftovers

*nickels = left_amount/5;//calculate # of nickels

*pennies = left_amount - 5*(*nickels);//calcualte # of pennies
}