/******************************************************************************
 * File:         display.c
 * Version:      1.3
 * Date:         2017-02-13
 * Author:       M. van der Sluys, J.H.L. Onokiewicz, R.B.A. Elsinghorst, J.G. Rouland
 * Description:  OPS excercise 2: syntax check
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "displayFunctions.h"

int main(int argc, char *argv[]) {
  unsigned long int argcl;
  char printMethod, printChar;
  ErrCode err;
  
  err = SyntaxCheck(argc, argv);  // Check the command-line parameters
  if(err != NO_ERR) {
    DisplayError(err);        // Print an error message
  } else {
    printMethod = argv[1][0];
    argcl = strtoul(argv[2], NULL, 10);  // String to unsigned long
    printChar = argv[3][0];
    
    PrintCharacters(printMethod, argcl, printChar);  // Print character printChar argcl times using method printMethod
  }
  
  printf("\n");  // Newline at end
  return 0;
}
