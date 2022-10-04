#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int player_score = 0, computer_score = 0, player_choice, computer_choice;
    cout<<"........................WELCOME TO THE GAME........................."<<endl;
    cout<<endl;
    cout<<"                           _Game Rules_                                 "<<endl;
    cout<<endl;
    cout<<"                    >Rock Crushes The Scissor"<<endl;
    cout<<"                    >Scissor Cut The Paper"<<endl;
    cout<<"                    >Paper cover Rock"<<endl;
    
    do
    {
        srand(time(0));
        cout << "\nChosse Any One : \n1.Rock\n2.Paper\n3.Scissor\n[PRESS 0 to EXIT AND TO CHECK OVERALL SCORE]\nEnter your choice : ";
        cin >> player_choice;

        computer_choice = (rand() % 3) + 1;
        if (player_choice < 0 || player_choice > 3)
        {
            cout << "INVALID CHOICE, Please Try Again!!!\n";
            continue;
        }
        else if (player_choice == 0)
        {
            cout << "Game Over!\n";
        }
        else
        {
            if (computer_choice == player_choice)
            {
                cout << "TIE!\n";
            }
            else if (player_choice == 1 && computer_choice == 3 || player_choice == 2 && computer_choice == 1 || player_choice == 3 && computer_choice == 2)
            {
                cout << "You WINS this ROUND!\n";
                player_score++;
            }
            else
            {
                cout << "Computer WINS this ROUND!\n";
                computer_score++;
            }
            switch (player_choice)
            {
            case 1:
                cout << "Player choosed : ROCK\n";
                break;
            case 2:
                cout << "Player choosed : PAPER\n";
                break;
            case 3:
                cout << "Player choosed : SCISSOR\n";
                break;
            }
            switch (computer_choice)
            {
            case 1:
                cout << "Computer choosed : ROCK\n";
                break;
            case 2:
                cout << "Computer choosed : PAPER\n";
                break;
            case 3:
                cout << "Computer choosed : SCISSOR\n";
                break;
            }
        }
    } while (player_choice);
    cout<<"\nPlayer Score : "<<player_score;
    cout<<"\nComputer Score : "<<computer_score;
    if (player_score == computer_score)
        cout << "\n**Match Draw**\n";
    else if (player_score > computer_score)
        cout << "\n**Player WINS The Match**\n";
    else
        cout << "\n**Computer WINS The Match**\n";
    return 0;
}