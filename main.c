#include <stdio.h>
#include <stdlib.h>
#include "concat_str.h"

// This helper function returns 0 if the two files are the same, and non-0 if otherwise
// You can use this function to build your tests
int diff(char *fname1, char *fname2) {
  char command[256];
  sprintf(command, "diff \"%s\" \"%s\"", fname1, fname2);
  return system(command);
}


int main(int argc, char **argv) {

  if(argc != 3)
    {
      return EXIT_FAILURE;
    }

  char *inputfile = argv[1];
  char *outputfile = argv[2];

  concat_str(inputfile,outputfile);
  return EXIT_SUCCESS;



}
