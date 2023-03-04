#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int i;
    const string wordList[17] = { "television",
        "computer", "keyboard", "laptop", "mouse", "phone", "headphones",
        "screen", "camera", "sound", "science", "programming", 
        "entertainment",
        "graphics", "intelligent", "memory", "remote" };

    string word = wordList[rand() % 17];

    for(i = 0; i < word.length(); i++)
    {
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
           word[i] == 'o' || word[i] == 'u')
        {
            word[i] = '_';
        }
    }

    cout << word << endl;
    int n=0;
    char x;
    do
    {
        n++;
        cin >> x;
    }
    while( x == word[i]);
        cout<<"Congratulations! You guessed the word!";
    
    

    return 0;
}