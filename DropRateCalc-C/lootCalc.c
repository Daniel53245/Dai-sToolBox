#include <stdio.h>
#include <stdlib.h>
int main(int argc,char** args){
    if(argc != 2){
        printf("Usage:lootCalc [probability of event]\n e.g. lootCalc 0.5");
        exit(0);
    }
    //error catching
    //event not happen 50, 20 ,10,5 
    double prob = (double)1 - atof(args[1]);
    if (prob <= 0){
        printf("Probability must not be greater than 1");
        exit(0);
    }
    
    int power = 0;
    double accum = 1;
    while (1){
        accum *= prob;
        power ++;
        if (accum <= 0.5){
            printf("Expected time for 50%% is %i\n",power);
            break;
        }        
    }

    while (1){
        accum *= prob;
        power ++;
        if (accum <= 0.2){
            printf("Expected time for 80%% is %i\n",power);
            break;
        }  
    }

    while (1){
        accum *= prob;
        power ++;
        if (accum <= 0.1){
            printf("Expected time for 90%% is %i\n",power);
            break;
        }  
    }
    while (1){
        accum *= prob;
        power ++;
        if (accum <= 0.05){
            printf("Expected time for 95.5%% is %i\n",power);
            break;
        }  
    }
}