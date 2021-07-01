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


int main() {

}
