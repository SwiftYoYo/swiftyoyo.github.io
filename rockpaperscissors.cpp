#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    srand (time(NULL));
    /* no lol

    ty tho */
    int computer = rand() % 3 + 1;
    int user = 0;
    cout << "====================\n";
    cout << "rock paper scissors :D!\n";
    cout << "====================\n";

    cout << "1 = ✊\n";
    cout << "2 = ✋\n";
    cout << "3 = ✌️\n";

    cout << "shoot! ";
    cin >> user;
    cout << "\n";

    if (user == computer) {
        cout << "It's a tie!" << "\n";
    }
    else {
        switch(user) {
            case 1:
            switch(computer) {
                case 2:
                cout << "pfft paper covers rock you lose\n";
                goto done;
                case 3:
                cout << "BOOM! You sure showed those scissors. bit of a waste\n";
                goto done;
            }
            case 2:
            switch(computer) {
                case 1:
                cout << "TAKE THE FUDCKING DUB YOU WON!!!\n";
                goto done;
                case 3:
                cout << "Computer went scissors take the L\n";
                goto done;
            }
            case 3:
            switch(computer) {
                case 1:
                cout << "rock smashed your stupid scissors in two\n";
                goto done;
                case 2:
                cout << "WOOHOO YOU CUT THAT GODDAMN PAPER!\n";
                goto done;
            }
            
        }
        done: ;
    }
  
}