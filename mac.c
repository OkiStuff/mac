#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>


// Made by Okistuff, (c) 2020 Okistuff MIT License
// The cs50.h header file was made by the cs50 Team

// Standard Input Output.h and stdlib.h were made by the people behind C

// syntax, ./mac

int main(void)
{

    string filename = get_string("Enter the .c file name (Don't use spaces and don't include .c/.h)\n|"); // <cs50.h>
    printf("MAC [INFO] Compiling %s.c ...", filename);      
    system("make %s", filename);
    printf("Finished Compiling %s.c", filename);
    
    // Running the code
    system("./%s", filename)

}

