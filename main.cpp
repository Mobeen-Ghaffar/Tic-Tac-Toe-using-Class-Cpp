#include<iostream>
using namespace std;
class Game
{
 private:
 char arr[3][3];
 int a,b;
 public:
  int bary;
 Game()
 {
  const char a='a';
   for(int i=0;i<3;i++)
   for(int j=0;j<3;j++)
   arr[i][j]=a;
 }
 void board()
 {
  cout<<"   "<<"0"<<"  "<<"1"<<"   "<<"2\n\n";
  for(int i=0;i<3;i++)
  {cout<<i<<"  ";
   for(int j=0;j<3;j++)
   cout<<arr[i][j]<<"   ";
   cout<<endl<<endl;
  }
 }
 int draw()
 {
  int i,j;
  for( i=0;i<3;i++)
  for( j=0;j<3;j++)
  {
   if(arr[i][j]=='a')
   break;
  }
  if(i==3&&j==3)
  return 1;
  else
  return 0;
 }
 int move()
 {
  for(int i=0;i>=0;i++)
  if(bary==0)
  {
   cout<<"Player 1 'O' move : \n ";
   cout<<"Enter Column no: ";
   cin>>b;
   cout<<"Enter Row No : ";
   cin>>a;
   if((a<-1&&a<4)||(b<-1&&b>3)||arr[a][b]!='a')
   {
    cout<<"Wrong input Enter Again \n";
    bary=0;
    continue;
   }
   else
   {
    arr[a][b]='X';
    bary=1;
    break;
   }
  }
  else if(bary==1)
  {
   if(draw()==1)
   return 0;
   if(win()=='O'&&win()=='X')
   return 0;
   cout<<"computer move : \n ";
   computerAI();
   bary=0;
   break;
  }
  return 0;
 } 
 int computerAI()
{
    if(arr[0][0] == 'O' && arr[0][1] == 'O'  && arr[0][2] == 'a')
    {
        arr[0][2] = 'O';
        bary=0;
    }
    if(arr[1][0] == 'O' && arr[1][1] == 'O' && bary==1 && arr[1][2] == 'a')
    {
        arr[1][2] = 'O';
        bary=0;
    }

    if(arr[2][0] == 'O' && arr[2][1] == 'O' && bary==1 && arr[2][2] == 'a')
    {
        arr[2][2] = 'O';
        bary=0;
    }

    if(arr[0][0] == 'O' && arr[1][0] == 'O' && bary==1 && arr[2][0] == 'a')
    {
        arr[2][0] = 'O';
        bary=0;
    }

    if(arr[0][1] == 'O' && arr[1][1] == 'O' && bary==1 && arr[2][1] == 'a')
    {
        arr[2][1] = 'O';
        bary=0;
    }

    if(arr[0][2] == 'O' && arr[1][2] == 'O' && bary==1 && arr[2][2] == 'a')
    {
        arr[2][2] = 'O';
        bary=0;
    }

    if(arr[0][0] == 'O' && arr[1][1] == 'O' && bary==1 && arr[2][2] == 'a')
    {
        arr[2][2] = 'O';
        bary=0;
    }

    if(arr[0][2] == 'O' && arr[1][1] == 'O' && bary==1 && arr[2][0] == 'a')
    {
        arr[2][0] = 'O';
       bary=0;
    }

    if((a == 0&&b==0 || a==1&&b==1 || a == 2&&b==2) && bary==1)
    {
        if((arr[0][0] == 'X' && arr[1][1] == 'X') && bary==1 && arr[2][2] == 'a')
        {
            arr[2][2] = 'O';
            bary=0;
        }
        if((arr[0][0] == 'X' && arr[2][2] == 'X') && bary==1 && arr[1][1] == 'a')
        {
            arr[1][1] = 'O';
            bary=0;
        }
        if((arr[1][1] == 'X' && arr[2][2] == 'X') && bary==1 && arr[0][0] == 'a')
        {
            arr[0][0] = 'O';
            bary=0;
        }
    }

    if((a==0&&b==2||a==1&&b==2 || a==2&&b==0) && bary==1)
    {
        if((arr[2][0] == 'X' && arr[1][1] == 'X') && bary==1 && arr[0][2] == 'a')
        {
            arr[0][2] = 'O';
            bary=0;
        }

        if((arr[2][0] == 'X' && arr[0][2] == 'X') && bary==1 && arr[1][1] == 'a')
        {
            arr[1][1] = 'O';
            bary=0;
        }

        if((arr[1][1] == 'X' && arr[0][2] == 'X') && bary==1 && arr[2][0] == 'a')
        {
            arr[2][0] = 'O';
            bary=0;
        }
    }

    if((b == 0&&a==0 || b == 1&&a==0 || b == 2&&a==0) && bary==1)
    {
        if((arr[0][0] == 'X' && arr[0][1] == 'X') && bary==1 && arr[0][2] == 'a')
        {
            arr[0][2] = 'O';
            bary=0;
        }

        if((arr[0][0] == 'X' && arr[0][2] == 'X') && bary==1 && arr[0][1] == 'a')
        {
            arr[0][1] = 'O';
            bary=0;
        }

        if((arr[0][1] == 'X' && arr[0][2] == 'X') && bary==1 && arr[0][0] == 'a')
        {
            arr[0][0] = 'O';
            bary=0;
        }
    }
    if(((b == 0&&a==1 || b == 1&&a==1 || b == 2&&a==1) && bary==1))
    {
        if((arr[1][0] == 'X' && arr[1][1] == 'X') && bary==1 && arr[1][2] == 'a')
        {
            arr[1][2] = 'O';
            bary=0;
        }
        if((arr[1][0] == 'X' && arr[1][2] == 'X') && bary==1 && arr[1][1] == 'a')
        {
            arr[1][1] = 'O';
            bary=0;
        }

        if((arr[1][1] == 'X' && arr[1][2] == 'X') && bary==1 && arr[1][0] == 'a') //5 - 6 = 4 horizontal line 2
        {
            arr[1][0] = 'O';
            bary=0;
        }
    }

    if(((b == 0&&a==2 || b == 1&&a==2 || b == 2&&a==2) && bary==1))
    {
        if((arr[2][0] == 'X' && arr[2][1] == 'X') && bary==1 && arr[2][2] == 'a')
        {
            arr[2][2] = 'O';
            bary=0;
        }

        if((arr[2][0] == 'X' && arr[2][2] == 'X') && bary==1 && arr[2][1] == 'a')
        {
            arr[2][1] = 'O';
            bary=0;
        }

        if((arr[2][1] == 'X' && arr[2][2] == 'X') && bary==1 && arr[2][0] == 'a')
        {
            arr[2][0] = 'O';
            bary=0;
        }
    }

    if((a == 0&&b==0 || a==1&&b==0 || a==2&&b==0) && bary==1)
    {
        if((arr[0][0] == 'X' && arr[1][0] == 'X') && bary==1 && arr[2][0] == 'a')
        {
            arr[2][0] = 'O';
            bary=0;
    }
        if((arr[0][0] == 'X' && arr[2][0] == 'X') && bary==1 && arr[1][0] == 'a')
        {
            arr[1][0] = 'O';
            bary=0;
        }

        if((arr[1][0] == 'X' && arr[2][0] == 'X') && bary==1 && arr[0][0] == 'a')
        {
            arr[0][0] = 'O';
            bary=0;
        }

    }

    if((a == 0&&b==1 || a==1&&b==1 || a==2&&b==1) && bary==1)
    {
        if((arr[0][1] == 'X' && arr[1][1] == 'X') && bary==1 && arr[2][1] == 'a')
        {
            arr[2][1] = 'O';
            bary=0;
        }

        if((arr[0][1] == 'X' && arr[2][1] == 'X') && bary==1 && arr[1][1] == 'a')
        {
            arr[1][1] = 'O';
            bary=0;
        }

        if((arr[1][1] == 'X' && arr[2][1] == 'X') && bary==1 && arr[0][1] == 'a')
        {
            arr[0][1] = 'O';
            bary=0;
        }
    }

    if((a==0&&b==2 || a==1&&b==2 || a==2&&b==2) && bary==1)
    {
        if((arr[0][2] == 'X' && arr[1][2] == 'X') && bary==1 && arr[2][2] == 'a')
        {
            arr[2][2] = 'O';
            bary=0;
        }

        if((arr[0][2] == 'X' && arr[2][2] == 'X') && bary==1 && arr[1][2] == 'a')
        {
            arr[1][2] = 'O';
            bary=0;
        }

        if((arr[1][2] == 'X' && arr[2][2] == 'X') && bary==1 && arr[0][2] == 'a')
        {
            arr[0][2] = 'O';
            bary=0;
        }
    }
    else
    {
        do
        {

            if(arr[0][0] == 'a' && bary==1)
            {
                bary=0;
                arr[0][0] = 'O';
            }
            if(arr[0][1] == 'a' && bary==1)
            {
                bary=0;
                arr[0][1] = 'O';
            }
            if(arr[0][2] == 'a' && bary==1)
            {
                bary=0;
                arr[0][2] = 'O';
            }
            if(arr[1][0] == 'a' && bary==1)
            {
                bary=0;
                arr[1][0] = 'O';
            }
            if(arr[1][1] == 'a' && bary==1)
            {
                bary=0;
                arr[1][1] = 'O';
            }
            if(arr[1][2] == 'a' && bary==1)
            {
                bary=0;
                arr[1][2] = 'O';
            }
            if(arr[2][0] == 'a' && bary==1)
            {
                bary=0;
                arr[2][0] = 'O';
            }
            if(arr[2][1] == 'a' && bary==1)
            {
                bary=0;
                arr[2][1] = 'O';
            }
            if(arr[2][2] == 'a' && bary==1)
            {
                bary=0;
                arr[2][2] = 'O';
            }
        }
        while(bary==1);
    }
    return 0;
}

 char win(){
        for (int i = 0; i < 3; i++)
        if ((arr[i][0] == arr[i][1]) && (arr[i][0] == arr[i][2]))
        return arr[i][0];
        for (int i = 0; i < 3; i++)
        if ((arr[0][i] == arr[1][i]) && (arr[0][i] == arr[2][i]))
        return arr[0][i];
        if ((arr[0][0] == arr[1][1]) && (arr[0][0] == arr[2][2]))
        return arr[0][0];
        if ((arr[0][2] == arr[1][1]) && (arr[0][2] == arr[2][0]))
        return arr[0][2];
        return 'n'; }
};
int main()
{

 Game a;
 int i=0;
 a.bary=0;
 while(i==0)
 {
  if(a.draw()==1)
  {
  cout<<"GAME IS DRAW!!!";
  break;
  }
  if(a.win()=='O'&&a.win()=='X'){
   cout<<"Winner is "<<a.win();
   break;}
 a.board();
 a.move();
 if(a.win()=='O'||a.win()=='X'&&a.draw()==false)
 {
  i=1;
  a.board();
  if(a.win()=='O')
  cout<<"O player win ";
  else
  cout<<"X player win";
 }
    }
     system("pause");
    return 0;
}
