#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

// Copyright
// Made by Okistuff, (c) 2020 Okistuff MIT License
// https://github.com/OkiStuff/mac/
// Standard Input Output.h and stdlib.h were made by the people behind C
// The cs50.h header file was made by the cs50 Team
// Copyright End

// If re-used, please include Copyright Info.

// syntax, ./mac

int main(void)
{

    string filename = get_string("Enter the .c file name (Don't use spaces and don't include .c/.h)\n|"); // <cs50.h>
    printf("MAC [INFO] Compiling %s.c ...", filename); 

    char command [256];

    sprintf( command, "make %s", filename );     
    system(command); // Compiles Filename
    printf("Finished Compiling %s.c\n", filename);
    
    // Running the code


    char run [256];
    sprintf( run, "./%s", filename);
    system(run);

    // END OF FUNCTION



}


// END OF CODE
