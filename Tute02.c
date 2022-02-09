/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  int distance;
  float amount = 0;

printf("Enter the distance the van has travelled: ");
scanf("%d", & distance); //get input value of the distance

if (distance > 30) //check if the distance>30 is
  amount = (float) 30 * 50 + (distance - 30) * 40.00; //calculate the amount
else
  amount = distance * 50; //calculate the amount

printf("The amount is %.2f", amount); //print the amount
  return 0;
}
