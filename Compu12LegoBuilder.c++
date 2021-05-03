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

FILE*fp=fopen("/aryan/Desktop/legopieces.txt", "r"); //open pieces file from my desktop
FILE*fp2=fopen("/aryan/Desktop/instructions.txt", "r"); //open instructions file from my desktop
static string s1, m1; //s1 will be used for instructions, m1 will be used to store values for pieces
bool stepsDone = false;
const int line = 20;

class myBrainDied2YearsAgo{
    public:
        /*void get(void){ //defining get function for pieces
        //I obviously don't have access to vision utility so I can't see what piece we actually have, so I'm just goint to rng it
            int r = rand() % 4; //select randomly from list below
            const char *sample_set[4] = { "Blue", "Red", "Orange", "Yellow" + r}; //pieces
            cout << sample_set; //print the 
        }*/
        int get() {
            int n,m;
            cin>>n>>m;
            srand(time(NULL));//  without this rand() function might continuously give the same value
    
            while(n--){
                int stringLen = (rand() % m) +1; // getting random length
                string s=""; // taking null string
                for(int i=0; i<stringLen; i++){
                    if(rand() % 2 == 0 ){ // capital or small letter
                        s += 'A' + (rand() % 26);
                    }else{
                        s += 'a' + (rand() % 26);
                    }
                }
                return s;
            }
        }
};

void main(){
    myBrainDied2YearsAgo piece;
    while(stepsDone ==false){
        //fscanf(fp, "%s", &m1);
        //fscanf(fp2, "%s", &s1);
        string currentPiece = piece.get();
        for (int steps = 1; feof==false; steps++){
            if (currentPiece == m1){
                cout <<'s1';
                istream::getline(fp2, steps);
                //go to next line
            }
            else{
                cout << 'put piece back in bag';
                };
        }
    }
} 