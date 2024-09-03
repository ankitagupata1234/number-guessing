
//program for random number guessing.

#include<iostream>
#include<cstdlib>
//for generate random number
using namespace std;
int main()
{
string name;
char input;
int inputuser;
cout<<"Enter your name    ";
getline(cin,name);
cout<<endl;
do {
srand(0);
int variable=rand()%10 ;
cout<<"Enter any number in between range 0 to 10      ";
cin>>inputuser;
cout<<endl;
if(inputuser==variable)
{
    cout<<"Congratulation ! You guessed the correct number"<<endl;
}
else
{
    cout<<"Sorry ,you guessed wrong number,plz try again"<<endl;
}
cout<<"Would you like to try again Y/N       ";
cin>>input;
cout<<endl;

}
while(input!='N');
cout<<"Game end"<<endl;
    return 0;
} 