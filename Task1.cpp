#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    int usernum;
    int randomnum;
    srand(time(0));
    randomnum = rand()%100+1;

    do{
        cout<<"Guess any random number"<<endl;
        cin>>usernum;

        if(usernum == randomnum){
            cout<<"Congrats!!You guessed the correct number"<<endl;
        }
        else if(usernum > randomnum){
            cout<<"Your guess is too high"<<"\n"<<"Try again!!"<<endl;
        }
        else {
            cout<<"Your guess is too low"<<"\n"<<"Try again!!"<<endl;
        }
    }while(usernum != randomnum);
    return 0;
}