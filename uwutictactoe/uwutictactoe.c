//tic-tac-toe just to start learning

//NT6 was Here º^º

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//some necessary things
char UWU[10] = {'o','1','2','3','4','5','6','7','8','9'};

int uwu();//win :D
void UwU();//the board :3

//1... 2... 3... beginning...
int main()
{
     int W = 1, U, w;//'W' = player, 'w' choice :>

     char u;//'u' u choice :3
     //uwu
     do
     {
          UwU();
          W = (W % 2) ? 1 : 2; //player number :3
          
          printf("UwU Player %d, choose a number: ", W); //TEXT :D
               scanf("%d", &w); //choice uwu
          
          u = (W == 1) ? 'X' : 'O'; //block selection marks B)

          //all blocks ;D
          if(w == 1 && UWU[1] == '1')
               UWU[1] = u;

          else if(w == 2 && UWU[2] == '2')
               UWU[2] = u;

          else if(w == 3 && UWU[3] == '3')
               UWU[3] = u;

          else if(w == 4 && UWU[4] == '4')
               UWU[4] = u;

          else if(w == 5 && UWU[5] == '5')
               UWU[5] = u;

          else if(w == 6 && UWU[6] == '6')
               UWU[6] = u;

          else if(w == 7 && UWU[7] == '7')
               UWU[7] = u;

          else if(w == 8 && UWU[8] == '8')
               UWU[8] = u;
          
           else if(w == 9 && UWU[9] == '9')
               UWU[9] = u;

          else
          {
               printf("choose another one, this one is already being used >:<");//u can't choose this :<

               W--;
               getch();
          }
          U = uwu();//:>
          
          W++;
     }
     while(U == - 1);
     {
          UwU();

          if(U == 1)

          printf("Player %d win :D", --W);
          
          else
          printf("\aGame Draw :<");

          getch();

          return 0;
     }
     
}
int uwu() //how to win ;3
{//all combinations :O
     if(UWU[1] == UWU[2] && UWU[2] == UWU[3])
     return 1;

     else if(UWU[4] == UWU[5] && UWU[5] == UWU[6])
     return 1;

     else if(UWU[7] == UWU[8] && UWU[8] == UWU[9])
     return 1;

     else if(UWU[1] == UWU[4] && UWU[4] == UWU[7])
     return 1;

     else if(UWU[2] == UWU[5] && UWU[5] == UWU[8])
     return 1;

     else if(UWU[3] == UWU[6] && UWU[6] == UWU[9])
     return 1;

     else if(UWU[1] == UWU[5] && UWU[5] == UWU[9])
     return 1;

     else if(UWU[3] == UWU[5] && UWU[5] == UWU[9])
     return 1;

     else if(UWU[1] != '1' && UWU[2] !='2' && UWU[3] != '3' && UWU[4] != '4' && UWU[5] != '5' && UWU[6] != '6' && UWU[7] != '7' && UWU[8] != '8' && UWU[9] != '9')
     return 0;

     else
          return - 1;
     //i finally finished typing this ;-;
}
void UwU()
{
    system("cls");
    
    printf("\n\n\tUwU Tic Tac Toe uwu\n\n");

    printf("\ta little game made by NT6 just to pass the time\n\n");

    printf("Player 1 UwU (X)  -  Player 2 uwu (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", UWU[1], UWU[2], UWU[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", UWU[4], UWU[5], UWU[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", UWU[7], UWU[8], UWU[9]);

    printf("     |     |     \n\n");
}