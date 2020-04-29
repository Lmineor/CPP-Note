#include <iostream>
#include <cctype>
#include <string>


int main()
{
    using namespace std;
    int count_vowels = 0;
    int count_consonants = 0;
    int others = 0;
    string word;
    cout << "Enter words(q to quit): \n";
    while (cin >> word && word != "q")
    {
        if (isalpha(word[0]))
        {
            if(tolower(word[0]) == 'a' || tolower(word[0]) == 'e' || tolower(word[0]) == 'i' || tolower(word[0]) == 'o' || tolower(word[0]) == 'u') count_vowels++;
            else count_consonants++;
        }
        else others++;
    }
    cout << count_vowels << " words begin with vowels\n";
    cout << count_consonants << " words begin with consonants\n";
    cout << others <<" others";
    return 0;
}


//未完成