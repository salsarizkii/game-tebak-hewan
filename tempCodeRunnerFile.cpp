#include <cstdlib>
#include <iostream>

#define hewanGol1 7

char hewanKambing[hewanGol1] = {'K', 'A', 'M', 'B', 'I', 'N', 'G'};

int main(){

int indexGol1;
int tempGol1[hewanGol1];

for(int i = 0; i < hewanGol1; i++){
    indexGol1 = (rand() % hewanGol1);
    tempGol1[i] = indexGol1;

    
    
    // for(int x = 0; x < 10 ;x++){
    //     indexGol1 = (rand() % hewanGol1);
    //     for(int j = 0; j < hewanGol1; j++){
    //         if(indexGol1 != tempGol1[j]){
    //             tempGol1[i] = indexGol1;
    //     } 
    // }
    // }

    
    
    

    // for(int j = 0; j < 6; j++){
    //     if((rand() % hewanGol1) != tempGol1[j]){

    //     }
    }
    




// indexGol1 = ((rand() % hewanGol1) + 1);
// if(hewanKambing[indexGol1] != tempGol1[0]){
//     tempGol1[1] = hewanKambing[indexGol1];
// }
for (int y = 0; y < hewanGol1; y++){
    printf(" %c", hewanKambing[tempGol1[y]]);
}


}