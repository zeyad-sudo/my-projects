#include <bits/stdc++.h>
#define ld long double
using namespace std ;
int main()
{
    int t = 9, x, y  ;
    char z, ch, ch2 ;
    bool hehe = 0 ;
    char arr[3][3];
     memset(arr, '.',sizeof(arr));
    cout<<"Please Enter your choice as a player 1 : ";
    cin>>ch;
    while (ch!='X'&&ch!='O')
    {
        cout<<"ERROR \n Please Enter X or O only "<<endl;
        cin>>ch;
    }
    if (ch=='X') ch2='O';
    else if (ch=='O') ch2='X';
    while (t>0)
    {
 
        if (t%2!=0) cout<<"player 1 turn :"<<endl;
        else cout<<"player 2 turn :"<<endl;
 
        cout<<"insert number of row and column you need "<<endl;
        cin>>x>>y;
        while (x<1||x>3){
            cout<<"ERROR OUT OF BOUNDRIES \n Please Enter row between 1 and 3 : ";
            cin>>x;
 
        }
        while (y<1||y>3){
            cout<<"ERROR OUT OF BOUNDRIES \n Please Enter col between 1 and 3 : ";
            cin>>y;
 
        }
        x--, y--;
        //because the array is zero base
 
 
        if (t%2==1)
        {
            arr[x][y]=ch;
        }
        else
        {
            arr[x][y]=ch2;
        }
 
 
 
        //for col
        if (arr[0][y]==ch&&arr[1][y]==ch&&arr[2][y]==ch)
        {
            cout<<"player 1 is win"<<endl;
            hehe =1;
        }
        else if (arr[0][y]==ch2&&arr[1][y]==ch2&&arr[2][y]==ch2)
        {
            cout<<"player 2 is win"<<endl;
            hehe=1;
        }
 
        //for  row
        if (arr[x][0]==ch&&arr[x][1]==ch&&arr[x][2]==ch)
        {
            cout<<"player 1 is win"<<endl;
            hehe =1;
        }
        else if (arr[x][0]==ch2&&arr[x][1]==ch2&&arr[x][2]==ch2)
        {
            cout<<"player 2 is win"<<endl;
            hehe=1;
        }
 
        // for  main diagonal
        if (arr[0][0]==ch&&arr[1][1]==ch&&arr[2][2]==ch)
        {
            cout<<"player 1 is win"<<endl;
            hehe =1;
        }
        else if (arr[0][0]==ch2&&arr[1][1]==ch2&&arr[2][2]==ch2)
        {
            cout<<"player 2 is win"<<endl;
            hehe=1;
        }
 
        // for sec diagonals
        if (arr[0][2]==ch&&arr[1][1]==ch&&arr[2][0]==ch)
        {
            cout<<"player 1 is win"<<endl;
            hehe =1;
        }
        else if (arr[0][2]==ch2&&arr[1][1]==ch2&&arr[2][0]==ch2)
        {
            cout<<"player 2 is win"<<endl;
            hehe=1;
        }
 
 
 
        //display
        if (hehe==1 )
        {
            for (int i = 0 ; i<3 ; i++)
            {
                for (int j= 0 ; j<3 ; j++)
                {
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
            return 0 ;
        }
        if ( t==1 /*for draw */)
        {
            for (int i = 0 ; i<3 ; i++)
            {
                for (int j= 0 ; j<3 ; j++)
                {
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
 
        }
        t--;
    }
}
