#include <bits/stdc++.h>
using namespace std;

bool isvalid(vector<vector<char>>& board,int row,int col,char c)
{
    for(int i = 0 ; i<9 ; i++)
    {
        if(board[i][col]==c)                            // checking for every row of the empty row's coloumn
            return false;
        if(board[row][i]==c)                       // checking for every coloumn of the empty column's row
            return false;
        if(board[3*(row/3) + (i/3)][3*(col/3)+(i%3)]==c)         // this check is for the 3x3 block in which the character is missing
            return false;
    }
    return true;                                    // if every case comes out to be true we return true
}



bool solve(vector<vector<char>>& board)
{
    for(int i=0; i<9; i++)                         // traversing for the row (simple matrix traversal)
    {
        for(int j=0; j<9; j++)                    // traversing for the coloumn
        {
            if(board[i][j]=='.')                     // if the place is empty then we will proceed
            {
                for(char c = '1' ; c<='9' ; c++)       // now checking which character can be placed for which we will make a bool function
                {
                    if(isvalid(board,i,j,c))             // this function tells us the character can be placed or not
                    {
                        board[i][j]=c;                       // if the above if comes out to be true we will fill the character

                        if(solve(board)==true)           // now we will again check for the same row or coloumn if there is empty space
                            return true;                // if still it comes out to be true we will return true for that particular row or coloumn
                        else
                            board[i][j]='.';               // if its not true we again make the space empty and do the same process
                    }
                }
                return false;
            }
        }
    }
    return true;                                      // if every row and coloumn got filled we will pass true
}

int main()
{
    vector<vector<char>>board(9,vector<char>(9));
    for(int i = 0 ; i<9 ; i++)
    {
        for(int j=0 ; j<9; j++)
        {
            cin>>board[i][j];
        }
    }
    if (solve(board))
    {
        for(int i = 0 ; i<9 ; i++)
        {
            for(int j = 0 ; j<9 ; j++)
            {
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
        cout<<"wrong input^^ try again";
}
