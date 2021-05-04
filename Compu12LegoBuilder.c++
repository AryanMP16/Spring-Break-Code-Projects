#include <iostream> //number one fix when things don't work:
#include <string>   //add libraries until they work
#include <cstring>  //and if that doesn't work
#include <stdio.h>  //add more libraries
#include <random>   //and that's what this is
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include <limits>
#include <istream>
using namespace std; 

/*==========================================================================

ABOUT the code below: 
I tried to document it as best as I could. As for why one file is being used as a FILE*, whereas the other is being used as an
array, I have absolutely no idea why c++ makes me do it like this, but it takes away errors and it makes the code work so I'm
just going to pretend I know why that is.

==========================================================================*/

FILE*fp=fopen("/aryan/Desktop/pieces.txt", "r"); //open pieces file from folder
//FILE*fp2=fopen("/aryan/Desktop/instructions.txt", "r"); //DON'T NEED THIS ANYMORE because it's defined as an array
string arrayFile2[14][1] = {
    #include "instructions.txt"
};
static string s1, m1; //s1 will be used for instructions, m1 will be used to store values for pieces
bool stepsDone = false;
const int line = 20;

class myBrainDied2YearsAgo{
    public:
        /*void get(void){ //defining get function for pieces
        //I obviously don't have access to vision utility so I can't see what piece we actually have, so I'm just going to rng it
            int r = rand() % 4; //select randomly from list below
            const char *sample_set[4] = { "Blue", "Red", "Orange", "Yellow" + r}; //pieces
            cout << sample_set; //print the 
        }*/
        string get() {
            int n,m;
            cin>>n>>m;
            srand(time(NULL));//  without this rand() function might continuously give the same value
    
            while(n--){
                int stringLen = (rand() % m) +1; // getting random length
                string s=""; //null string
                for(int i=0; i<stringLen; i++){
                    if(rand() % 2 == 0 ){
                        s += 'A' + (rand() % 26);
                    }else{
                        s += 'a' + (rand() % 26);
                    }
                }
            return s;}
        }
        
};

void main(){
    myBrainDied2YearsAgo piece;
    while(stepsDone==false){
        fscanf(fp, "%s", &m1); //scan pieces file to find correct pieces
        //I don't know why I can't make it fscanf(arrayFile, "%s", &m1), but the programming gods get mad when I do that
        for (int steps = 1; feof==false; steps++){ //read through steps
            if (piece.get() == m1){ //if the piece gotten is the right one...
                string instructions = arrayFile2[1][steps]; //go to line numbered value of 'steps' and store its values as a string
                cout << instructions; //print the string whose values are stored above
                //go to next line
            }
            else{
                cout << 'put piece back in bag';
                };
        }
    }
} 