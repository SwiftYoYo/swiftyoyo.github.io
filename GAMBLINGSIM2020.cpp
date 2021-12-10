#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>

using namespace std;


int Prompt(int money);
void Welcome();
int Casino(int money, int randy);

int main() {

    // random number 1-100
    srand(time(NULL));
    int randy;
    randy = (rand()%100)+1;
    

    string name;
    int money = 500;
    int casino_bet;
    int casino_choice;
    int casino_result;
    int choice;

    Welcome();
    
    while (money < 5000)
    {
    if (money <= 0) {
        cout << "Welp, you're broke. Sorry about that. Try again another day when luck is on your side.\n";
        exit(EXIT_FAILURE);
    }
    int choice = Prompt(money);
    string c1 = "gamble at the casino";
    string c2 = "go to an illegal poker match (haha kidding i haven't coded that)";
    string c3 = "gamble with your life (end game)";
    string cc;

    if (choice == 1) {
        cc = c1;
    } else if (choice == 2)
    {
        cc = c2;
    } else if (choice == 3) {
        cc = c3;
    } else {
        cout << "The choice " << choice << " is invalid.\nExiting lol...\n";
        exit(EXIT_FAILURE);
    }
    

    cout << "You have chosen to " << cc << ".\n \n";
    if (choice == 1) {
        money = Casino(money, randy);
    } else if (choice == 2) {
        cout << "Well, clearly you can't read. Try again.\n";
    } else if (choice == 3) {
        cout << "Exiting calmly! Try again later.\n";
        exit(EXIT_FAILURE);
    } else {
        cout << "EXITING NOT CALMLY WHAT HAPPENED?!?!?!\n";
        exit(EXIT_FAILURE);
    }
    }
    cout << "You have a net worth of bloody $" << money << ". Must feel good to be a winner! What do you mean this game wasn't the funnest thing you've ever played? Fuck you then. Exiting this shit.\n";
    exit(EXIT_FAILURE);
}

int Prompt(int money) {
    cout << "===============\n" << "You have $" << money << ". What would you like to do?\n" << "1) Gamble at the casino\n" << "2) Go to an illegal poker match\n" << "3) Gamble with your life...\n" << "===============\n" << "Choice: ";
    int choice;
    cin >> choice;
    return choice;
}

void Welcome() {
    string name;
    cout << "Welcome to Gambling Simulator 2022! (shitty. ed)\nToday we will be gambling with the goal of reaching $5 000.\nTo begin, please tell me your name: ";
    cin >> name;
    cout << "Welcome " << name << " to Las Vegans.\n" << "\n" << "\n";
}

int Casino(int money, int randy) {
    srand(time(NULL));
    randy = (rand()%100)+1;
    int casino_bet;
    int casino_choice;
    int casino_result;
    cout << "Welcome to the casino! We only have a really shitty game cause I can't code. You can either bet on red or black and if your colour is picked, you will win either 2x (for red and black) or 50x (for green). How much would you like to bet?\n";
    rebet: ;
    cout << "You have $" << money << ".\nYour bet: ";
    cin >> casino_bet;
    if (casino_bet > money) {
        cout << "You don't have that much.";
        goto rebet;
    } else if (casino_bet <= money)
    {
        money -= casino_bet;
        cout << "Alright, let's use some money! $" << casino_bet << " to be exact!\nWill you bet on red (1) or black (2)? ";
        cin >> casino_choice;
        if (randy%2 == 0) {
            casino_result = 1;
        } else if (randy%2 == 1) {
            casino_result = 2;
        } else {
            cout << "Error again lol";
            exit(EXIT_FAILURE);
        }
        if (casino_choice == casino_result) {
            cout << "\nWOOHOO! It landed like you guessed and you made a hefty $" << casino_bet << "\n";
            money += (casino_bet*2);
            cout << "You now have $" << money << ".\n";
        } else if (casino_choice != casino_result) {
            cout << "\nDamn, you just lost $" << casino_bet << ". Must suck to be you! Now you only have $" << money << ".\n";
        } else {
        cout << "ERRORRRRRR L\n";
        exit(EXIT_FAILURE);
        }
    } else {
        cout << "ERRORRRRRR L\n";
        exit(EXIT_FAILURE);
    }
    return money;
}