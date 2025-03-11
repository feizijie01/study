// hangman.cpp -- some string methods
#include<iostream>
#include<fstream>
#include<ctime>
#include<string>
#include<cctype>
#include<vector>
int main()
{
    using namespace std;
    srand(time(0));

ifstream fcin;
ofstream fcout;
vector<string>wordlist;
fcin.open("wordlist0.txt");

string words;
while(fcin >> words)
wordlist.push_back(words);
int num=wordlist.size();


char play;
cout << "Would u like to play a game?<Y/N>\n";
cin >> play;
play = tolower(play);
while(play=='y')
{
    string target=wordlist[rand() % num];
int length = target.length();
    string badchars;
    char letter;
    int guesses=6;
    string attempt(length,'-');
    while(guesses>0 && attempt != target)
    {
        cout << "Enter the letter: ";
        cin >> letter;
        if(badchars.find(letter)!=badchars.npos||attempt.find(letter)!=attempt.npos)
        {
            cout << "You have guessed that,try again.\n";
            continue;
        }

        if(target.find(letter)==target.npos)
        {
            cout << "You are wrong.\n";
            badchars += letter;
            guesses--;
        }

        else
        {
            cout << "You are right.\n";
            int loc=target.find(letter);
            attempt[loc]=letter;
            // find the repeat letter
            loc=target.find(letter,loc+1); 
            while(loc!=target.npos)
            {   
                attempt[loc]=letter;   //重复字母赋值
                loc=target.find(letter,loc+1);
            }
        }
        cout << "Attempt: " << attempt << endl;
        if(attempt!=target)
        {
        cout << "Bad guesses left " << guesses << " times.\n";
        cout << "Badchars: " << badchars << endl << endl;
        }
    }
    if(guesses>0)
    {
        cout << "You win, it is " << target << ".\n";
        cout << "Would u like to play another game?<Y/N>\n";
        cin >> play;
        play = tolower(play);
    }
    else
    {
        cout << "You lose, it is " << target << ".\n";
        cout << "Would u like to play another game?<Y/N>\n";
        cin >> play;
        play = tolower(play);
    }
}
fcin.close();
cout << "Done.\n";

cin.get();
cin.get();
return 0;
}