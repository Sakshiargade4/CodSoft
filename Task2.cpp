#include<iostream>
using namespace std;

int main(){
    int a,b,choice;
    char x;
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    do{  cout<<"Which operation do you want to perform?(enter number)"<<endl;
        cout<<"1.Addition"<<"\n"<<"2.Substraction"<<"\n"<<"3.Multiplication"<<"\n"<<"4.division"<<"\n"<<"5.Exit"<<endl;
        cin>>choice;
      switch (choice){
             case 1: cout<<"Addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
                    break;
             case 2:cout<<"Substraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
                    break;
                case 3:cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
                    break;
                case 4:cout<<"Division of "<<a<<" and "<<b<<" is "<<(float)a/b<<endl;
                    break;
                case 5:cout<<"Exit"<<endl;
                     return 0;
                default:  cout<<"Invalid choice"<<endl;
                    }
              cout<<"Do you want to continue?(Y/N)"<<endl;
              cin>>x;
         }while( x == 'Y' || x == 'y');
        return 0;
}
