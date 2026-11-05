//NUMBER GUESING GAME
#include<iostream>
#include<ctime>
using namespace std;

int main(){
    int num;
    int guess;
    int tries=0;
    srand(time(NULL));
    num=(rand() % 100) + 1;

    do{
        cout<<"Enter a guess between(0 to 100)";
        cin>>guess;
        tries++;

        if(guess>num){
            cout<<"Too high"<<endl;
        }
        else if(guess<num){
            cout<<"Too low"<<endl;
        }
        else{
            cout<<"Correct! # of tries: "<<tries<<endl;
        }
    }while(guess!=num);
    return 0;
}

