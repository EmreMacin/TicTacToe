#include <stdio.h>
#include <Windows.h>

int Grid[3][3] = { {0, 0, 0} ,{0,0,0 } ,{0, 0 ,0 } };
//0 = No value
//1 = X
//2 = O
char b1, b2, b3, b4, b5, b6, b7, b8, b9;
int mov = 0;
int Board(void);
int computermov(void);
int Board(void);
int ranx, rany;
char wrong = '\0';

int Board(void)
{
    
    switch (Grid[0][0])
    {
    case 0:
        b1 = '.';
        break;
    case 1:
        b1 = 'X';
        break;
    case 2:
        b1 = 'O';
        break;
    }
    switch (Grid[0][1])
    {
    case 0:
        b2 = '.';
        break;
    case 1:
        b2 = 'X';
        break;
    case 2:
        b2 = 'O';
        break;
    }
    switch (Grid[0][2])
    {
    case 0:
        b3 = '.';
        break;
    case 1:
        b3 = 'X';
        break;
    case 2:
        b3 = 'O';
        break;
    }
    switch (Grid[1][0])
    {
    case 0:
        b4 = '.';
        break;
    case 1:
        b4 = 'X';
        break;
    case 2:
        b4 = 'O';
        break;
    }
    switch (Grid[1][1])
    {
    case 0:
        b5 = '.';
        break;
    case 1:
        b5 = 'X';
        break;
    case 2:
        b5 = 'O';
        break;
    }
    switch (Grid[1][2])
    {
    case 0:
        b6 = '.';
        break;
    case 1:
        b6 = 'X';
        break;
    case 2:
        b6 = 'O';
        break;
    }
    switch (Grid[2][0])
    {
    case 0:
        b7 = '.';
        break;
    case 1:
        b7 = 'X';
        break;
    case 2:
        b7 = 'O';
        break;
    }
    switch (Grid[2][1])
    {
    case 0:
        b8 = '.';
        break;
    case 1:
        b8 = 'X';
        break;
    case 2:
        b8 = 'O';
        break;
    }
    switch (Grid[2][2])
    {
    case 0:
        b9 = '.';
        break;
    case 1:
        b9 = 'X';
        break;
    case 2:
        b9 = 'O';
        break;
    }
    
    
    system("cls");
    printf("Tic-Tac-Toe by Emre Macin\n\n\nYou are X and the computer is O...\n\n\nWrite your move as xy. \ne.g. You want to put X in x1-y2, write it as 12...\n\n\n");
    printf("\t    x1   x2  x3\n");
    printf("\t    ___ ___ ___ \n");
    printf("\ty1 | %c | %c | %c |\n", b1, b2, b3);
    printf("\t   |___|___|___|\n");
    printf("\ty2 | %c | %c | %c |\n", b4, b5, b6);
    printf("\t   |___|___|___|\n");
    printf("\ty3 | %c | %c | %c |\n", b7, b8, b9);
    printf("\t   |___|___|___|\n");

}

int computermov(void)
{
    while(1)
    {
        ranx = rand() % 3;
        Sleep(20);
        rany = rand() % 3;
        if(Grid[0][0] != 0 && Grid[0][1] != 0 && Grid[0][2] != 0 && Grid[1][0] != 0 && Grid[1][1] != 0 && Grid[1][2] != 0 && Grid[2][0] != 0 && Grid[2][1] != 0 && Grid[2][2] != 0 )
        {
            
        
        
        }
        else
        {
            if (Grid[ranx][rany] == 0)
            {
                Grid[ranx][rany] = 2;
                break;
            }
        }
        
    }

}

int main(void)
{
    srand(time(NULL));
    while(1)
    {
        
        Board();
        printf("\n\nWrite your move:");
        
        if(scanf_s(" %d", &mov) == 1)
        {
            if (mov == 11 || mov == 12 || mov == 13 || mov == 21 || mov == 22 || mov == 23 || mov == 31 || mov == 32 || mov == 33)
            {
                if (Grid[(mov % 10) - 1][((mov - (mov % 10)) / 10) - 1] == 1 || Grid[(mov % 10) - 1][((mov - (mov % 10)) / 10) - 1] == 2)
                {
                    printf("You cannot mark a place thats already been marked!");
                    Sleep(2000);


                }
                else
                {
                    Grid[(mov % 10) - 1][((mov - (mov % 10)) / 10) - 1] = 1;
                    if ((Grid[0][0] == 1 && Grid[1][1] == 1 && Grid[2][2] == 1) || (Grid[0][2] == 1 && Grid[1][1] == 1 && Grid[2][0] == 1) || (Grid[0][0] == 1 && Grid[0][1] == 1 && Grid[0][2] == 1) || (Grid[1][0] == 1 && Grid[1][1] == 1 && Grid[1][2] == 1) || (Grid[2][0] == 1 && Grid[2][1] == 1 && Grid[2][2] == 1) || (Grid[0][0] == 1 && Grid[1][0] == 1 && Grid[2][0] == 1) || (Grid[0][1] == 1 && Grid[1][1] == 1 && Grid[2][1] == 1) || (Grid[0][2] == 1 && Grid[1][2] == 1 && Grid[2][2] == 1))
                    {
                        system("cls");
                        Board();
                        printf("\n\nYou won!");
                        break;

                    }
                    computermov();
                    if ((Grid[0][0] == 2 && Grid[1][1] == 2 && Grid[2][2] == 2) || (Grid[0][2] == 2 && Grid[1][1] == 2 && Grid[2][0] == 2) || (Grid[0][0] == 2 && Grid[0][1] == 2 && Grid[0][2] == 2) || (Grid[1][0] == 2 && Grid[1][1] == 2 && Grid[1][2] == 2) || (Grid[2][0] == 2 && Grid[2][1] == 2 && Grid[2][2] == 2) || (Grid[0][0] == 2 && Grid[1][0] == 2 && Grid[2][0] == 2) || (Grid[0][1] == 2 && Grid[1][1] == 2 && Grid[2][1] == 2) || (Grid[0][2] == 2 && Grid[1][2] == 2 && Grid[2][2] == 2))
                    {
                        system("cls");
                        Board();
                        printf("\n\nYou lost!");
                        break;

                    }
                    
                }


            }
            else
            {
                printf("Unrecognized move!");
                Sleep(2000);

            }
        
        }
        else if(scanf_s(" %c", &wrong))
        {
            printf("You cannot enter letters!");
            Sleep(2000);
            
        
        }
       
        
        
    }
    
    


}