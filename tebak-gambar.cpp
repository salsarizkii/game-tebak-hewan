#include <cstdlib>
#include <iostream>

#define hewanGol1 7

char hewanKambing[hewanGol1] = {'K', 'A', 'M', 'B', 'I', 'N', 'G'};

int main(){

int indexGol1;
int tempGol1[hewanGol1];
indexGol1 = ((rand() % hewanGol1) + 1);

tempGol1[0] = hewanKambing[indexGol1];

indexGol1 = ((rand() % hewanGol1) + 1);
if(hewanKambing[indexGol1] != tempGol1[0]){
    tempGol1[1] = hewanKambing[indexGol1];
}

printf(" %c %c", tempGol1[0], tempGol1[1]);

}