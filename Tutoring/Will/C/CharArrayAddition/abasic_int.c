#include <stdio.h>


int isadigit ( int x );
char* ReverseArr ( char* x, int size) ;
int main (int argc, char *argv[])
{
 //create 40 entry character arrays
  char cArray1[39];
  char cArray2[39];
  char cArray3[39];
  int i;
  for (i = 0 ; i < 39 ; i++) {
  cArray1[i]=cArray2[i]=cArray3[i]='g';
  }

//  printf("%s\n", cArray1);
//  printf("%s\n", cArray2);

//prompt user for two non-negative integers
  printf("enter first non-negative integer");
  i=39;
  do {
  i--;
  cArray1[i]=getchar();
  } while (cArray1[i] != '\n' && i > 0);

  printf("\nenter second non-negative integer");
  i=39;
  do {
  i--;
  cArray2[i]=getchar();
    } while (cArray2[i] != '\n' && i > 0);

//  printf("first array%s\n", cArray1);
//  printf("second array%s\n", cArray2);



//add cArray 1 and cArray 2 to get cArray 3

  //make some ints
  int dig1, dig2, sum, dig3, carry=0;
//start for loop
  for ( i = 38; i >= 0 ; i--) {
  //turning a character to a digit
  if ( isadigit(cArray1[i]) || isadigit(cArray2[i]) )
    {
      if(isadigit(cArray1[i])){
    dig1 = cArray1[i]-'0';
    }
    else
    {
      dig1=0;
    }
      if(isadigit(cArray2[i])){
    dig2 = cArray2[i]-'0';
    }
      else
      {
        dig2=0;
      }
    //add the digits
    sum = dig1 + dig2 + carry;

    //get the tens place
    carry = sum/10;

    //get the ones place i.e. dig3
    dig3 = sum%10;

    //store the digit in cArray3
    cArray3[i]= dig3+'0';

    }
  else {
    cArray3[i]=carry+'0';
    carry=0;

  }
  } //end for loop

  int toggle=0;
  for ( i = 0; i <39; i++) {
    if (toggle == 1) {
      printf("%c", cArray3[i]);
    }
    else if ( cArray3[i] !='0' ) {
      toggle=1;
      printf("%c", cArray3[i]);
    }
  }
printf("\n");
  return 0;
}


int isadigit ( int x ) {
  if ( x >='0' && x <='9') {
    return 1;
  }
  else{
      return 0;
  }
}

char* ReverseArr ( char* x, int size) {
  int i;
}
