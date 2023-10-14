#include<iostream>
#include<ctime>

using namespace std;

class Game
{
    public:

    int randomNo;

    Game()
    {
        srand(static_cast <unsigned int> (time(nullptr)));
        randomNo=(rand()%100);
    }

};
int main()
{
    int guessedNo;
    Game g;
    cout<<"!!!!!WELCOME TO NUMBER GUESSING GAME!!!!!"<<endl;

    while(guessedNo)
    {
        cout<<"ENTER THE NUMBER"<<endl;
        cin>>guessedNo;

        if(guessedNo<0 || guessedNo>100)
        {
            cout<<"Number Enter By You Is Out Of Bound. \n Guess Between 1 To 100"<<endl;
        }
        else if(guessedNo>g.randomNo)
        {
            cout<<"Number Guessed By You Is Bigger. Please Guess a Smaller Number."<<endl;
        }
        else if(guessedNo<g.randomNo)
        {
            cout<<"Number Guessed By You Is Smaller. Please Guess a Bigger Number."<<endl;
        }
        else
        {
            cout<<"You Guessed the Write Number."<<endl;
            return 0;
        }
    }
    return 0;
}