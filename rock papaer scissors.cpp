#include <iostream>
#include<string.h>
#include<cstdlib>
#include<time.h>
using namespace std;
char ROCK = 'r';
char PAPER = 'p';
char SCISSORS = 's';
 
char random() {
    srand(time(0));
    int num = rand() % 3 + 1;
 
    if(num==1) return 'r';
    if(num==2) return 'p';
    if(num==3) return 's';
}
 
char choose() {
    char value;
    cout << "Rock, Paper and Scissors" << endl;
    cout << "Choose one of the following options"  << endl;
    cout << "type r for Rock " << endl << "Type p for Paper" << endl << "Type s for Scissors" << endl;
    cin >> value;
    
   while (value!='r' && value!='p' && value!='s' )
    {
        cout << "You entered invalid value " << endl;
    }
 
    return value;
}
 
void display(char option) {
    if (option == 'r') cout << "Rock" << endl;
    if (option == 'p') cout << "Paper" << endl;
    if (option == 's') cout << "Scissors" << endl;
}
 
void winner(char user, char computer) {
    if (user == ROCK && computer == PAPER) {
        cout << "Computer Wins!"<< endl;
    }
    else if (user == PAPER && computer == SCISSORS) {
        cout << "Computer Wins!"<< endl;
        
    }
    else if (user== SCISSORS && computer == ROCK) {
        cout << "Computer Wins!"<< endl;
        
    }
    else if (user== ROCK && computer== SCISSORS) {
        cout << "You Win! "<< endl;
        
    }
    else if (user== PAPER &&computer== ROCK) {
        cout << "You Win!"<< endl;
        
    }
    else if (user== SCISSORS &&computer== PAPER) {
        cout << "You Win!"<< endl;
    }
    else{
        cout << "It's a tie. " << endl;
    }
}
 
int main() {
\
    char user; 
    char computer;
    
    user=choose();
    cout << "You chose: "<< endl;
    display(user);
    
    cout << "Computer chose"<< endl;
    computer= random();
    display(computer);
    
    winner(user, computer);
 
    return 0;
}
