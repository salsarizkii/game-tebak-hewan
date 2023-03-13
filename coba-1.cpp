#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string data[] = {
        "K", "A", "M", "B", "I", "N", "G"
    };

    for (int a = 0; a < 7; a++) {
        printf("%s\n", data->at(a));
    }

    return 0;
}