#include <cstdio>
#include <iostream>
#include "DNA.h"
#include "cStrTools.h"

#define MAX_LENGTH 10001

using namespace std;
namespace sdds
{
    FILE *filePointer;
    char copyFileName[100]= {0};

     bool beginSearch(const char *filename)
     {
         bool keepGoing= true;

        filePointer = fopen(filename, "r");


        // Check if this filePointer is null
        if ( filePointer == NULL )
        {
             keepGoing = false;
        }   

        //fclose(fileOpened);
        
        //copy filename passed to file scope copyFilename so it is accessible outside this function

        strCpy(copyFileName, filename);

             return keepGoing; 
     }

        bool read(const char* subDNA) // include int max in prototype?
        {   
           DNA *dnaDynArray = nullptr;
           int numMatches = 0;
           bool matchfound =false; 
           char oneChar = ' ';
           char copiedSubDNA[MAX_LENGTH]= {'0'};
           int countMatches= 0; 


            filePointer = fopen(copyFileName, "r");

          //copy subDNA to copiedSubDna

          strCpy(copiedSubDNA, subDNA);

	    while(fgets(copiedSubDNA, MAX_LENGTH, filePointer) != NULL) {
		if((strStr(copiedSubDNA,), str)) != NULL) {
			countMatches++;
		}
		line_num++;
	}


       // if "find" is found in "str" it will return the addres of the match
        // if not found it will returns nullptr (zero)
        const char* strStr(const char* str, const char* find) 



        

        // close the file
         fclose(filePointer);




           
           






        



}