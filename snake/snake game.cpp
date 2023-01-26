#include <bits/stdc++.h>
#include<conio.h>
#include<ctime>
#include<windows.h>
using namespace std;
void Shift_Right(long long arr[], long long sizee)
{
    for(long long i=sizee-2; i>=0; i--)
        arr[i+1]=arr[i];
}
//.......تعريف مبدئي لعناصر اللعبة.......//
enum Direction{Up, Down, Right, Left};
struct border{long long Width, Length, AppleX, AppleY;};
struct snake{long long HeadX, HeadY, Tail, TailX[100], TailY[100];Direction Dir;};
struct gamer{long long Score; bool Lose;};
//.......................................//
border bord; snake testes; gamer gamer1;
void Apple_Pos()//لتحديد مكان التفاحة
{
    srand(time(NULL));//لتغيير القيمة العشوائية حتى لا تتكرر
    bord.AppleX=rand()%(bord.Width-2)+1;//لتحديد مكان عشوائي للتفاحة من حيث عرض اللعبة
    bord.AppleY=rand()%(bord.Length-2)+1;//لتحديد مكان عشوائي للتفاحة منحيث طول اللعبة
}
void Border_Shape()//لتحديد تفاصيل اطار اللعبة
{
    bord.Width=25;//لتحديد عرض الاطار
    bord.Length=50;//لتحديد طول الاطار
    Apple_Pos();
}
void Snake_Pos()//لتحديد مكان وتفاصيل أولية للثعبان
{
    testes.HeadX=bord.Width/2;//لجعلالثعبان في المنتصف
    testes.HeadY=bord.Length/2;//لجعل الثعبان في المنتصف
    testes.Tail=0;//طول الثعبان الأولي يساوي الصفر
}
void play_Gamer()//تفاصيل تخص مدى تقدم اللاعب في اللعبة
{
    gamer1.Score=0;//نتيجة اللعبة الابتدائية
    gamer1.Lose=false;//متى يخسر اللاعب
}
void Draw_Game()
{
    system("cls");
    for(long long i=0; i<bord.Width; i++)
    {
     for(long long j=0; j<bord.Length; j++)
     {
         if(j==0||j==bord.Length-1)
            cout<<"|";
         else if(i==0||i==bord.Width-1)
            cout<<"_";
         else if(j==testes.HeadY && i==testes.HeadX)
            cout<<"O";
         else if(j==bord.AppleY && i==bord.AppleX)
            cout<<"*";
         else
            {
                bool hehe=0;
                for(long long k=0; k<testes.Tail; k++)
                {
                    if(testes.TailX[k]==i && testes.TailY[k]==j)
                    {
                        cout<<"o";
                        hehe=1;
                        break;
                    }
                }
                if(hehe==0)
                    cout<<" ";
            }
     }
            cout<<endl;
    }
    cout<<"YOUR SCORE IS: "<<gamer1.Score<<endl;
}
void keyboard()
{
    if(_kbhit())
    {
        char ch=_getch();
        switch(ch)
     {
        case'w':testes.Dir=Up;//للتحرك لأعلي
        break;
        case's':testes.Dir=Down;//للتحرك لأسفل
        break;
        case'a':testes.Dir=Left;//للتحرك لليسار
        break;
        case'd':testes.Dir=Right;//للتحرك لليمين
        break;
        case'x':exit(0);//لإغلاق اللعبة
     }
    }
}
void moves()
{
    Shift_Right(testes.TailX, 100);
    Shift_Right(testes.TailY, 100);
    testes.TailX[0]=testes.HeadX;
    testes.TailY[0]=testes.HeadY;
    switch(testes.Dir)
    {
        case Up: testes.HeadX--;
        break;
        case Down: testes.HeadX++;
        break;
        case Right: testes.HeadY++;
        break;
        case Left: testes.HeadY--;
        break;
    }
    if(testes.HeadY>=bord.Length || testes.HeadY<=0 || testes.HeadX>=bord.Width || testes.HeadX<=0)
        gamer1.Lose=true;
    if(testes.HeadX==bord.AppleX && testes.HeadY==bord.AppleY)
    {
        Apple_Pos();
        gamer1.Score++;
        testes.Tail++;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Apple_Pos();
    Border_Shape();
    Snake_Pos();
    play_Gamer();
    while(gamer1.Lose==0)
    {
    Draw_Game();
    keyboard();
    moves();
    Sleep(70);//للتحكم في سرعة اللعبة وتبطيئها
    }
    system("pause");
    return 0;
 
}
