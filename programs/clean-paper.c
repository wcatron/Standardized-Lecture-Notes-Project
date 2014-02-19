#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
     char str[100];
     char *file_contents;
     long input_file_size;
     char linebreak[2] = "\n";
     char *line;

     /* Our first simple C basic program */
     //printf("Hello World! ");
     //getchar();
     printf("Enter any string ( upto 100 character ) \n");
     scanf("%s", &str);
     
     printf("Loading file: %s",str);
     
     FILE * ft= fopen(str, "rb") ;
     if (ft) {
          fseek(ft, 0, SEEK_END);
	  input_file_size = ftell(ft);
	  rewind(ft);
	  file_contents = malloc(input_file_size * (sizeof(char)));
	  fread(file_contents, sizeof(char), input_file_size, ft);
	  fclose(ft);
	  printf("Loaded File\n\n");
	  
	  /* get the first token */
          line = strtok(file_contents, linebreak);
   
   	  /* walk through other tokens */
   	  while(line != NULL ) {
	       if (strncmp(&line[0],"#",1)) {
                    printf("%s ", line);
	       } else {
		    printf("\n");
	       }
    
               line = strtok(NULL, linebreak);
          }
     } else {
          printf("Could not load file.");
     }
     return 0;
}
