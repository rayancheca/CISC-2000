/*
              Name: Rayan Checa
        Assignment: midtermC
	      Due Date: 03/03/2023	       
              File: midtermC.cpp
*/

#include <string>
#include <iostream>

using namespace std;

//function which takes in a string and counts the number
//of vowels that are contained within it. (uppercase and lowercase vowels are counted)
int countVowels(string word);

int main()
{
    string phrase;
    cout << "Enter a phrase: ";
    getline(cin, phrase);

    cout << "Number of vowels: " << countVowels(phrase) << endl;
    return 0;
}

int countVowels(string word)
{
    int count = 0;
    for (char ch : word) {
        switch (tolower(ch)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count++;
                break;
            default:
                break;
        }
    }
    return count;
}
