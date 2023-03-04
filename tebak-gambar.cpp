#include <cstdlib>
#include <iostream>
#include <time.h>

#define hewanGol1 7

int randKambing(int totalAlphabet);
char hewanKambing[hewanGol1] = {'K', 'A', 'M', 'B', 'I', 'N', 'G'};
int indexGol1;
int temp[7];


int main(){

randKambing(hewanGol1);    

for (int y = 0; y < hewanGol1; y++){
    printf(" [%c] ", hewanKambing[temp[y]]);
}

return 0;
}

int randKambing(int totalAlphabet){
    for(int i = 0; i < hewanGol1; i++){
        srand(time(0));
        indexGol1 = (rand() % 7);
        // temp[i] = indexGol1;
        for(int check = 0; check < hewanGol1; check++){
            if (indexGol1 == temp[check]){
                randKambing(hewanGol1);
            } else if (indexGol1 != temp[check]){
                temp[i] = indexGol1;
            }

        }
    }
}


/*          trial error             */

    // for(;;){
    //     if(indexGol1 = temp[0] || temp[i - 1]){
    //     indexGol1 = (rand() % hewanGol1);
    //     temp[i] =  indexGol1;
    // }
    // }
    
    
    // for(int x = 0; x < 10 ;x++){
    //     indexGol1 = (rand() % hewanGol1);
    //     for(int j = 0; j < hewanGol1; j++){
    //         if(indexGol1 != temp[j]){
    //             temp[i] = indexGol1;
    //     } 
    // }
    // }

    // for(int j = 0; j < 6; j++){
    //     if((rand() % hewanGol1) != temp[j]){

    //     }
    

// indexGol1 = ((rand() % hewanGol1) + 1);
// if(hewanKambing[indexGol1] != temp[0]){
//     temp[1] = hewanKambing[indexGol1];
// }