//ROCK PAPER SCISSOR
#include<iostream>
#include<ctime>
using namespace std;

char getUserchoice();
char getComputerchoice();
void showchoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    player= getUserchoice();
    cout<<"Your choice: ";
    showchoice(player);

    computer= getComputerchoice();
    cout<<"Computer's choice: ";
    showchoice(computer);

    chooseWinner(player, computer);



    return 0;
}
char getUserchoice(){
    char player;
    cout<<"Rock-Paper-Scissors Game"<<endl;
    do{
        cout<<"Choose on of the following"<<endl;
        cout<<"'r' for Rock"<<endl;
        cout<<"'p' for Paper"<<endl;
        cout<<"'s' for Scissor"<<endl;
        cin>>player;
    }while(player!='r'&& player!='p'&& player!='s');

    

    return player;
}
char getComputerchoice(){
    srand(time(NULL));
    int num=rand()%3+1;
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }


    return 0;
}
void showchoice(char choice){
    switch(choice){
        case 'r': cout<<"Rock"<<endl;
        break;
        case 'p': cout<<"Paper"<<endl;
        break;
        case 's': cout<<"Scissor"<<endl;
        break;
    }

}
void chooseWinner(char player, char computer){
    switch(player){
        case 'r':    if(computer=='r'){
                        cout<<"It's a tie"<<endl;
                    }
                    else if(computer=='p'){
                        cout<<"You lose"<<endl;
                    }
                    else{
                        cout<<"You won"<<endl;
                    }
                    break;
        case 'p':    if(computer=='r'){
                        cout<<"You won"<<endl;
                    }
                    else if(computer=='p'){
                        cout<<"It's a tie"<<endl;
                    }
                    else{
                        cout<<"You lose"<<endl;
                    }
                    break;
        case 's':    if(computer=='r'){
                        cout<<"You lose"<<endl;
                    }
                    else if(computer=='p'){
                        cout<<"You won"<<endl;
                    }
                    else{
                        cout<<"It's a tie"<<endl;
                    }
                    break;

        }
    }

