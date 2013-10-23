#include <stdio.h>


int main (int argc, char *argv[])
{
 //create 39 entry character arrays
  char cArray1[39];
  char cArray2[39];
  char cArray3[39];
//prompt user for two non-negative integers
  printf("enter first non-negative integer");
  scanf("%s", cArray1);
  printf("\nenter second non-negative integer");
  scanf("%s", cArray2);

//printf("%s", cArray1);
//printf("%s", cArray2);
  //add cArray 1 and cArray 2 to get cArray 3

  //make some ints
  int dig1, dig2, sum, dig3, carry=0;
  int i;
  char thirdPlace;
//reverse order
  for ( i =0 ; i < 39; i++) {
    thirdPlace=cArray1[i];
    cArray1[i]=cArray1[39-i];
    cArray1[39-i]=thirdPlace;
  } //end reverse order
  for ( i =0 ; i < 39; i++) {
    thirdPlace=cArray2[i];
    cArray2[i]=cArray2[39-i];
    cArray2[39-i]=thirdPlace;
  } //end reverse order
  for ( i =0 ; i < 39; i++) {
    thirdPlace=cArray3[i];
    cArray3[i]=cArray3[39-i];
    cArray3[39-i]=thirdPlace;
  } //end reverse order
  //end reverse order
//start for loop
  for ( i = 38; i >= 0; i--) {
  //turning a character to a digit
  dig1 = cArray1[i]-'0';
  dig2 = cArray2[i]-'0';


  //add the digits
  sum = dig1 + dig2 + carry;

  //get the tens place
  carry = sum/10;

  //get the ones place i.e. dig3
  dig3 = sum%10;

  //store the digit in cArray3
  cArray3[i]= dig3+'0';

  printf("%c", cArray3[i]);

  } //end for loop
}
