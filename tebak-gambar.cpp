#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;
#define hewanGol1 7

// int randKambing();
char hewanKambing[hewanGol1] = {'K', 'A', 'M', 'B', 'I', 'N', 'G'};
int indexGol1;
int temp[7];


int main(){

// randKambing();   
    for(int i = 0; i < hewanGol1; i++){
        
        indexGol1 = (rand() % 7); 
        

        printf("%d", indexGol1);
        
        }
        
return 0;

}

// cout << rand() % hewanGol1 << " ";
        // srand((unsigned)time(NULL));
// temp[i] = indexGol1;

// if ( (temp[1] = (rand() % 7)) != temp[0]){
            
        // }
            
        // temp[2] = (rand() % 7);
        // temp[3] = (rand() % 7);
        // temp[4] = (rand() % 7);
        // temp[5] = (rand() % 7);
        // temp[6] = (rand() % 7);
        // temp[7] = (rand() % 7);

        
    // }
    
    // for(int j = 0; j < 7; j++){
    //     printf("%d", temp[j]);
    // }


// int N = 100;
//     for (int i = 0; i < 5; i++)
//         cout << rand() % N << " ";
// for (int y = 0; y < hewanGol1; y++){
//     printf(" [%c] ", hewanKambing[temp[y]]);
// }





// int randOOm(){
//     srand((unsigned)time(NULL));
//     indexGol1 = (rand() % 7);
//     return indexGol1;
// }

// int randKambing(){
//     for(int i = 0; i < hewanGol1; i++){
//         temp[i] = randOOm();
//         // int indexGol = randOOm();
//         // for(int check = 0; check < (hewanGol1 - 1); check++){
//         //     if (indexGol != temp[check]){
//         //         indexGol = randOOm(); }
//             // } else if (indexGol != temp[check]){
//             //     temp[i] = indexGol;
//             // }

//         }
//     // }
// }


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