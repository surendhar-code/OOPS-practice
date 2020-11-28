//Tic Tac Toe game in c++

#include<iostream>
#include<iomanip>
using namespace std;

//Array for the board
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
//Variable declaration

int choice;
int row,col;
char turn = 'X';
bool draw=false;

//Game display board

void displayboard()
{
    cout<<"Player -  1  [X] "<<"Player  -  2  [O]"<<endl;
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[0][0]<<"  | "<<board[0][1]<<"  |  "<<board[0][2]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[1][0]<<"  | "<<board[1][1]<<"  |  "<<board[1][2]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[2][0]<<"  | "<<board[2][1]<<"  |  "<<board[2][2]<<" \n";
    cout<<"\t\t     |     |     \n";

}

void final_displayboard()
{
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[0][0]<<"  | "<<board[0][1]<<"  |  "<<board[0][2]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[1][0]<<"  | "<<board[1][1]<<"  |  "<<board[1][2]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[2][0]<<"  | "<<board[2][1]<<"  |  "<<board[2][2]<<" \n";
    cout<<"\t\t     |     |     \n";

}

// player turn and update row

void player_turn(){

if(turn=='X')
    cout<<"Player -1 [X] turn : "<<endl;
else if(turn=='O')
    cout<<"Player -2 [O] turn : "<<endl;

cin>>choice;

switch(choice)
{
        case 1: row=0; col=0; break;
        case 2: row=0; col=1; break;
        case 3: row=0; col=2; break;
        case 4: row=1; col=0; break;
        case 5: row=1; col=1; break;
        case 6: row=1; col=2; break;
        case 7: row=2; col=0; break;
        case 8: row=2; col=1; break;
        case 9: row=2; col=2; break;
        default:
            cout<<"Invalid Move";
}

if(turn=='X'&& board[row][col]!='X'&&  board[row][col]!='O')
{
    board[row][col]='X';
    turn = 'O';
}
else if(turn=='O'&& board[row][col]!='X'&&  board[row][col]!='O')
{
    board[row][col]='O';
    turn = 'X';
}
else{

  cout<<"Box already filled !!!! Please choose another box!!! "<<endl;
  player_turn();

}






}

//Function to get the game status.

bool gamestatus()
{
    //checking the win for simple rows and columns
    for(int i=0;i<3;i++)
    {
        if((board[i][0]==board[i][1] && board[i][0]==board[i][2]) || (board[0][i]==board[1][i] && board[0][i]==board[2][i]))
        {
            return false;
        }


    }

   //win for  both diagonal
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
        return false;

    //Checking the game is in continuation or not.
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            if(board[i][j] != 'X' && board[i][j] != 'O')
                return true;



    //Checking if game already draw
    draw = true;
    return false;
}

int main()
{
    cout<<"\t\t\t TICK--TAC--TOE--GAME\t\t\t"<<endl;
    cout<<"\t\t\t FOR TWO PLAYERS \t\t\t"<<endl;

    while(gamestatus())
    {
        displayboard();
        player_turn();

    }

    if(turn=='X' && draw==false)
    {
        cout<<"Congartulations!!! Player with 'O' has won the game"<<endl;
        final_displayboard();

    }

    else if(turn == 'O' && draw == false)
    {
        cout<<"Congratulations!!! Player with 'X' has won the game"<<endl;
        final_displayboard();

    }
    else
        cout<<"Game Draw!!!!!"<<endl;
        final_displayboard();

    return 0;

}
