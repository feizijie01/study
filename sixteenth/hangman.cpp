// hangman.cpp -- some string methods
#include<iostream>
#include<ctime>
#include<string>
#include<cctype>
const int NUM = 26;
int main()
{
    using namespace std;
    srand(time(0));
const string wordlist[NUM]={"apiary","beetle","cereal",
"danger","ensign","florid","garage","health","insult",
"jackal","keeper","loaner","manage","nonce","onset",
"plaid","quilt","remote","stolid","trian","useful",
"valid","whence","xenon","yearn","zippy"};



char play;
cout << "Would u like to play a game?<Y/N>\n";
cin >> play;
play = tolower(play);
while(play=='y')
{
    string target=wordlist[rand() % NUM];
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
cout << "Done.\n";
cin.get();
cin.get();
return 0;
}