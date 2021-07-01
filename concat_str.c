#include <stdio.h>
#include <string.h>
#include "concat_str.h"


void concat_str(char *filename_in, char *filename_out) {
  // Your code here
  FILE * inputFile = fopen(filename_in, "r");
  if(inputFile == NULL)
    {
      printf("Input file failed to open\n");
      return;
    }
  FILE * outputFile = fopen(filename_out, "w");

  char lineContent[128] = {0};

  while(fgets(lineContent,128, inputFile) != NULL)
    {

      char *result = fgets(lineContent, 128, inputFile);
      if(result == NULL)
	{
	  printf("Reading input file failed\n");
	  return;
	}
      //printf("%s\n", lineContent);
      fputs(lineContent, outputFile);

    }
  
  fclose(inputFile);
  fclose(outputFile);
  return;
}
