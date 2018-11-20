#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void game();
bool isCorrect(int,int);

int main()
{
    srand(time(0));
    game();
}
void game()
{
    int number;
    int guess;
    char choose;
    do
    {
        number=1+rand()%1000;
        cout<<"I have a number between 1 and 1000.\n";
        cout<<"Can you guess my number?.\n";
        cout<<"Please type your first guess:.\n";
        cin>>guess;
        while(!isCorrect(guess,number))
            cin>>guess;
        cout<<"Excellent!You guessed the number!";
        cout<<"Would you like to play again(y or n)?";
        cin>>choose;
        cout<<endl;
    } while(choose=='y');
}
    bool isCorrect(int guess,int number)
    {
        if(guess==number)
            return true;
        if(guess<number)
            cout<<"Too low.Try again?";
        return false;


    }


