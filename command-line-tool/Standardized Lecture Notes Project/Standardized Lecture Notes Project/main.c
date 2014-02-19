//
//  main.c
//  Standardized Lecture Notes Project
//
//  Created by Weston Catron on 2/18/14.
//  Copyright (c) 2014 Catron Development. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *args[])
{
    char *file_contents;
    long input_file_size;
    char linebreak[2] = "\n";
    char *line;
    
    /*char str[100];
    printf("Enter any string ( upto 100 character ) \n");
    scanf("%s", str); */
    
    printf("Loading file: %s \n",args[1]);
    
    FILE * ft= fopen(args[1], "rb") ;
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
    printf("\n");
    return 0;
}