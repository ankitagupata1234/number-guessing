//this is the Tic-Tac-Toe Game.
#include<iostream>
#include<conio.h>
using namespace std;
void system();
char ch[10]={'0','1','2','3','4','5','6','7','8','9'};
class Tic_Tac_toe{
    public:
    void input();
    int condition();

};
void Tic_Tac_Toe::input(){
    system("cls");
    cout<<"*** Tic - Tac - Toe ***";
    cout<<endl<<endl;
    cout<<"   |   |    \n";
    cout<<" "<<ch[1]<<"|"<<ch[2]<< "|"<<ch[3]<<"\n";
    cout<<"___|___|___  \n";
    cout<<"   |   |     \n";
    cout<<" "<<ch[4]<<"|"<<ch[5]<< "|"<<ch[6]<<"\n";
    cout<<"___|___|___  \n";
    cout<<"   |   |     \n";
    cout<<" "<<ch[7]<<"|"<<ch[8]<< "|"<<ch[9]<<"\n";
    cout<<"   |   |     \n";
} 
int Tic_Tac_Toe::condition(){
if(ch[1]==ch[4] && ch[4]==ch[7])
{
    return 1;
}
if(ch[2]==ch[5] && ch[5]==ch[8])
{
    return 1;
}
if(ch[3]==ch[6] && ch[6]==ch[9])
{
    return 1;
}
if(ch[1]==ch[2] && ch[2]==ch[3])
{
    return 1;
}
if(ch[3]==ch[5] && ch[5]==ch[9])
{
    return 1;
}
if(ch[1]==ch[5] && ch[5]==ch[9])
{
    return 1;
}
if(ch[4]==ch[5] && ch[5]==ch[6])
{
    return 1;
}
if(ch[7]==ch[8] && ch[8]==ch[9])
{
    return 1;
}
int i,count=0;
for(i=1;i<=9;i++)
{
    if(ch[i]=='X' ||ch[i]=='0');
    {
        count++;
    }
}
if(count==9)
{
    return 0;
}
return -1;

}
 
 int main
 {
    Tic_Tac_Toe x;
    int player=1,input,status=-1;
    int player,quit;
    cout<<"Enter how many times you want to play : \n";
    cin>>play;
    for(int i=0;i<=play;i++)
    {
        while(status==-1){
            x.input();
            player=(player%2==0)? 2:1;
            char mark=(player==1)?'X':'0';
            cout<<"enetr any number less than 0 and bigger than 9 to";
            cout<<"Enter the number to mark the player "<<player<<endl;
            cin>>input;
            if(input<1||input >9)
            {
                status=0;

            }
            ch[input]=mark;
            int result=x.condition();
            x.input();
            if(result==1)
            {
                cout<<"player"<<"is the Winner\n";
                status=0;
            }
else if(result==2)
{
    cout<<"Finish\n";
} 
++player;



        }
    }
    return 0;
 
 }







