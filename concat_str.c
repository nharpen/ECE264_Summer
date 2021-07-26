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
  char * result;
  char output = [];
  int count = 0;



  while((result = fgets(lineContent,128, inputFile)) != NULL)
    {

      //char *result = fgets(lineContent, 128, inputFile);
      if(result == NULL)
	{
	  printf("Reading input file failed\n");
	  return;
	}
      //printf("%s\n", lineContent);
      //fputs(lineContent, outputFile);
      output[count] = lineContent;
      count++;


    }
  
  for(int i = 0; i < count; i ++)
    {
      fputs(output[i], outputFile);
    }

  fclose(inputFile);
  fclose(outputFile);
  return;
}
