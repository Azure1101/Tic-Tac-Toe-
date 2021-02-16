#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

	struct hitungscore
	{
		float score;
	}score;

char p1name3x3[25], p2name3x3[25];

char player13x3;
char player23x3;
char game3x3[9];
int turn3x3;
int mode3x3;
int kesulitan;

void PilihanKesulitan();
void gameMode3x3();
void displayMenu3x3();
void letsPlay3x3();
int notLetHumanWin3x3();
void displaySize();
void showscore();
void menyimpanscore();
void main3x3();
void humanTurn3x3();
void computerTurn3x3();
void player2Turn3x3();
int winPossible3x3();
void displayBoard3x3();
int checkWinner3x3();

char p1name[25], p2name[25];
char player1;
char player2;
char game[25];
int turn;
int mode;
int kesul1tan;

void PilihanKesulitan5x5();
void gameMode();
void displayMenu();
void letsPlay();
int notLetHumanWin();
void main5x5();
void humanTurn();
void computerTurn();
void player2Turn();
int winPossible();
void displayBoard();
int checkWinner();

char p1nm[25], p2nm[25];
char p1;
char p2;
char gm[49];
int trn;
int md;
int kesulit4n;

void PilihanKesulitan7x7();
int gmMd();
void dispMenu();
void letsStart();
int notLetHWin();
void main7();
void humanTrn();
void compTrn();
void player2Trn();
int winPssbl();
void Board();
int checkW1nner();

				//modul utama
int main()
{
	//Modul untuk menampilkan menu utama
	//Initial State	: Program belun berjalan
	//Final State	: Terlihat pilihan menu di layar, dimana user bisa memilih modul mana yang ingin dieksekusi
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: Nabiilah Nada Iswari dan Fanny Putria Agustina
	system ("color E");
	int r, q;
	
	printf("Loading...");
	for(r = 1; r<20; r++)
					{
						for(q = 0; q<=100000000; q++);
						printf("%c", 219);
					}
	system ("cls");
	int start;
	printf("\n\t\t\t+-----------------------------------------------------------------------+\t\t\t\n");
	printf("\t\t\t| 			WELCOME TO TIC TAC TOE				|\t\t\t\n");
    printf("\t\t\t+-----------------------------------------------------------------------+\t\t\t\n");
	printf("\t\t\t|		     	1. Play Game					|\t\t\t\n");
    printf("\t\t\t|		     	2. Show Score					|\t\t\t\n");
    printf("\t\t\t|		     	3. Quit						|\t\t\t\n");
	printf("\t\t\t+-----------------------------------------------------------------------+\t\t\t\n");
	printf("\t\t\t|Please select: ");
    scanf("%d", &start);
    if (start==1)
	{
		system("cls");
    	displaySize();
	}
	else if (start==2){
		showscore();
	}
	else if (start==3)
	{
		exit(0);
	}
	else
    {
        printf("			|\aInvalid Choice, enter a digit (1 to 3).\n");
        start = main();
    }
    return 0;
}
void displaySize()
{
	//Modul untuk menampilkan menu memilih ukuran
	//Initial State	: Program belun berjalan
	//Final State	: Terlihat pilihan menu di layar, dimana user bisa memilih modul mana yang ingin dieksekusi
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: Nabiilah Nada Iswari dan Fanny Putria Agustina
	int r, q;
	
	printf("Loading...");
	for(r = 1; r<20; r++)
					{
						for(q = 0; q<=100000000; q++);
						printf("%c", 219);
					}
	system ("cls");
	system ("color E");
	int size;
	printf("\n\t\t\t+-----------------------------------------------------------------------+\t\t\t\n");
	printf("\t\t\t| 			WELCOME TO TIC TAC TOE				|\t\t\t\n");
    printf("\t\t\t+-----------------------------------------------------------------------+\t\t\t\n");
	printf("\t\t\t|		     	1. 3x3						|\t\t\t\n");
    printf("\t\t\t|		     	2. 5x5						|\t\t\t\n");
    printf("\t\t\t|		     	3. 7x7						|\t\t\t\n");
	printf("\t\t\t+-----------------------------------------------------------------------+\t\t\t\n");
	printf("\t\t\t|Please select: ");
    scanf("%d", &size);
    if (size==1)
    {
    	system("cls");
    	main3x3();
	}
	else if (size==2)
	{
		system("cls");
		main5x5();
	}
	else if (size==3)
	{
		system("cls");
		main7();
	}
}
void showscore()
{
	//Modul untuk menampilkan score saat pemain memilih pilihan menu 'Scores' pada Menu
	//Initial State	: Skor belum ditampilkan
	//Final State	: Skor ditampilkan
	//Author		: Amallia Hajarani
	//Modifided by	:-
	
	//Author : 
	system ("cls");
	system ("color E");
	int r, q;
	
	printf("Loading...");
	for(r = 1; r<20; r++)
					{
						for(q = 0; q<=100000000; q++);
						printf("%c", 219);
					}
	system ("cls");
	int pilih;
	FILE *fshow;
	struct score;
	fshow = fopen("Score.txt", "r");
    if (fshow== NULL)
	{
       printf("Let's Play the Game'");
    }
    else
    {
	    system("CLS");
	    while(!feof(fshow))
	    {
	    	fscanf(fshow,"%f", &score.score);
	    	printf("Score");
	    	printf("---------------------");
			printf("%.0f\n", score.score);
		}
		fclose(fshow);
	}
	
	printf("Click 0 to go back to main menu");
    scanf(" %d", &pilih);
	
	if(pilih == 0)
		{
			main();
		}
}
void menyimpanscore()
{
	//Modul yang digunakan untuk menyimpan nama dan skor pemain ke daalam sebuah file
	//Initial State	: File untuk menyimpan skor masih kosong
	//Final State	: File untuk menyimpan skor terisi dengan nama pemain dan skor yang didapat
	//Author		: Amallia Hajarani
	//Modifided by	:-
	
    FILE *fsave;
    struct score;
    
    fsave = fopen("Score.txt","a");
    if(fsave == NULL)
    {
      printf("Let's Play The Game!'");                
    }
    fprintf(fsave,"%.0f\n", score.score);
    fclose(fsave);
}

				//3x3
void main3x3()
{
	//Modul untuk memanggil papan kosong dan memanggil modul menu memilih musuh, menu memilih simbol, dan modul untuk cek syarat berapa kotak yang harus diisi jika ingin mendapatkan score
	//Initial State	: Program belun berjalan menu memilih musuh, menu memilih simbol, dan modul untuk cek syarat berapa kotak yang harus diisi jika ingin mendapatkan score
	//Final State	: Memanggil modul 
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: -
    turn3x3 = 0;
    int i = 0;
    for(i = 0; i < 9; i++)
    {
        game3x3[i] = ' ';
    }
    gameMode3x3();
    displayMenu3x3();
    letsPlay3x3();
}
void letsPlay3x3()
{
	//Modul untuk cek syarat berapa kotak yang harus diisi jika ingin mendapatkan score
	//Initial State	: Program belun berjalan
	//Final State	: Mendapatkan score
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: -
    int i = 0;
    char reset;
    for(i=0; i<9; i++)
    {
    	system ("color 4");
        displayBoard3x3();
        if (i > 4)
        {
            if(checkWinner3x3() == 1)
            {
                if(turn3x3 == 0 && mode3x3 == 1)
                {
                    printf("\n\n\tComputer WINS!!!\n\n");
                    printf("\nPress Y if you want to Reset\n");
      				scanf(" %c",&reset);
      				if (reset == 'Y'){
						system ("cls");
						main3x3();
					}
					else if (reset != 'Y')
					{
						break;
					}
                }
                else if(turn3x3 == 0 && mode3x3 == 0)
                {
                    printf("\n\n\t\tPlayer 2 %s WINS!!!\n\n",p2name3x3);
                    score.score = (10*1);
      				menyimpanscore();
      				printf("\nPress Y if you want to Reset\n");
      				scanf(" %c",&reset);
      				if (reset == 'Y'){
						system ("cls");
						main3x3();
					}
					else if (reset != 'Y')
					{
						break;
					}
                }
                else
                {
                    printf("\n\n\t\tPlayer 1 %s WINS!!!\n\n",p1name3x3);
                    score.score = (10*1);
      				menyimpanscore();
                    printf("\nPress Y if you want to Reset\n");
      				scanf(" %c",&reset);
					if (reset == 'Y'){
						system ("cls");
						main3x3();
					}
					else if (reset != 'Y')
					{
						break;
					}
                }
            }
        }
        if(turn3x3 == 0)
        {
            humanTurn3x3();
        }
        else if(turn3x3 == 1)
        {

            if(mode3x3 == 1)
            {
                computerTurn3x3();
            }
            else if (mode3x3 == 0)
            {
                player2Turn3x3();
            }
        }

    }

    if(i==9 && checkWinner3x3() == 0)
    {
        displayBoard3x3();
        printf("\n\n\tGame DRAW!!!\n\n");
        printf("\nPress Y if you want to Reset\n");
      				scanf(" %c",&reset);
      				if (reset == 'Y'){
						system ("cls");
						main3x3();
					}
					else if (reset != 'Y')
					{
						printf("\nInvalid Choice, enter a digit Y.\n");
					}
    }
}
void humanTurn3x3()
{
	//Modul untuk langkah manusia 
	//Initial State	: Program belum berjalan
	//Final State	: User menginputkan langkah
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: Nabiilah Nada Iswari dan Fanny Putria Agustina
	system ("color 4");
    int n;
	printf("\nPlayer 1 %s turn! \nEnter a number (1 to 9).\n",p1name3x3);
	int waktu_awal = clock();
    scanf("%d",&n);
    int waktu_akhir = clock();
    if (waktu_akhir - waktu_awal > 5000){
    	printf ("Input time is MORE THAN  5 seconds");
    		system ("pause");
    		system ("cls");
	}
    if (game3x3[n-1] == ' ')
    {
        game3x3[n-1] = player13x3;
        turn3x3++;
    }
    else
    {
        printf("\n\t\a ** * Choose an empty space on board * **\n");
        humanTurn3x3();
    }
}
void computerTurn3x3()
{
	//Modul untuk langkah manusia 
	//Initial State	: Program belum berjalan
	//Final State	: Komputer menginputkan langkah
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: Dimas Wisnu Saputro
	system ("color 4");
	int option=1;
    printf("\n Computer's turn\n");
    if(kesulitan==3){
    	option = winPossible3x3();	
	}
    if(option != 0)
    {
        int option2=1;
        if(kesulitan>=2){
        	option2 = notLetHumanWin3x3(); 
		} 
		
        if (option2 != 0 && game3x3[4] == ' ')
        {
            game3x3[4] = player23x3;
        }
        else if (option2 != 0 && game3x3[0] == ' ')
        {
            game3x3[0] = player23x3;
        }
        else if (option2 != 0 && game3x3[2] == ' ')
        {
            game3x3[2] = player23x3;
        }
        else if (option2 != 0 && game3x3[6] == ' ')
        {
            game3x3[6] = player23x3;
        }
        else if (option2 != 0 && game3x3[8] == ' ')
        {
            game3x3[8] = player23x3;
        }
        else if (option2 != 0 && game3x3[1] == ' ')
        {
            game3x3[1] = player23x3;
        }
        else if (option2 != 0 && game3x3[3] == ' ')
        {
            game3x3[3] = player23x3;
        }
        else if (option2 != 0 && game3x3[5] == ' ')
        {
            game3x3[5] = player23x3;
        }
        else if (option2 != 0 && game3x3[7] == ' ')
        {
            game3x3[7] = player23x3;
        }
        turn3x3 = 0;
    }
}
void player2Turn3x3()
{
	//Modul untuk langkah komputer 
	//Initial State	: Program belum berjalan
	//Final State	: User menginputkan langkah
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: Nabiilah Nada Iswari dan Fanny Putria Agustina
	system ("color 4");
    int n;
    printf("\nPlayer 2 %s turn! \nEnter a number (1 to 9).\n",p2name3x3);
    int waktu_awal = clock();
    scanf("%d",&n);
    int waktu_akhir = clock();
    if (waktu_akhir - waktu_awal > 5000){
    	printf ("Input time is MORE THAN  5 seconds");
    		system ("pause");
    		system ("cls");
			displayBoard3x3();
	}
    if (game3x3[n-1] == ' ')
    {
        game3x3[n-1] = player23x3;
        turn3x3 = 0;
    }
    else
    {
        printf("\n\t\a ** * Choose an empty space on board * **\n");
        player2Turn3x3();
    }
}
int notLetHumanWin3x3()
{
	//Modul untuk memblock langkah player1 (human/ manusia) 
	//Initial State	: Program belum berjalan
	//Final State	: Komputer memblock langkah player1 (human/ manusia)
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: -
    if (game3x3[0] == player13x3 && game3x3[1] == player13x3 && game3x3[2] == ' ')
    {
        game3x3[2] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[0] == player13x3 && game3x3[2] == player13x3 && game3x3[1] == ' ')
    {
        game3x3[1] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[1] == player13x3 && game3x3[2] == player13x3 && game3x3[0] == ' ')
    {
        game3x3[0] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[3] == player13x3 && game3x3[4] == player13x3 && game3x3[5] == ' ')
    {
        game3x3[5] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[3] == player13x3 && game3x3[5] == player13x3 && game3x3[4] == ' ')
    {
        game3x3[4] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[4] == player13x3 && game3x3[5] == player13x3 && game3x3[3] == ' ')
    {
        game3x3[3] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[6] == player13x3 && game3x3[7] == player13x3 && game3x3[8] == ' ')
    {
        game3x3[8] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[6] == player13x3 && game3x3[8] == player13x3 && game3x3[7] == ' ')
    {
        game3x3[7] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[7] == player13x3 && game3x3[8] == player13x3 && game3x3[6] == ' ')
    {
        game3x3[6] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[0] == player13x3 && game3x3[3] == player13x3 && game3x3[6] == ' ')
    {
        game3x3[6] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[0] == player13x3 && game3x3[6] == player13x3 && game3x3[3] == ' ')
    {
        game3x3[3] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[3] == player13x3 && game3x3[6] == player13x3 && game3x3[0] == ' ')
    {
        game3x3[0] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[1] == player13x3 && game3x3[4] == player13x3 && game3x3[7] == ' ')
    {
        game3x3[7] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[1] == player13x3 && game3x3[7] == player13x3 && game3x3[4] == ' ')
    {
        game3x3[4] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[4] == player13x3 && game3x3[7] == player13x3 && game3x3[1] == ' ')
    {
        game3x3[1] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[2] == player13x3 && game3x3[5] == player13x3 && game3x3[8] == ' ')
    {
        game3x3[8] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[2] == player13x3 && game3x3[8] == player13x3 && game3x3[5] == ' ')
    {
        game3x3[5] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[5] == player13x3 && game3x3[8] == player13x3 && game3x3[2] == ' ')
    {
        game3x3[2] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[0] == player13x3 && game3x3[4] == player13x3 && game3x3[8] == ' ')
    {
        game3x3[8] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[0] == player13x3 && game3x3[8] == player13x3 && game3x3[4] == ' ')
    {
        game3x3[4] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[4] == player13x3 && game3x3[8] == player13x3 && game3x3[0] == ' ')
    {
        game3x3[0] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[2] == player13x3 && game3x3[4] == player13x3 && game3x3[6] == ' ')
    {
        game3x3[6] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[2] == player13x3 && game3x3[6] == player13x3 && game3x3[4] == ' ')
    {
        game3x3[4] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[4] == player13x3 && game3x3[6] == player13x3 && game3x3[2] == ' ')
    {
        game3x3[2] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else
        return -1;
}
int winPossible3x3()
{
	//Modul untuk mencari celah agar dirinya (komputer) menang 
	//Initial State	: Program belum berjalan
	//Final State	: Komputer menginputkan langkah yang bisa diperkirakan menang
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: -
    if (game3x3[0] == player23x3 && game3x3[1] == player23x3 && game3x3[2] == ' ')
    {
        game3x3[2] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[0] == player23x3 && game3x3[2] == player23x3 && game3x3[1] == ' ')
    {
        game3x3[1] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[1] == player23x3 && game3x3[2] == player23x3 && game3x3[0] == ' ')
    {
        game3x3[0] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[3] == player23x3 && game3x3[4] == player23x3 && game3x3[5] == ' ')
    {
        game3x3[5] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[3] == player23x3 && game3x3[5] == player23x3 && game3x3[4] == ' ')
    {
        game3x3[4] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[4] == player23x3 && game3x3[5] == player23x3 && game3x3[3] == ' ')
    {
        game3x3[3] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[6] == player23x3 && game3x3[7] == player23x3 && game3x3[8] == ' ')
    {
        game3x3[8] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[6] == player23x3 && game3x3[8] == player23x3 && game3x3[7] == ' ')
    {
        game3x3[7] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[7] == player23x3 && game3x3[8] == player23x3 && game3x3[6] == ' ')
    {
        game3x3[6] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[0] == player23x3 && game3x3[3] == player23x3 && game3x3[6] == ' ')
    {
        game3x3[6] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[0] == player23x3 && game3x3[6] == player23x3 && game3x3[3] == ' ')
    {
        game3x3[3] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[3] == player23x3 && game3x3[6] == player23x3 && game3x3[0] == ' ')
    {
        game3x3[0] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[1] == player23x3 && game3x3[4] == player23x3 && game3x3[7] == ' ')
    {
        game3x3[7] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[1] == player23x3 && game3x3[7] == player23x3 && game3x3[4] == ' ')
    {
        game3x3[4] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[4] == player23x3 && game3x3[7] == player23x3 && game3x3[1] == ' ')
    {
        game3x3[1] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[2] == player23x3 && game3x3[5] == player23x3 && game3x3[8] == ' ')
    {
        game3x3[8] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[2] == player23x3 && game3x3[8] == player23x3 && game3x3[5] == ' ')
    {
        game3x3[5] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[5] == player23x3 && game3x3[8] == player23x3 && game3x3[2] == ' ')
    {
        game3x3[2] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[0] == player23x3 && game3x3[4] == player23x3 && game3x3[8] == ' ')
    {
        game3x3[8] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[0] == player23x3 && game3x3[8] == player23x3 && game3x3[4] == ' ')
    {
        game3x3[4] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[4] == player23x3 && game3x3[8] == player23x3 && game3x3[0] == ' ')
    {
        game3x3[0] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[2] == player23x3 && game3x3[4] == player23x3 && game3x3[6] == ' ')
    {
        game3x3[6] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[2] == player23x3 && game3x3[6] == player23x3 && game3x3[4] == ' ')
    {
        game3x3[4] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else if (game3x3[4] == player23x3 && game3x3[6] == player23x3 && game3x3[2] == ' ')
    {
        game3x3[2] = player23x3;
        turn3x3 = 0;
        return turn3x3;
    }
    else
        return -1;
}
void displayBoard3x3()
{
	//Modul untuk menampilkan papan ukuran 3x3 
	//Initial State	: Program belum berjalan
	//Final State	: Terlihattampilan papan ukuran 3x3
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: -
	system ("color 4");
	system("cls");
	printf("+---------------+---------------+----------------+\n");
	printf("|		|		|	 	 |\n");
	printf("|	%c	|	%c	|	%c	 |\n",game3x3[0],game3x3[1],game3x3[2]);
	printf("|		|		|		 |\n");
	printf("+---------------+---------------+----------------+\n");
	printf("|		|		|		 |\n");
	printf("|	%c	|	%c	|	%c	 |\n",game3x3[3],game3x3[4],game3x3[5]);
	printf("|		|		|		 |\n");
	printf("+---------------+---------------+----------------+\n");	
	printf("|		|		|		 |\n");
	printf("|	%c	|	%c	|	%c	 |\n",game3x3[6],game3x3[7],game3x3[8]);
	printf("|		|		|		 |\n");
	printf("+---------------+---------------+----------------+\n");
}
int checkWinner3x3()
{
	//Modul untuk mengecek keadaan papan yang menang
	//Initial State	: Program belum berjalan
	//Final State	: Papan yang sudah dicek 
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: -
    if(game3x3[0] == game3x3[1] && game3x3[1] == game3x3[2] && game3x3[0] != ' ')
    {
        return 1;
    }
    else if (game3x3[3] == game3x3[4] && game3x3[4] == game3x3[5] && game3x3[3] != ' ')
    {
        return 1;
    }
    else if (game3x3[6] == game3x3[7] && game3x3[7] == game3x3[8] && game3x3[6] != ' ')
    {
        return 1;
    }
    else if (game3x3[0] == game3x3[3] && game3x3[3] == game3x3[6] && game3x3[0] != ' ')
    {
        return 1;
    }
    else if (game3x3[1] == game3x3[4] && game3x3[4] == game3x3[7] && game3x3[1] != ' ')
    {
        return 1;
    }
    else if (game3x3[2] == game3x3[5] && game3x3[5] == game3x3[8] && game3x3[2] != ' ')
    {
        return 1;
    }
    else if (game3x3[0] == game3x3[4] && game3x3[4] == game3x3[8] && game3x3[0] != ' ')
    {
        return 1;
    }
    else if (game3x3[2] == game3x3[4] && game3x3[4] == game3x3[6] && game3x3[2] != ' ')
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
void displayMenu3x3()
{
	//Modul untuk menampilkan menu memilih simbol
	//Initial State	: Program belum berjalan
	//Final State	: Terlihat pilihan menu di layar, dimana user bisa memilih modul mana yang ingin dieksekusi
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: -
	system ("cls");
	system ("color 4");
	int r, q;
	
	printf("Loading...");
	for(r = 1; r<20; r++)
					{
						for(q = 0; q<=100000000; q++);
						printf("%c", 219);
					}
	system("cls");
    int choice;
    printf("			+-----------------------------------------------------------------------+\n");
    printf("			|			     *** * MENU * ***				|\n");
    printf("			|              		  Player1 Choose Symbol				|\n");
    printf("			|              		  1. Play with 'X' 				|\n");
    printf("			|              		  2. Play with 'O'  				|\n");
    printf("			|              		  3. Quit game 					|\n");
    printf("			+-----------------------------------------------------------------------+\n");
    printf("			|Please select: ");
    scanf("%d", &choice);
    
    if (choice == 1)
    {
    	system("cls");
        player13x3 = 'X'; player23x3 = 'O';
        printf("			|Player 1 %s: %c \nPlayer 2 %s: %c", p1name3x3, p1, p2name3x3, p2);
    }
    else if (choice == 2)
    {
    	system("cls");
        player13x3 = 'O'; player23x3 = 'X';
        printf("			|Player 1 %s: %c \nPlayer 2 %s: %c", p1name3x3, p1, p2name3x3, p2);
    }
    else if (choice == 3)
    {
        printf("Quiting");
        exit(0);
    }
    else
    {
        printf("			|\aInvalid Choice! Enter a digit (1 to 3)\n");
        displayMenu3x3();
    }
}
void gameMode3x3()
{
	//Modul untuk menampilkan menu memilih musuh/ lawan
	//Initial State	: Program belum berjalan
	//Final State	: Terlihat pilihan menu di layar, dimana user bisa memilih modul mana yang ingin dieksekusi
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: Dimas Wisnu Saputro
	system ("color 4");
	int r, q;
	
	printf("Loading...");
	for(r = 1; r<20; r++)
					{
						for(q = 0; q<=100000000; q++);
						printf("%c", 219);
					}
	system("cls");
    int n;
    printf("			+-----------------------------------------------------------------------+\n");
	printf("			| 			WELCOME TO TIC TAC TOE				|\n");
    printf("			+-----------------------------------------------------------------------+\n");
    printf("			| 			   CHOOSE Game Mode: 				|\n");
    printf("			|		     1. Human vs Human (2 player)			|\n");
    printf("			|		     2. Human vs Computer (Single player)		|\n");
    printf("			|		     3. Quit						|\n");
	printf("			+-----------------------------------------------------------------------+\n");
	printf("			|Please select: ");
    scanf("%d", &n);
    if (n == 1)
    {
        mode3x3 = 0;
        printf("			|Human VS Human								\n");
        printf("			+-----------------------------------------------------------------------+\n");
        printf("			|Player 1: Enter Your Name:");
		fflush(stdin);
		gets(p1name3x3);
		printf("			|Player 2: Enter Your Name:");
		fflush(stdin);
		gets(p2name3x3);
    }
    else if(n == 2)
    {
        mode3x3 = 1;
        printf("			|Human VS Computer							|\n");
        printf("			+-----------------------------------------------------------------------+\n");
        printf("			|Player 1: Enter Your Name:");
		fflush(stdin);
		gets(p1name3x3);
		PilihanKesulitan();
    }
    else if(n == 3)
    {
        exit(0);
    }
    else
    {
        printf("			|\aInvalid Choice, enter a digit (1 to 3).\n");
    }
}
void PilihanKesulitan()
{
	//Modul untuk menampilkan menu memilih tingkat kesulitan
	//Initial State	: Program belum berjalan
	//Final State	: Terlihat pilihan menu di layar, dimana user bisa memilih modul mana yang ingin dieksekusi
	//Author		: Dimas Wisnu Saputro
	//Modifided by	: -
	system ("color 4");
	int kesulitan;
	printf ("\n\t\t\t1. Easy");
	printf ("\n\t\t\t2. Medium");
	printf ("\n\t\t\t3. Hard");
	printf ("\n\t\t\tPlease select: ");
	scanf("%d", &kesulitan);
}
				//5x5
				
void main5x5()
{
	//Modul untuk menampilkan papan kosong dan memanggil modul menu memilih musuh, menu memilih simbol, dan modul untuk cek syarat berapa kotak yang harus diisi jika ingin mendapatkan score
	//Initial State	: Program belun berjalan menu memilih musuh, menu memilih simbol, dan modul untuk cek syarat berapa kotak yang harus diisi jika ingin mendapatkan score
	//Final State	: Memanggil modul 
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: Nabiilah Nada Iswari
    turn = 0;
    int i = 0;
    for(i = 0; i < 25; i++)
    {
        game[i] = ' ';
    }
    gameMode();
    displayMenu();
    letsPlay();
}
void letsPlay()
{
	//Modul untuk cek syarat berapa kotak yang harus diisi jika ingin mendapatkan score
	//Initial State	: Program belun berjalan
	//Final State	: Mendapatkan score
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: Nabiilah Nada Iswari
    int i = 0;
    char reset;
    for(i=0; i<25; i++)
    {
    	system ("color 2");
        displayBoard();
        if (i >6)
        {
            if(checkWinner() == 1)
            {
                if(turn == 0 && mode == 1)
                {
                    printf("\n\n\tComputer WINS!!!\n\n");
                    printf("\nPress Y if you want to Reset\n");
      				scanf(" %c",&reset);
      				if (reset == 'Y'){
						system ("cls");
						main5x5();
					}
					else if (reset != 'Y')
					{
						break;
					}
                }
                else if(turn == 0 && mode == 0)
                {
                    printf("\n\n\t\tPlayer 2 %s WINS!!!\n\n",p2name);
                    score.score = (10*1);
      				menyimpanscore();
                    printf("\nPress Y if you want to Reset\n");
      				scanf(" %c",&reset);
      				if (reset == 'Y'){
						system ("cls");
						main5x5();
					}
					else if (reset != 'Y')
					{
						break;
					}
                }
                else
                {
                    printf("\n\n\t\tPlayer 1 %s WINS!!!\n\n",p1name);
                    score.score = (10*1);
      				menyimpanscore();
                    printf("\nPress Y if you want to Reset\n");
      				scanf(" %c",&reset);
      				if (reset == 'Y'){
						system ("cls");
						main5x5();
					}
					else if (reset != 'Y')
					{
						break;
					}
                }
            }
        }
        if(turn == 0)
        {
            humanTurn();
        }
        else if(turn == 1)
        {

            if(mode == 1)
            {
                computerTurn();
            }
            else if (mode == 0)
            {
                player2Turn();
            }
        }

    }

    if(i==25 && checkWinner() == 0)
    {
        displayBoard();
        printf("\n\n\tGame DRAW!!!\n\n");
        printf("\nPress Y if you want to Reset\n");
      				scanf(" %c",&reset);
      				if (reset == 'Y'){
						system ("cls");
						main5x5();
					}
					else if (reset != 'Y')
					{
						printf("\nInvalid Choice, enter a digit Y.\n");
					}
    }
}
void humanTurn()
{
	//Modul untuk langkah manusia 
	//Initial State	: Program belum berjalan
	//Final State	: User menginputkan langkah
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: Nabiilah Nada Iswari dan Fanny Putria Agustina
	system ("color 2");
    int n;
    printf("\nPlayer 1 %s turn! \nEnter a number (1 to 25).\n",p1name);
    int waktu_awal = clock();
    scanf("%d",&n);
    int waktu_akhir = clock();
    if (waktu_akhir - waktu_awal > 5000){
    	printf ("Input time is MORE THAN  5 seconds ");
    		system ("pause");
    		system ("cls");
    		displayBoard();
	}
    if (game[n-1] == ' ')
    {
        game[n-1] = player1;
        turn++;
    }
    else
    {
        printf("\n\t\a ** * Choose an empty space on board * **\n");
        humanTurn();
    }
}
void computerTurn()
{
	//Modul untuk langkah manusia 
	//Initial State	: Program belum berjalan
	//Final State	: Komputer menginputkan langkah
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: Nabiilah Nada Iswari, Fanny Putria Agustina, Dimas Wisnu Saputro
	system ("color 2");
	int option=1;
    printf("\n Computer's turn\n");
    if(kesul1tan==3){
    	option = winPossible();	
	}
    if(option != 0)
    {
        int option2=1;
        if(kesul1tan>=2){
        	option2 = notLetHumanWin(); 
		} 
		
        if (option2 != 0 && game[12] == ' ')
        {
            game[12] = player2;
        }
        else if (option2 != 0 && game[0] == ' ')
        {
            game[0] = player2;
        }
        else if (option2 != 0 && game[4] == ' ')
        {
            game[4] = player2;
        }
        else if (option2 != 0 && game[20] == ' ')
        {
            game[20] = player2;
        }
        else if (option2 != 0 && game[24] == ' ')
        {
            game[24] = player2;
        }
        else if (option2 != 0 && game[6] == ' ')
        {
            game[6] = player2;
        }
        else if (option2 != 0 && game[18] == ' ')
        {
            game[18] = player2;
        }
        else if (option2 != 0 && game[22] == ' ')
        {
            game[22] = player2;
        }
        else if (option2 != 0 && game[16] == ' ')
        {
            game[16] = player2;
        }
        else if (option2 != 0 && game[8] == ' ')
        {
            game[8] = player2;
        }
        else if (option2 != 0 && game[2] == ' ')
        {
            game[2] = player2;
        }
        else if (option2 != 0 && game[5] == ' ')
        {
            game[5] = player2;
        }
        else if (option2 != 0 && game[19] == ' ')
        {
            game[19] = player2;
        }
        else if (option2 != 0 && game[15] == ' ')
        {
            game[15] = player2;
        }
        else if (option2 != 0 && game[9] == ' ')
        {
            game[9] = player2;
        }
        else if (option2 != 0 && game[21] == ' ')
        {
            game[21] = player2;
        }
        else if (option2 != 0 && game[13] == ' ')
        {
            game[13] = player2;
        }
        else if (option2 != 0 && game[1] == ' ')
        {
            game[1] = player2;
        }
        else if (option2 != 0 && game[3] == ' ')
        {
            game[3] = player2;
        }
        else if (option2 != 0 && game[11] == ' ')
        {
            game[11] = player2;
        }
        else if (option2 != 0 && game[7] == ' ')
        {
            game[7] = player2;
        }
        else if (option2 != 0 && game[10] == ' ')
        {
            game[10] = player2;
        }
        else if (option2 != 0 && game[17] == ' ')
        {
            game[17] = player2;
        }
        else if (option2 != 0 && game[14] == ' ')
        {
            game[14] = player2;
        }
        else if (option2 != 0 && game[23] == ' ')
        {
            game[23] = player2;
        }
        
        turn = 0;
    }
}
void player2Turn()
{
	//Modul untuk langkah manusia 
	//Initial State	: Program belum berjalan
	//Final State	: User menginputkan langkah
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: Nabiilah Nada Iswari dan Fanny Putria Agustina
	system ("color 2");
    int n;
    printf("\nPlayer 2 %s turn! \nEnter a number (1 to 9).\n",p2name);
    int waktu_awal = clock();
    scanf("%d",&n);
    int waktu_akhir = clock();
    if (waktu_akhir - waktu_awal > 5000){
    	printf ("Input time is MORE THAN  5 seconds ");
    		system ("pause");
    		system ("cls");
    		displayBoard();
	}
    if (game[n-1] == ' ')
    {
        game[n-1] = player2;
        turn = 0;
    }
    else
    {
        printf("\n\t\a ** * Choose an empty space on board * **\n");
        player2Turn();
    }
}
int notLetHumanWin()
{
	//Modul untuk memblock langkah player1 (human/ manusia) 
	//Initial State	: Program belum berjalan
	//Final State	: Komputer memblock langkah player1 (human/ manusia)
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: Nabiilah Nada Iswari
	//0,1,2,3,4
	if (game[0] == player1 && game[1] == player1 && game[2] == player1 && game[3] == player1 && game[4] == ' ')
    {
        game[4] = player2;
        turn = 0;
        return turn;
    }
    else if (game[0] == player1 && game[1] == player1 && game[2] == player1 && game[4] == player1 && game[3] == ' ')
    {
        game[3] = player2;
        turn = 0;
        return turn;
    }
    else if (game[0] == player1 && game[1] == player1 && game[3] == player1 && game[4] == player1 && game[2] == ' ')
    {
        game[2] = player2;
        turn = 0;
        return turn;
    }
    else if (game[0] == player1 && game[2] == player1 && game[3] == player1 && game[4] == player1 && game[1] == ' ')
    {
        game[1] = player2;
        turn = 0;
        return turn;
    }
    if (game[1] == player1 && game[2] == player1 && game[3] == player1 && game[4] == player1 && game[0] == ' ')
    {
        game[0] = player2;
        turn = 0;
        return turn;
    }

    //5,6,7,8,9
    else if (game[5] == player1 && game[6] == player1 && game[7] == player2 && game[8] == player1 && game[9] == ' ')
    {
        game[9] = player2;
        turn = 0;
        return turn;
    }
    else if (game[5] == player1 && game[6] == player1 && game[7] == player1 && game[9] == player1 && game[8] == ' ')
    {
        game[8] = player2;
        turn = 0;
        return turn;
    }
    else if (game[5] == player1 && game[6] == player1 && game[8] == player1 && game[9] == player1 && game[7] == ' ')
    {
        game[7] = player2;
        turn = 0;
        return turn;
    }
    else if (game[5] == player1 && game[7] == player1 && game[8] == player1 && game[9] == player1 && game[6] == ' ')
    {
        game[6] = player2;
        turn = 0;
        return turn;
    }
    else if (game[6] == player1 && game[7] == player1 && game[8] == player1 && game[9] == player1 && game[5] == ' ')
    {
        game[5] = player2;
        turn = 0;
        return turn;
    }
 
    //10,11,12,13,14
    else if (game[10] == player1 && game[11] == player1 && game[12] == player1 && game[13] == player1 && game[14] == ' ')
    {
        game[14] = player2;
        turn = 0;
        return turn;
    }
    else if (game[10] == player1 && game[11] == player1 && game[12] == player1 && game[14] == player1 && game[13] == ' ')
    {
        game[13] = player2;
        turn = 0;
        return turn;
    }
    else if (game[10] == player1 && game[11] == player1 && game[13] == player1 && game[14] == player1 && game[12] == ' ')
    {
        game[12] = player2;
        turn = 0;
        return turn;
    }
    else if (game[10] == player1 && game[12] == player1 && game[13] == player1 && game[14] == player1 && game[11] == ' ')
    {
        game[11] = player2;
        turn = 0;
        return turn;
    }
    else if (game[11] == player1 && game[12] == player1 && game[13] == player1 && game[14] == player1 && game[10] == ' ')
    {
        game[10] = player2;
        turn = 0;
        return turn;
    }
    
    
    
    
    //15,16,17,18,19
    else if (game[15] == player1 && game[16] == player1 && game[17] == player1 && game[18] == player1 && game[19] == ' ')
    {
        game[19] = player2;
        turn = 0;
        return turn;
    }
    else if (game[15] == player1 && game[16] == player1 && game[17] == player1 && game[19] == player1 && game[18] == ' ')
    {
        game[18] = player2;
        turn = 0;
        return turn;
    }
    else if (game[15] == player1 && game[16] == player1 && game[18] == player1 && game[19] == player1 && game[17] == ' ')
    {
        game[17] = player2;
        turn = 0;
        return turn;
    }
    else if (game[15] == player1 && game[17] == player1 && game[18] == player1 && game[19] == player1 && game[16] == ' ')
    {
        game[16] = player2;
        turn = 0;
        return turn;
    }
    else if (game[16] == player1 && game[17] == player1 && game[18] == player1 && game[19] == player1 && game[15] == ' ')
    {
        game[15] = player2;
        turn = 0;
        return turn;
    }
    
    //20,21,22,23,24
    else if (game[20] == player1 && game[21] == player1 && game[22] == player1 && game[23] == player1 && game[24] == ' ')
    {
        game[24] = player2;
        turn = 0;
        return turn;
    }
    else if (game[20] == player1 && game[21] == player1 && game[22] == player1 && game[24] == player1 && game[23] == ' ')
    {
        game[23] = player2;
        turn = 0;
        return turn;
    }
    else if (game[20] == player1 && game[21] == player1 && game[23] == player1 && game[24] == player1 && game[22] == ' ')
    {
        game[22] = player2;
        turn = 0;
        return turn;
    
	}
	else if (game[20] == player1 && game[22] == player1 && game[23] == player1 && game[24] == player1 && game[21] == ' ')
    {
        game[21] = player2;
        turn = 0;
        return turn;
    }
    else if (game[21] == player1 && game[22] == player1 && game[23] == player1 && game[24] == player1 && game[20] == ' ')
    {
        game[20] = player2;
        turn = 0;
        return turn;
    }
 
    //0,5,10,15,20
    else if (game[0] == player1 && game[5] == player1 && game[10] == player1 && game[15] == player1 && game[20] == ' ')
    {
        game[20] = player2;
        turn = 0;
        return turn;
    }
    else if (game[0] == player1 && game[5] == player1 && game[10] == player1 && game[20] == player1 && game[15] == ' ')
    {
        game[15] = player2;
        turn = 0;
        return turn;
    }
    else if (game[0] == player1 && game[5] == player1 && game[15] == player1 && game[20] == player1 && game[10] == ' ')
    {
        game[10] = player2;
        turn = 0;
        return turn;
    }
    else if (game[0] == player1 && game[10] == player1 && game[15] == player1 && game[20] == player1 && game[5] == ' ')
    {
        game[5] = player2;
        turn = 0;
        return turn;
    }
    else if (game[5] == player1 && game[10] == player1 && game[15] == player1 && game[20] == player1 && game[0] == ' ')
    {
        game[0] = player2;
        turn = 0;
        return turn;
    }
   
    //1,6,11,16,21
    else if (game[1] == player1 && game[6] == player1 && game[11] == player1 && game[16] == player1 && game[21] == ' ')
    {
        game[21] = player2;
        turn = 0;
        return turn;
    }
    else if (game[1] == player1 && game[6] == player1 && game[11] == player1 && game[21] == player1 && game[16] == ' ')
    {
        game[16] = player2;
        turn = 0;
        return turn;
    }
    else if (game[1] == player1 && game[6] == player1 && game[16] == player1 && game[21] == player1 && game[11] == ' ')
    {
        game[11] = player2;
        turn = 0;
        return turn;
    }
	else if (game[1] == player1 && game[11] == player1 && game[16] == player1 && game[21] == player1 && game[6] == ' ')
    {
        game[6] = player2;
        turn = 0;
        return turn;
    } if (game[6] == player1 && game[11] == player1 && game[16] == player1 && game[21] == player1 && game[1] == ' ')
    {
        game[1] = player2;
        turn = 0;
        return turn;
    }
   
    //2,7,12,17,22
    else if (game[2] == player1 && game[7] == player1 && game[12] == player1 && game[17] == player1 && game[22] == ' ')
    {
        game[22] = player2;
        turn = 0;
        return turn;
    }
    else if (game[2] == player1 && game[7] == player1 && game[12] == player1 && game[22] == player1 && game[17] == ' ')
    {
        game[17] = player2;
        turn = 0;
        return turn;
    }
    else if (game[2] == player1 && game[7] == player1 && game[17] == player1 && game[22] == player1 && game[12] == ' ')
    {
        game[12] = player2;
        turn = 0;
        return turn;
    }
    else if (game[2] == player1 && game[12] == player1 && game[17] == player1 && game[22] == player1 && game[7] == ' ')
    {
        game[7] = player2;
        turn = 0;
        return turn;
    }
    else if (game[7] == player1 && game[12] == player1 && game[17] == player1 && game[22] == player1 && game[2] == ' ')
    {
        game[2] = player2;
        turn = 0;
        return turn;
    }

    //3,8,13,18,23
    else if (game[3] == player1 && game[8] == player1 && game[13] == player1 && game[18] == player1 && game[23] == ' ')
    {
        game[23] = player2;
        turn = 0;
        return turn;
    }
    else if (game[3] == player1 && game[8] == player1 && game[13] == player1 && game[23] == player1 && game[18] == ' ')
    {
        game[18] = player2;
        turn = 0;
        return turn;
    }
    else if (game[3] == player1 && game[8] == player1 && game[18] == player1 && game[23] == player1 && game[13] == ' ')
    {
        game[13] = player2;
        turn = 0;
        return turn;
    }
    else if (game[3] == player1 && game[13] == player1 && game[18] == player1 && game[23] == player1 && game[8] == ' ')
    {
        game[8] = player2;
        turn = 0;
        return turn;
    }
    else if (game[8] == player1 && game[13] == player1 && game[18] == player1 && game[23] == player1 && game[3] == ' ')
    {
        game[3] = player2;
        turn = 0;
        return turn;
    }
    
    //4,9,14,19,24
    else if (game[4] == player1 && game[9] == player1 && game[14] == player1 && game[19] == player1 && game[24] == ' ')
    {
        game[24] = player2;
        turn = 0;
        return turn;
    }
    else if (game[4] == player1 && game[9] == player1 && game[14] == player1 && game[24] == player1 && game[19] == ' ')
    {
        game[19] = player2;
        turn = 0;
        return turn;
    }
    else if (game[4] == player1 && game[9] == player1 && game[19] == player1 && game[24] == player1 && game[14] == ' ')
    {
        game[14] = player2;
        turn = 0;
        return turn;
    }
    else if (game[4] == player1 && game[14] == player1 && game[19] == player1 && game[24] == player1 && game[9] == ' ')
    {
        game[9] = player2;
        turn = 0;
        return turn;
    }
    else if (game[9] == player1 && game[14] == player1 && game[19] == player1 && game[24] == player1 && game[4] == ' ')
    {
        game[4] = player2;
        turn = 0;
        return turn;
    }
    
    //0,6,12,18,24
    else if (game[0] == player1 && game[6] == player1 && game[12] == player1 && game[18] == player1 && game[24] == ' ')
    {
        game[24] = player2;
        turn = 0;
        return turn;
    }
    else if (game[0] == player1 && game[6] == player1 && game[12] == player1 && game[24] == player1 && game[18] == ' ')
    {
        game[18] = player2;
        turn = 0;
        return turn;
    }
    else if (game[0] == player1 && game[6] == player1 && game[18] == player1 && game[24] == player1 && game[12] == ' ')
    {
        game[12] = player2;
        turn = 0;
        return turn;
    }
    else if (game[0] == player1 && game[12] == player1 && game[18] == player1 && game[24] == player1 && game[6] == ' ')
    {
        game[6] = player2;
        turn = 0;
        return turn;
    }
    else if (game[6] == player1 && game[12] == player1 && game[18] == player1 && game[24] == player1 && game[0] == ' ')
    {
        game[0] = player2;
        turn = 0;
        return turn;
    }
    
    //4,8,12,16,20
    else if (game[4] == player1 && game[8] == player1 && game[12] == player1 && game[16] == player1 && game[20] == ' ')
    {
        game[20] = player2;
        turn = 0;
        return turn;
    }
    else if (game[4] == player1 && game[8] == player1 && game[12] == player1 && game[20] == player1 && game[16] == ' ')
    {
        game[16] = player2;
        turn = 0;
        return turn;
    }
    else if (game[4] == player1 && game[8] == player1 && game[16] == player1 && game[20] == player1 && game[12] == ' ')
    {
        game[12] = player2;
        turn = 0;
        return turn;
    }
    else if (game[4] == player1 && game[12] == player1 && game[16] == player1 && game[20] == player1 && game[8] == ' ')
    {
        game[8] = player2;
        turn = 0;
        return turn;
    }
    else if (game[8] == player1 && game[12] == player1 && game[16] == player1 && game[20] == player1 && game[4] == ' ')
    {
        game[4] = player2;
        turn = 0;
        return turn;
    }
    else
        return -1;

}
int winPossible()
{
	//Modul untuk mencari celah agar dirinya (komputer) menang 
	//Initial State	: Program belum berjalan
	//Final State	: Komputer menginputkan langkah yang bisa diperkirakan menang
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: Nabiilah Nada Iswari
	//0,1,2,3,4
	if (game[0] == player2 && game[1] == player2 && game[2] == player2 && game[3] == player2 && game[4] == ' ')
    {
        game[4] = player2;
        turn = 0;
        return turn;
    }
    else if (game[0] == player2 && game[1] == player2 && game[2] == player2 && game[4] == player2 && game[3] == ' ')
    {
        game[3] = player2;
        turn = 0;
        return turn;
    }
	
    else if (game[0] == player2 && game[1] == player2 && game[3] == player2 && game[4] == player2 && game[2] == ' ')
    {
        game[2] = player2;
        turn = 0;
        return turn;
    }
    else if (game[0] == player2 && game[2] == player2 && game[3] == player2 && game[4] == player2 && game[1] == ' ')
    {
        game[1] = player2;
        turn = 0;
        return turn;
    }
    else if (game[1] == player2 && game[2] == player2 && game[3] == player2 && game[4] == player2 && game[0] == ' ')
    {
        game[0] = player2;
        turn = 0;
        return turn;
    }
    //5,6,7,8,9
    else if (game[5] == player2 && game[6] == player2 && game[7] == player2 && game[8] == player2 && game[9] == ' ')
    {
        game[9] = player2;
        turn = 0;
        return turn;
    }
    
    else if (game[5] == player2 && game[6] == player2 && game[7] == player2 && game[9] == player2 && game[8] == ' ')
    {
        game[8] = player2;
        turn = 0;
        return turn;
    }
    else if (game[5] == player2 && game[6] == player2 && game[8] == player2 && game[9] == player2 && game[7] == ' ')
    {
        game[7] = player2;
        turn = 0;
        return turn;
    }
    else if (game[5] == player2 && game[7] == player2 && game[8] == player2 && game[9] == player2 && game[6] == ' ')
    {
        game[6] = player2;
        turn = 0;
        return turn;
    }
    else if (game[6] == player2 && game[7] == player2 && game[8] == player2 && game[9] == player2 && game[5] == ' ')
    {
        game[5] = player2;
        turn = 0;
        return turn;
    }
    //10,11,12,13,14
    else if (game[10] == player2 && game[11] == player2 && game[12] == player2 && game[13] == player2 && game[14] == ' ')
    {
        game[14] = player2;
        turn = 0;
        return turn;
    }
    else if (game[10] == player2 && game[11] == player2 && game[12] == player2 && game[14] == player2 && game[13] == ' ')
    {
        game[13] = player2;
        turn = 0;
        return turn;
    }
    else if (game[10] == player2 && game[11] == player2 && game[13] == player2 && game[14] == player2 && game[12] == ' ')
    {
        game[12] = player2;
        turn = 0;
        return turn;
    }
    
    else if (game[10] == player2 && game[12] == player2 && game[13] == player2 && game[14] == player2 && game[11] == ' ')
    {
        game[11] = player2;
        turn = 0;
        return turn;
    }
    else if (game[11] == player2 && game[12] == player2 && game[13] == player2 && game[14] == player2 && game[10] == ' ')
    {
        game[10] = player2;
        turn = 0;
        return turn;
    }
    
    //15,16,17,18,19
    else if (game[15] == player2 && game[16] == player2 && game[17] == player2 && game[18] == player2 && game[19] == ' ')
    {
        game[19] = player2;
        turn = 0;
        return turn;
    }
    else if (game[15] == player2 && game[16] == player2 && game[17] == player2 && game[19] == player2 && game[18] == ' ')
    {
        game[18] = player2;
        turn = 0;
        return turn;
    }
    else if (game[15] == player2 && game[16] == player2 && game[18] == player2 && game[19] == player2 && game[17] == ' ')
    {
        game[17] = player2;
        turn = 0;
        return turn;
    }
    else if (game[15] == player2 && game[17] == player2 && game[18] == player2 && game[19] == player2 && game[16] == ' ')
    {
        game[16] = player2;
        turn = 0;
        return turn;
    }
    else if (game[16] == player2 && game[17] == player2 && game[18] == player2 && game[19] == player2 && game[15] == ' ')
    {
        game[15] = player2;
        turn = 0;
        return turn;
    }
    
    //20,21,22,23,24
    else if (game[20] == player2 && game[21] == player2 && game[22] == player2 && game[23] == player2 && game[24] == ' ')
    {
        game[24] = player2;
        turn = 0;
        return turn;
    }
    else if (game[20] == player2 && game[21] == player2 && game[22] == player2 && game[24] == player2 && game[23] == ' ')
    {
        game[23] = player2;
        turn = 0;
        return turn;
    }
    else if (game[20] == player2 && game[21] == player2 && game[23] == player2 && game[24] == player2 && game[22] == ' ')
    {
        game[22] = player2;
        turn = 0;
        return turn;
    }
    else if (game[20] == player2 && game[22] == player2 && game[23] == player2 && game[24] == player2 && game[21] == ' ')
    {
        game[21] = player2;
        turn = 0;
        return turn;
    }
    else if (game[21] == player2 && game[22] == player2 && game[23] == player2 && game[24] == player2 && game[20] == ' ')
    {
        game[20] = player2;
        turn = 0;
        return turn;
    }
    
    //0,5,10,15,20
    else if (game[0] == player2 && game[5] == player2 && game[10] == player2 && game[15] == player2 && game[20] == ' ')
    {
        game[20] = player2;
        turn = 0;
        return turn;
    }
    else if (game[0] == player2 && game[5] == player2 && game[10] == player2 && game[20] == player2 && game[15] == ' ')
    {
        game[15] = player2;
        turn = 0;
        return turn;
    }
    else if (game[0] == player2 && game[5] == player2 && game[15] == player2 && game[20] == player2 && game[10] == ' ')
    {
        game[10] = player2;
        turn = 0;
        return turn;
    }
    else if (game[0] == player2 && game[10] == player2 && game[15] == player2 && game[20] == player2 && game[5] == ' ')
    {
        game[5] = player2;
        turn = 0;
        return turn;
    }
    else if (game[5] == player2 && game[10] == player2 && game[15] == player2 && game[20] == player2 && game[0] == ' ')
    {
        game[0] = player2;
        turn = 0;
        return turn;
    }
    
    //1,6,11,16,21
    else if (game[1] == player2 && game[6] == player2 && game[11] == player2 && game[16] == player2 && game[21] == ' ')
    {
        game[21] = player2;
        turn = 0;
        return turn;
    }
    else if (game[1] == player2 && game[6] == player2 && game[11] == player2 && game[21] == player2 && game[16] == ' ')
    {
        game[16] = player2;
        turn = 0;
        return turn;
    }
    else if (game[1] == player2 && game[6] == player2 && game[16] == player2 && game[21] == player2 && game[11] == ' ')
    {
        game[11] = player2;
        turn = 0;
        return turn;
    }
    else if (game[1] == player2 && game[11] == player2 && game[16] == player2 && game[21] == player2 && game[6] == ' ')
    {
        game[6] = player2;
        turn = 0;
        return turn;
    }
    else if (game[6] == player2 && game[11] == player2 && game[16] == player2 && game[21] == player2 && game[1] == ' ')
    {
        game[1] = player2;
        turn = 0;
        return turn;
    }

    //2,7,12,17,22
    else if (game[2] == player2 && game[7] == player2 && game[12] == player2 && game[17] == player2 && game[22] == ' ')
    {
        game[22] = player2;
        turn = 0;
        return turn;
    }
    else if (game[2] == player2 && game[7] == player2 && game[12] == player2 && game[22] == player2 && game[17] == ' ')
    {
        game[17] = player2;
        turn = 0;
        return turn;
    }
    else if (game[2] == player2 && game[7] == player2 && game[17] == player2 && game[22] == player2 && game[12] == ' ')
    {
        game[12] = player2;
        turn = 0;
        return turn;
    }
    else if (game[2] == player2 && game[12] == player2 && game[17] == player2 && game[22] == player2 && game[7] == ' ')
    {
        game[7] = player2;
        turn = 0;
        return turn;
    }
    else if (game[7] == player2 && game[12] == player2 && game[17] == player2 && game[22] == player2 && game[2] == ' ')
    {
        game[2] = player2;
        turn = 0;
        return turn;
    }
    
    //3,8,13,18,23
    else if (game[3] == player2 && game[8] == player2 && game[13] == player2 && game[18] == player2 && game[23] == ' ')
    {
        game[23] = player2;
        turn = 0;
        return turn;
    }
    else if (game[3] == player2 && game[8] == player2 && game[13] == player2 && game[23] == player2 && game[18] == ' ')
    {
        game[18] = player2;
        turn = 0;
        return turn;
    }
    else if (game[3] == player2 && game[8] == player2 && game[18] == player2 && game[23] == player2 && game[13] == ' ')
    {
        game[13] = player2;
        turn = 0;
        return turn;
    }
    else if (game[3] == player2 && game[13] == player2 && game[18] == player2 && game[23] == player2 && game[8] == ' ')
    {
        game[8] = player2;
        turn = 0;
        return turn;
    }
    else if (game[8] == player2 && game[13] == player2 && game[18] == player2 && game[23] == player2 && game[3] == ' ')
    {
        game[3] = player2;
        turn = 0;
        return turn;
    }
    
    //4,9,14,19,24
    else if (game[4] == player2 && game[9] == player2 && game[14] == player2 && game[19] == player2 && game[24] == ' ')
    {
        game[24] = player2;
        turn = 0;
        return turn;
    }
    else if (game[4] == player2 && game[9] == player2 && game[14] == player2 && game[24] == player2 && game[19] == ' ')
    {
        game[19] = player2;
        turn = 0;
        return turn;
    }
    else if (game[4] == player2 && game[9] == player2 && game[19] == player2 && game[24] == player2 && game[14] == ' ')
    {
        game[14] = player2;
        turn = 0;
        return turn;
    }
    else if (game[4] == player2 && game[14] == player2 && game[19] == player2 && game[24] == player2 && game[9] == ' ')
    {
        game[9] = player2;
        turn = 0;
        return turn;
    }
    else if (game[9] == player2 && game[14] == player2 && game[19] == player2 && game[24] == player2 && game[4] == ' ')
    {
        game[4] = player2;
        turn = 0;
        return turn;
    }
    
    //0,6,12,18,24
    else if (game[0] == player2 && game[6] == player2 && game[12] == player2 && game[18] == player2 && game[24] == ' ')
    {
        game[24] = player2;
        turn = 0;
        return turn;
    }
    else if (game[0] == player2 && game[6] == player2 && game[12] == player2 && game[24] == player2 && game[18] == ' ')
    {
        game[18] = player2;
        turn = 0;
        return turn;
    }
    else if (game[0] == player2 && game[6] == player2 && game[18] == player2 && game[24] == player2 && game[12] == ' ')
    {
        game[12] = player2;
        turn = 0;
        return turn;
    }
    else if (game[0] == player2 && game[12] == player2 && game[18] == player2 && game[24] == player2 && game[6] == ' ')
    {
        game[6] = player2;
        turn = 0;
        return turn;
    }
    else if (game[6] == player2 && game[12] == player2 && game[18] == player2 && game[24] == player2 && game[0] == ' ')
    {
        game[0] = player2;
        turn = 0;
        return turn;
    }
  
    //4,8,12,16,20
    else if (game[4] == player2 && game[8] == player2 && game[12] == player2 && game[16] == player2 && game[20] == ' ')
    {
        game[20] = player2;
        turn = 0;
        return turn;
    }
    else if (game[4] == player2 && game[8] == player2 && game[12] == player2 && game[20] == player2 && game[16] == ' ')
    {
        game[16] = player2;
        turn = 0;
        return turn;
    }
    else if (game[4] == player2 && game[8] == player2 && game[16] == player2 && game[20] == player2 && game[12] == ' ')
    {
        game[12] = player2;
        turn = 0;
        return turn;
    }
    else if (game[4] == player2 && game[12] == player2 && game[16] == player2 && game[20] == player2 && game[8] == ' ')
    {
        game[8] = player2;
        turn = 0;
        return turn;
    }
    else if (game[8] == player2 && game[12] == player2 && game[16] == player2 && game[20] == player2 && game[4] == ' ')
    {
        game[4] = player2;
        turn = 0;
        return turn;
    }  
    else
        return -1;

}
void displayBoard()
{
	//Modul untuk menampilkan papan ukuran 5x5 
	//Initial State	: Program belum berjalan
	//Final State	: Terlihattampilan papan ukuran 5x5
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: Nabiilah Nada Iswari
	system("cls");
	system ("color 2");
	printf("+---------------+---------------+----------------+---------------+----------------+\n");
	printf("|		|		|	 	 |		|	 	 |\n");
	printf("|	%c	|	%c	|	%c	 |	%c	|	%c	 |\n",game[0],game[1],game[2],game[3],game[4]);
	printf("|		|		|		 |		|	 	 |\n");
	printf("+---------------+---------------+----------------+---------------+----------------+\n");
	printf("|		|		|		 |		|	 	 |\n");
	printf("|	%c	|	%c	|	%c	 |	%c	|	%c	 |\n",game[5],game[6],game[7],game[8],game[9]);
	printf("|		|		|		 |		|	 	 |\n");
	printf("+---------------+---------------+----------------+---------------+----------------+\n");	
	printf("|		|		|		 |		|	 	 |\n");
	printf("|	%c	|	%c	|	%c	 |	%c	|	%c	 |\n",game[10],game[11],game[12],game[13],game[14]);
	printf("|		|		|		 |		|	 	 |\n");
	printf("+---------------+---------------+----------------+---------------+----------------+\n");
	printf("|		|		|		 |		|	 	 |\n");
	printf("|	%c	|	%c	|	%c	 |	%c	|	%c	 |\n",game[15],game[16],game[17],game[18],game[19]);
	printf("|		|		|		 |		|	 	 |\n");
	printf("+---------------+---------------+----------------+---------------+----------------+\n");
	printf("|		|		|		 |		|	 	 |\n");
	printf("|	%c	|	%c	|	%c	 |	%c	|	%c	 |\n",game[20],game[21],game[22],game[23],game[24]);
	printf("|		|		|		 |		|	 	 |\n");
	printf("+---------------+---------------+----------------+---------------+----------------+\n");
}
int checkWinner()
{
	//Modul untuk mengecek keadaan papan yang menang
	//Initial State	: Program belum berjalan
	//Final State	: Papan yang sudah dicek 
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: Nabiilah Nada Iswari
	//0,1,2,3,4
    if(game[0] == game[1] && game[1] == game[2] && game[2] == game[3] && game[3] == game[4] && game[0] != ' ')
    {
        return 1;
    }
    //5,6,7,8,9
    else if (game[5] == game[6] && game[6] == game[7] && game[7] == game[8] && game[8] == game[9] && game[5] != ' ')
    {
        return 1;
    }
    //10,11,12,13,14
    else if (game[10] == game[11] && game[11] == game[12] && game[12] == game[13] && game[13] == game[14] && game[10] != ' ')
    {
        return 1;
    }
    //15,16,17,18,19
    else if (game[15] == game[16] && game[16] == game[17] && game[17] == game[18] && game[18] == game[19] && game[15] != ' ')
    {
        return 1;
    }
    //20,21,22,23,24
    else if (game[20] == game[21] && game[21] == game[22] && game[22] == game[23] && game[23] == game[24] && game[20] != ' ')
    {
        return 1;
    }
    //0,5,10,15,20
    else if (game[0] == game[5] && game[5] == game[10] && game[10] == game[15] && game[15] == game[20] && game[0] != ' ')
    {
        return 1;
    }
    //1,6,11,16,21
    else if (game[1] == game[6] && game[6] == game[11] && game[11] == game[16] && game[16] == game[21] && game[1] != ' ')
    {
        return 1;
    }
    //2,7,12,17,22
    else if (game[2] == game[7] && game[7] == game[12] && game[12] == game[17] && game[17] == game[22] && game[2] != ' ')
    {
        return 1;
    }
    //3,8,13,18,23
    else if (game[3] == game[8] && game[8] == game[13] && game[13] == game[18] && game[18] == game[23] && game[3] != ' ')
    {
        return 1;
    }
    //4,9,14,19,24
    else if (game[4] == game[9] && game[9] == game[14] && game[14] == game[19] && game[19] == game[24] && game[4] != ' ')
    {
        return 1;
    }
    //0,6,12,18,24
    else if (game[0] == game[6] && game[6] == game[12] && game[12] == game[18] && game[18] == game[24] && game[0] != ' ')
    {
        return 1;
    }
    //4,8,12,16,20
    else if (game[4] == game[8] && game[8] == game[12] && game[12] == game[16] && game[16] == game[20] && game[4] != ' ')
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
void displayMenu()
{
	//Modul untuk menampilkan menu memilih simbol
	//Initial State	: Program belum berjalan
	//Final State	: Terlihat pilihan menu di layar, dimana user bisa memilih modul mana yang ingin dieksekusi
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: -
	system("cls");
	system ("color 2");
    int choice;
    printf("			+-----------------------------------------------------------------------+\n");
    printf("			|			     *** * MENU * ***				|\n");
    printf("			|              		  Player1 Choose Symbol				|\n");
    printf("			|              		  1. Play with 'X' 				|\n");
    printf("			|              		  2. Play with 'O'  				|\n");
    printf("			|              		  3. Quit Game 					|\n");
    printf("			+-----------------------------------------------------------------------+\n");
    printf("			|Please select: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
    	system("cls");
        player1 = 'X'; player2 = 'O';
        printf("			|Player 1 %s: %c \nPlayer 2 %s: %c", p1name, player1, p2name, player2);
    }
    else if (choice == 2)
    {
    	system("cls");
        player1 = 'O'; player2 = 'X';
        printf("			|Player 1 %s: %c \nPlayer 2%s: %c", p1name, player1, p1name, player2);
    }
    else if (choice == 3)
    {
        printf("Quiting");
        exit(0);
    }
    else
    {
    	system("cls");
        printf("			|\aInvalid Choice! Enter a digit (1 to 3)\n");
        displayMenu();
    }
}
void gameMode()
{
	//Modul untuk menampilkan menu memilih musuh/ lawan
	//Initial State	: Program belum berjalan
	//Final State	: Terlihat pilihan menu di layar, dimana user bisa memilih modul mana yang ingin dieksekusi
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: Dimas Wisnu Saputro
	system("cls");
	system ("color 2");
    int n;
    printf("			+-----------------------------------------------------------------------+\n");
	printf("			| 			WELCOME TO TIC TAC TOE				|\n");
    printf("			+-----------------------------------------------------------------------+\n");
    printf("			| 			   CHOOSE GAME MODE: 				|\n");
    printf("			|		     1. Human vs Human (2 player)			|\n");
    printf("			|		     2. Human vs Computer (Single player)		|\n");
    printf("			|		     3. Quit						|\n");
	printf("			+-----------------------------------------------------------------------+\n");
	printf("			|Please select: ");
    scanf("%d", &n);
    if (n == 1)
    {
        mode = 0;
        printf("			|Human VS Human								\n");
        printf("			+-----------------------------------------------------------------------+\n");
        printf("			|Player 1: Enter Your Name:");
		fflush(stdin);
		gets(p1name);
		printf("			|Player 2: Enter Your Name:");
		fflush(stdin);
		gets(p2name);
    }
    else if(n == 2)
    {
        mode = 1;
        printf("			|Human VS Computer							|\n");
        printf("			+-----------------------------------------------------------------------+\n");
        printf("			|Player 1: Enter Your Name:");
		fflush(stdin);
		gets(p1name);
		PilihanKesulitan5x5();
    }
    else if(n == 3)
    {
        exit(0);
    }
    else
    {
        printf("			|\aInvalid Choice, enter a digit (1 to 3).\n");
    }
}
void PilihanKesulitan5x5()
{
	//Modul untuk menampilkan menu memilih tingkat kesulitan
	//Initial State	: Program belum berjalan
	//Final State	: Terlihat pilihan menu di layar, dimana user bisa memilih modul mana yang ingin dieksekusi
	//Author		: Dimas Wisnu Saputro
	//Modifided by	: -
	system ("color 2");
	int kesul1tan;
	printf ("\n\t\t\t1. Easy");
	printf ("\n\t\t\t2. Medium");
	printf ("\n\t\t\t3. Hard");
	printf ("\n\t\t\tPlease select: ");
	scanf("%d", &kesul1tan);
}
				//7x7
		
void main7()
{
	//Modul untuk menampilkan papan kosong dan memanggil modul menu memilih musuh, menu memilih simbol, dan modul untuk cek syarat berapa kotak yang harus diisi jika ingin mendapatkan score
	//Initial State	: Program belun berjalan menu memilih musuh, menu memilih simbol, dan modul untuk cek syarat berapa kotak yang harus diisi jika ingin mendapatkan score
	//Final State	: Memanggil modul 
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: Nabiilah Nada Iswari
    trn = 0;
    int i = 0;
    for(i = 0; i < 49; i++)
    {
        gm[i] = ' ';
    }
    gmMd();
    dispMenu();
    letsStart();
}
void letsStart()
{
	//Modul untuk cek syarat berapa kotak yang harus diisi jika ingin mendapatkan score
	//Initial State	: Program belun berjalan
	//Final State	: Mendapatkan score
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: Nabiilah Nada Iswari
    int i = 0;
    char reset;
    for(i=0; i<49; i++)
    {
        Board();
        system ("color 1");
        if (i > 8)
        {
            if(checkW1nner() == 1)
            {
                if(trn == 0 && md == 1)
                {
                    printf("\n\n\tComputer WINS!!!\n\n");
                    printf("\nPress Y if you want to Reset\n");
      				scanf(" %c",&reset);
      				if (reset == 'Y'){
						system ("cls");
						main7();
					}
					else if (reset != 'Y')
					{
						break;
					}
                }
                else if(trn == 0 && md == 0)
                {
                    printf("\n\n\t\tPlayer 2 %s WINS!!!\n\n",p2nm);
                    score.score = (10*1);
      				menyimpanscore();
      				printf("\nPress Y if you want to Reset\n");
      				scanf(" %c",&reset);
      				if (reset == 'Y'){
						system ("cls");
						main7();
					}
					else if (reset != 'Y')
					{
						break;
					}
                }
                else
                {
                    printf("\n\n\t\tPlayer 1 %s WINS!!!\n\n",p1nm);
                    score.score = (10*1);
      				menyimpanscore();
                    printf("\nPress Y if you want to Reset\n");
      				scanf(" %c",&reset);
      				if (reset == 'Y'){
						system ("cls");
						main7();
					}
					else if (reset != 'Y')
					{
						break;
					}
                }
            }
        }
        if(trn == 0)
        {
            humanTrn();
        }
        else if(trn == 1)
        {

            if(md == 1)
            {
                compTrn();
            }
            else if (md == 0)
            {
                player2Trn();
            }
        }

    }

    if(i==49 && checkW1nner() == 0)
    {
        Board();
        printf("\n\n\tGame DRAW!!!\n\n");
        printf("\nPress Y if you want to Reset\n");
      				scanf(" %c",&reset);
      				if (reset == 'Y'){
						system ("cls");
						main7();
					}
					else if (reset != 'Y')
					{
						printf("\nInvalid Choice, enter a digit Y.\n");
					}
    }
}
void humanTrn()
{
	//Modul untuk langkah manusia 
	//Initial State	: Program belum berjalan
	//Final State	: User menginputkan langkah
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: Nabiilah Nada Iswari dan Fanny Putria Agustina
	system ("color 1");
    int n;
    printf("\nPlayer 1 %s turn! \nEnter a number (1 to 49).\n",p1nm);
    int waktu_awal = clock();
    scanf("%d",&n);
    int waktu_akhir = clock();
    if (waktu_akhir - waktu_awal > 5000){
    	printf ("Input time is MORE THAN  5 seconds ");
    		system ("pause");
    		system ("cls");
    		Board();
	}
    if (gm[n-1] == ' ')
    {
        gm[n-1] = p1;
        trn++;
    }
    else
    {
        printf("\n\t\a ** * Choose an empty space on board * **\n");
        humanTrn();
    }
}
void compTrn()
{
	//Modul untuk langkah manusia 
	//Initial State	: Program belum berjalan
	//Final State	: Komputer menginputkan langkah
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: Nabiilah Nada Iswari, Fanny Putria Agustina, Dimas Wisnu Saputro
    system ("color 1");
	int option=1;
    printf("\n Computer's turn\n");
    if(kesulit4n==3){
    	option = winPssbl();	
	}
    if(option != 0)
    {
        int option2=1;
        if(kesulit4n>=2){
        	option2 = notLetHWin(); 
		}
		
        if (option2 != 0 && gm[24] == ' ')
        {
            gm[24] = p2;
        }
        else  if (option2 != 0 && gm[1] == ' ')
        {
            gm[1] = p2;
    	}
    	else if (option2 != 0 && gm[9] == ' ')
        {
            gm[9] = p2;
        }
        else if (option2 != 0 && gm[3] == ' ')
        {
            gm[3] = p2;
        }
        else if (option2 != 0 && gm[5] == ' ')
        {
            gm[5] = p2;
        }
        else if (option2 != 0 && gm[7] == ' ')
        {
            gm[7] = p2;
        }
        else if (option2 != 0 && gm[11] == ' ')
        {
            gm[11] = p2;
        }
        else if (option2 != 0 && gm[13] == ' ')
        {
            gm[13] = p2;
        }
        else if (option2 != 0 && gm[15] == ' ')
        {
            gm[15] = p2;
        }
        else if (option2 != 0 && gm[17] == ' ')
        {
            gm[17] = p2;
        }
        else if (option2 != 0 && gm[19] == ' ')
        {
            gm[19] = p2;
        }
        else if (option2 != 0 && gm[21] == ' ')
        {
            gm[21] = p2;
        }
        else if (option2 != 0 && gm[23] == ' ')
        {
            gm[23] = p2;
        }
        else if (option2 != 0 && gm[25] == ' ')
        {
            gm[25] = p2;
        }
        else if (option2 != 0 && gm[27] == ' ')
        {
            gm[27] = p2;
        }
        else if (option2 != 0 && gm[29] == ' ')
        {
            gm[29] = p2;
        }
        else if (option2 != 0 && gm[31] == ' ')
        {
            gm[31] = p2;
        }
        else if (option2 != 0 && gm[33] == ' ')
        {
            gm[33] = p2;
        }
        else if (option2 != 0 && gm[35] == ' ')
        {
            gm[35] = p2;
        }
        else if (option2 != 0 && gm[37] == ' ')
        {
            gm[37] = p2;
        }
        else if (option2 != 0 && gm[39] == ' ')
        {
            gm[39] = p2;
        }
        else if (option2 != 0 && gm[41] == ' ')
        {
            gm[41] = p2;
        }
        else if (option2 != 0 && gm[43] == ' ')
        {
            gm[43] = p2;
        }
		else if (option2 != 0 && gm[45] == ' ')
        {
            gm[45] = p2;
        }
		else if (option2 != 0 && gm[47] == ' ')
        {
            gm[47] = p2;
        }
        else if (option2 != 0 && gm[0] == ' ')
        {
            gm[0] = p2;
        }
        else if (option2 != 0 && gm[8] == ' ')
        {
            gm[8] = p2;
        }
        else if (option2 != 0 && gm[16] == ' ')
        {
            gm[16] = p2;
        }
        else if (option2 != 0 && gm[32] == ' ')
        {
            gm[32] = p2;
        }
        else if (option2 != 0 && gm[40] == ' ')
        {
            gm[40] = p2;
        }
        else if (option2 != 0 && gm[48] == ' ')
        {
            gm[48] = p2;
        }
        else if (option2 != 0 && gm[42] == ' ')
        {
            gm[42] = p2;
        }
        else if (option2 != 0 && gm[36] == ' ')
        {
            gm[36] = p2;
        }
		else if (option2 != 0 && gm[30] == ' ')
        {
            gm[30] = p2;
        }
		else if (option2 != 0 && gm[18] == ' ')
        {
            gm[18] = p2;
        }
		else if (option2 != 0 && gm[12] == ' ')
        {
            gm[12] = p2;
        }
		else if (option2 != 0 && gm[6] == ' ')
        {
            gm[6] = p2;
        }
        else if (option2 != 0 && gm[2] == ' ')
        {
            gm[2] = p2;
        }
        else if (option2 != 0 && gm[4] == ' ')
        {
            gm[4] = p2;
        }
        else if (option2 != 0 && gm[10] == ' ')
        {
            gm[10] = p2;
        }
        else if (option2 != 0 && gm[14] == ' ')
        {
            gm[14] = p2;
        }
        else if (option2 != 0 && gm[20] == ' ')
        {
            gm[20] = p2;
        }
        else if (option2 != 0 && gm[22] == ' ')
        {
            gm[22] = p2;
        }
        else if (option2 != 0 && gm[26] == ' ')
        {
            gm[26] = p2;
        }
        else if (option2 != 0 && gm[28] == ' ')
        {
            gm[28] = p2;
        }
        else if (option2 != 0 && gm[34] == ' ')
        {
            gm[34] = p2;
        }
        else if (option2 != 0 && gm[38] == ' ')
        {
            gm[38] = p2;
        }
        else if (option2 != 0 && gm[44] == ' ')
        {
            gm[44] = p2;
        }
        else if (option2 != 0 && gm[46] == ' ')
        {
            gm[46] = p2;
        }
        trn = 0;
    }
}
void player2Trn()
{
	//Modul untuk langkah manusia 
	//Initial State	: Program belum berjalan
	//Final State	: User menginputkan langkah
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: Nabiilah Nada Iswari dan Fanny Putria Agustina
	system ("color 1");
    int n;
    printf("\nPlayer 2 %s Turn! \nEnter a number (1 to 49).\n",p2nm);
    int waktu_awal = clock();
    scanf("%d",&n);
    int waktu_akhir = clock();
    if (waktu_akhir - waktu_awal > 5000){
    	printf ("Input time is MORE THAN  5 seconds ");
    		system ("pause");
    		system ("cls");
    		Board();
	}
    if (gm[n-1] == ' ')
    {
        gm[n-1] = p2;
        trn = 0;
    }
    else
    {
        printf("\n\t\a ** * Choose an empty space on board * **\n");
        player2Trn();
    }
}
int notLetHWin()
{
	//Modul untuk memblock langkah player1 (human/ manusia) 
	//Initial State	: Program belum berjalan
	//Final State	: Komputer memblock langkah player1 (human/ manusia)
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: Nabiilah Nada Iswari
	//0,1,2,3,4,5,6
	if (gm[0] == p1 && gm[1] == p1 && gm[2] == p1 && gm[3] == p1 && gm[4] == p1 && gm[5] == p1 && gm[6] == ' ')
    {
        gm[6] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[0] == p1 && gm[1] == p1 && gm[2] == p1 && gm[3] == p1 && gm[4] == p1 && gm[6] == p1 && gm[5] == ' ')
    {
        gm[5] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[0] == p1 && gm[1] == p1 && gm[2] == p1 && gm[3] == p1 && gm[5] == p1 && gm[6] == p1 && gm[4] == ' ')
    {
        gm[4] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[0] == p1 && gm[1] == p1 && gm[2] == p1 && gm[4] == p1 && gm[5] == p1 && gm[6] == p1 && gm[3] == ' ')
    {
        gm[3] = p2;
        trn = 0;
        return trn;
	}
    else if (gm[0] == p1 && gm[1] == p1 && gm[3] == p1 && gm[4] == p1 && gm[5] == p1 && gm[6] == p1 && gm[2] == ' ')
    {
        gm[2] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[0] == p1 && gm[2] == p1 && gm[3] == p1 && gm[4] == p1 && gm[5] == p1 && gm[6] == p1 && gm[1] == ' ')
    {
        gm[1] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[1] == p1 && gm[2] == p1 && gm[3] == p1 && gm[4] == p1 && gm[5] == p1 && gm[6] == p1 && gm[0] == ' ')
    {
        gm[0] = p2;
        trn = 0;
        return trn;
    }
    //7,8,9,10,11,12,13
    else if (gm[7] == p1 && gm[8] == p1 && gm[9] == p1 && gm[10] == p1  && gm[11] == p1 && gm[12] == p1 && gm[13] == ' ')
    {
        gm[13] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[7] == p1 && gm[8] == p1 && gm[9] == p1 && gm[10] == p1  && gm[11] == p1 && gm[13] == p1 && gm[12] == ' ')
    {
        gm[12] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[7] == p1 && gm[8] == p1 && gm[9] == p1 && gm[10] == p1  && gm[12] == p1 && gm[13] == p1 && gm[11] == ' ')
    {
        gm[11] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[7] == p1 && gm[8] == p1 && gm[9] == p1 && gm[11] == p1  && gm[12] == p1 && gm[13] == p1 && gm[10] == ' ')
	{
        gm[10] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[7] == p1 && gm[8] == p1 && gm[10] == p1 && gm[11] == p1  && gm[12] == p1 && gm[13] == p1 && gm[9] == ' ')
    {
        gm[9] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[7] == p1 && gm[9] == p1 && gm[10] == p1 && gm[11] == p1  && gm[12] == p1 && gm[13] == p1 && gm[8] == ' ')
    {
        gm[8] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[8] == p1 && gm[9] == p1 && gm[10] == p1 && gm[11] == p1  && gm[12] == p1 && gm[13] == p1 && gm[7] == ' ')
    {
        gm[7] = p2;
        trn = 0;
        return trn;
    }
    //14,15,16,17,18,19,20
    else if (gm[14] == p1 && gm[15] == p1 && gm[16] == p1 && gm[17] == p1 && gm[18] == p1 && gm[19] == p1 && gm[20] == ' ')
    {
        gm[20] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[14] == p1 && gm[15] == p1 && gm[16] == p1 && gm[17] == p1 && gm[18] == p1 && gm[20] == p1 && gm[19] == ' ')
    {
        gm[19] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[14] == p1 && gm[15] == p1 && gm[16] == p1 && gm[17] == p1 && gm[19] == p1 && gm[20] == p1 && gm[18] == ' ')
    {
        gm[18] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[14] == p1 && gm[15] == p1 && gm[16] == p1 && gm[18] == p1 && gm[19] == p1 && gm[20] == p1 && gm[17] == ' ')
    {
        gm[17] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[14] == p1 && gm[15] == p1 && gm[17] == p1 && gm[18] == p1 && gm[19] == p1 && gm[20] == p1 && gm[16] == ' ')
    {
        gm[16] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[14] == p1 && gm[16] == p1 && gm[17] == p1 && gm[18] == p1 && gm[19] == p1 && gm[20] == p1 && gm[15] == ' ')
    {
        gm[15] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[15] == p1 && gm[16] == p1 && gm[17] == p1 && gm[18] == p1 && gm[19] == p1 && gm[20] == p1 && gm[14] == ' ')
    {
        gm[14] = p2;
        trn = 0;
        return trn;
    }
    //21,22,23,24,25,26,27
    else if (gm[21] == p1 && gm[22] == p1 && gm[23] == p1 && gm[24] == p1 && gm[25] == p1 && gm[26] == p1 && gm[27] == ' ')
    {
        gm[27] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[21] == p1 && gm[22] == p1 && gm[23] == p1 && gm[24] == p1 && gm[25] == p1 && gm[27] == p1 && gm[26] == ' ')
    {
        gm[26] = p2;
        trn = 0;
        return trn;
    }
	else if (gm[21] == p1 && gm[22] == p1 && gm[23] == p1 && gm[24] == p1 && gm[26] == p1 && gm[27] == p1 && gm[25] == ' ')
    {
        gm[25] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[21] == p1 && gm[22] == p1 && gm[23] == p1 && gm[25] == p1 && gm[26] == p1 && gm[27] == p1 && gm[24] == ' ')
    {
        gm[24] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[21] == p1 && gm[22] == p1 && gm[24] == p1 && gm[25] == p1 && gm[26] == p1 && gm[27] == p1 && gm[23] == ' ')
    {
        gm[23] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[21] == p1 && gm[23] == p1 && gm[24] == p1 && gm[25] == p1 && gm[26] == p1 && gm[27] == p1 && gm[22] == ' ')
    {
        gm[22] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[22] == p1 && gm[23] == p1 && gm[24] == p1 && gm[25] == p1 && gm[26] == p1 && gm[27] == p1 && gm[21] == ' ')
    {
        gm[21] = p2;
        trn = 0;
        return trn;
    }
    //28,29,30,31,32,33,34
    else if (gm[28] == p1 && gm[29] == p1 && gm[30] == p1 && gm[31] == p1 && gm[32] == p1 && gm[33] == p1 && gm[34] == ' ')
    {
        gm[34] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[28] == p1 && gm[29] == p1 && gm[30] == p1 && gm[31] == p1 && gm[32] == p1 && gm[34] == p1 && gm[33] == ' ')
    {
        gm[33] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[28] == p1 && gm[29] == p1 && gm[30] == p1 && gm[31] == p1 && gm[33] == p1 && gm[34] == p1 && gm[32] == ' ')
    {
        gm[32] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[28] == p1 && gm[29] == p1 && gm[30] == p1 && gm[32] == p1 && gm[33] == p1 && gm[34] == p1 && gm[31] == ' ')
    {
    	gm[31] = p2;
        trn = 0;
        return trn;
	}
    else if (gm[28] == p1 && gm[29] == p1 && gm[31] == p1 && gm[32] == p1 && gm[33] == p1 && gm[34] == p1 && gm[30] == ' ')
    {
        gm[30] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[28] == p1 && gm[30] == p1 && gm[31] == p1 && gm[32] == p1 && gm[33] == p1 && gm[34] == p1 && gm[29] == ' ')
    {
        gm[29] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[29] == p1 && gm[30] == p1 && gm[31] == p1 && gm[32] == p1 && gm[33] == p1 && gm[34] == p1 && gm[28] == ' ')
    {
        gm[28] = p2;
        trn = 0;
        return trn;
    }
    //35,36,37,38,39,40,41
	else if (gm[35] == p1 && gm[36] == p1 && gm[37] == p1 && gm[38] == p1 && gm[39] == p1 && gm[40] == p1 && gm[41] == ' ')
    {
        gm[41] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[35] == p1 && gm[36] == p1 && gm[37] == p1 && gm[38] == p1 && gm[39] == p1 && gm[41] == p1 && gm[40] == ' ')
    {
        gm[40] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[35] == p1 && gm[36] == p1 && gm[37] == p1 && gm[38] == p1 && gm[40] == p1 && gm[41] == p1 && gm[39] == ' ')
    {
        gm[39] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[35] == p1 && gm[36] == p1 && gm[37] == p1 && gm[39] == p1 && gm[40] == p1 && gm[41] == p1 && gm[38] == ' ')
    {
        gm[38] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[35] == p1 && gm[36] == p1 && gm[38] == p1 && gm[39] == p1 && gm[40] == p1 && gm[41] == p1 && gm[37] == ' ')
    {
        gm[37] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[35] == p1 && gm[37] == p1 && gm[38] == p1 && gm[39] == p1 && gm[40] == p1 && gm[41] == p1 && gm[36] == ' ')
    {
        gm[36] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[36] == p1 && gm[37] == p1 && gm[38] == p1 && gm[39] == p1 && gm[40] == p1 && gm[41] == p1 && gm[35] == ' ')
	{
        gm[35] = p2;
        trn = 0;
        return trn;
    }
   //42,43,44,45,46,47,48
   else if (gm[42] == p1 && gm[43] == p1 && gm[44] == p1 && gm[45] == p1 && gm[46] == p1 && gm[47] == p1 && gm[48] == ' ')
    {
        gm[48] = p2;
        trn = 0;
        return trn;
    }
	else if (gm[42] == p1 && gm[43] == p1 && gm[44] == p1 && gm[45] == p1 && gm[46] == p1 && gm[48] == p1 && gm[47] == ' ')
    {
        gm[47] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[42] == p1 && gm[43] == p1 && gm[44] == p1 && gm[45] == p1 && gm[47] == p1 && gm[48] == p1 && gm[46] == ' ')
    {
        gm[46] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[42] == p1 && gm[43] == p1 && gm[44] == p1 && gm[46] == p1 && gm[47] == p1 && gm[48] == p1 && gm[45] == ' ')
    {
        gm[45] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[42] == p1 && gm[43] == p1 && gm[45] == p1 && gm[46] == p1 && gm[47] == p1 && gm[48] == p1 && gm[44] == ' ')
    {
        gm[44] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[42] == p1 && gm[44] == p1 && gm[45] == p1 && gm[46] == p1 && gm[47] == p1 && gm[48] == p1 && gm[43] == ' ')
    {
        gm[43] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[43] == p1 && gm[44] == p1 && gm[45] == p1 && gm[46] == p1 && gm[47] == p1 && gm[48] == p1 && gm[42] == ' ')
    {
        gm[42] = p2;
        trn = 0;
        return trn;
    }
    //0,7,14,21,28,35,42
	else if (gm[0] == p1 && gm[7] == p1 && gm[14] == p1 && gm[21] == p1 && gm[28] == p1 && gm[35] == p1 && gm[42] == ' ')
    {
        gm[42] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[0] == p1 && gm[7] == p1 && gm[14] == p1 && gm[21] == p1 && gm[28] == p1 && gm[42] == p1 && gm[35] == ' ')
    {
        gm[35] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[0] == p1 && gm[7] == p1 && gm[14] == p1 && gm[21] == p1 && gm[35] == p1 && gm[42] == p1 && gm[28] == ' ')
    {
        gm[28] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[0] == p1 && gm[7] == p1 && gm[14] == p1 && gm[28] == p1 && gm[35] == p1 && gm[42] == p1 && gm[21] == ' ')
    {
        gm[21] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[0] == p1 && gm[7] == p1 && gm[21] == p1 && gm[28] == p1 && gm[35] == p1 && gm[42] == p1 && gm[14] == ' ')
    {
        gm[14] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[0] == p1 && gm[14] == p1 && gm[21] == p1 && gm[28] == p1 && gm[35] == p1 && gm[42] == p1 && gm[7] == ' ')
    {
        gm[7] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[7] == p1 && gm[14] == p1 && gm[21] == p1 && gm[28] == p1 && gm[35] == p1 && gm[42] == p1 && gm[0] == ' ')
    {
        gm[0] = p2;
        trn = 0;
        return trn;
    }
    //1,8,15,22,29,36,43
	else if (gm[1] == p1 && gm[8] == p1 && gm[15] == p1 && gm[22] == p1 && gm[29] == p1 && gm[36] == p1 && gm[43] == ' ')
    {
        gm[43] = p2;
        trn = 0;
        return trn;
    }  
    else if (gm[1] == p1 && gm[8] == p1 && gm[15] == p1 && gm[22] == p1 && gm[29] == p1 && gm[43] == p1 && gm[36] == ' ')
    {
        gm[36] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[1] == p1 && gm[8] == p1 && gm[15] == p1 && gm[22] == p1 && gm[36] == p1 && gm[43] == p1 && gm[29] == ' ')
    {
        gm[29] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[1] == p1 && gm[8] == p1 && gm[15] == p1 && gm[29] == p1 && gm[36] == p1 && gm[43] == p1 && gm[22] == ' ')
    {
        gm[22] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[1] == p1 && gm[8] == p1 && gm[22] == p1 && gm[29] == p1 && gm[36] == p1 && gm[43] == p1 && gm[15] == ' ')
    {
        gm[15] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[1] == p1 && gm[15] == p1 && gm[22] == p1 && gm[29] == p1 && gm[36] == p1 && gm[43] == p1 && gm[8] == ' ')
    {
        gm[8] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[8] == p1 && gm[15] == p1 && gm[22] == p1 && gm[29] == p1 && gm[36] == p1 && gm[43] == p1 && gm[1] == ' ')
    {
        gm[1] = p2;
        trn = 0;
        return trn;
    }
    //2,9,16,23,30,37,44
    else if (gm[2] == p1 && gm[9] == p1 && gm[16] == p1 && gm[23] == p1 && gm[30] == p1 && gm[37] == p1 && gm[44] == ' ')
    {
        gm[44] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[2] == p1 && gm[9] == p1 && gm[16] == p1 && gm[23] == p1 && gm[30] == p1 && gm[44] == p1 && gm[37] == ' ')
    {
        gm[37] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[2] == p1 && gm[9] == p1 && gm[16] == p1 && gm[23] == p1 && gm[37] == p1 && gm[44] == p1 && gm[30] == ' ')
    {
        gm[30] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[2] == p1 && gm[9] == p1 && gm[16] == p1 && gm[30] == p1 && gm[37] == p1 && gm[44] == p1 && gm[23] == ' ')
    {
        gm[23] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[2] == p1 && gm[9] == p1 && gm[23] == p1 && gm[30] == p1 && gm[37] == p1 && gm[44] == p1 && gm[16] == ' ')
    {
        gm[16] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[2] == p1 && gm[16] == p1 && gm[23] == p1 && gm[30] == p1 && gm[37] == p1 && gm[44] == p1 && gm[9] == ' ')
    {
        gm[9] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[9] == p1 && gm[16] == p1 && gm[23] == p1 && gm[30] == p1 && gm[37] == p1 && gm[44] == p1 && gm[2] == ' ')
    {
        gm[2] = p2;
        trn = 0;
        return trn;
    }
    //3,10,17,24,31,38,45
    else if (gm[3] == p1 && gm[10] == p1 && gm[17] == p1 && gm[23] == p1 && gm[31] == p1 && gm[38] == p1 && gm[45] == ' ')
    {
        gm[45] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[3] == p1 && gm[10] == p1 && gm[17] == p1 && gm[23] == p1 && gm[31] == p1 && gm[45] == p1 && gm[38] == ' ')
    {
        gm[38] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[3] == p1 && gm[10] == p1 && gm[17] == p1 && gm[23] == p1 && gm[38] == p1 && gm[45] == p1 && gm[31] == ' ')
    {
        gm[31] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[3] == p1 && gm[10] == p1 && gm[17] == p1 && gm[31] == p1 && gm[38] == p1 && gm[45] == p1 && gm[24] == ' ')
    {
        gm[24] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[3] == p1 && gm[10] == p1 && gm[24] == p1 && gm[31] == p1 && gm[38] == p1 && gm[45] == p1 && gm[17] == ' ')
    {
        gm[17] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[3] == p1 && gm[17] == p1 && gm[24] == p1 && gm[31] == p1 && gm[38] == p1 && gm[45] == p1 && gm[10] == ' ')
    {
        gm[10] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[10] == p1 && gm[17] == p1 && gm[24] == p1 && gm[31] == p1 && gm[38] == p1 && gm[45] == p1 && gm[3] == ' ')
    {
        gm[3] = p2;
        trn = 0;
        return trn;
    }
    //4,11,18,25,32,39,46
    else if (gm[4] == p1 && gm[11] == p1 && gm[18] == p1 && gm[25] == p1 && gm[32] == p1 && gm[39] == p1 && gm[46] == ' ')
    {
        gm[46] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[4] == p1 && gm[11] == p1 && gm[18] == p1 && gm[25] == p1 && gm[32] == p1 && gm[46] == p1 && gm[39] == ' ')
    {
        gm[39] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[4] == p1 && gm[11] == p1 && gm[18] == p1 && gm[25] == p1 && gm[39] == p1 && gm[46] == p1 && gm[32] == ' ')
    {
        gm[32] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[4] == p1 && gm[11] == p1 && gm[18] == p1 && gm[32] == p1 && gm[39] == p1 && gm[46] == p1 && gm[25] == ' ')
    {
        gm[25] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[4] == p1 && gm[11] == p1 && gm[25] == p1 && gm[32] == p1 && gm[39] == p1 && gm[46] == p1 && gm[18] == ' ')
    {
        gm[18] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[4] == p1 && gm[18] == p1 && gm[25] == p1 && gm[32] == p1 && gm[39] == p1 && gm[46] == p1 && gm[11] == ' ')
    {
        gm[11] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[11] == p1 && gm[18] == p1 && gm[25] == p1 && gm[32] == p1 && gm[39] == p1 && gm[46] == p1 && gm[4] == ' ')
    {
        gm[4] = p2;
        trn = 0;
        return trn;
    }
   //5,12,19,26,33,40,47
   else if (gm[5] == p1 && gm[12] == p1 && gm[19] == p1 && gm[26] == p1 && gm[33] == p1 && gm[40] == p1 && gm[47] == ' ')
    {
        gm[47] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[5] == p1 && gm[12] == p1 && gm[19] == p1 && gm[26] == p1 && gm[33] == p1 && gm[47] == p1 && gm[40] == ' ')
    {
        gm[40] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[5] == p1 && gm[12] == p1 && gm[19] == p1 && gm[26] == p1 && gm[40] == p1 && gm[47] == p1 && gm[33] == ' ')
    {
        gm[33] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[5] == p1 && gm[12] == p1 && gm[19] == p1 && gm[33] == p1 && gm[40] == p1 && gm[47] == p1 && gm[26] == ' ')
    {
        gm[26] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[5] == p1 && gm[12] == p1 && gm[26] == p1 && gm[33] == p1 && gm[40] == p1 && gm[47] == p1 && gm[19] == ' ')
    {
        gm[19] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[5] == p1 && gm[19] == p1 && gm[26] == p1 && gm[33] == p1 && gm[40] == p1 && gm[47] == p1 && gm[12] == ' ')
    {
        gm[12] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[12] == p1 && gm[19] == p1 && gm[26] == p1 && gm[33] == p1 && gm[40] == p1 && gm[47] == p1 && gm[5] == ' ')
    {
        gm[5] = p2;
        trn = 0;
        return trn;
    }
    //6,13,20,27,34,41,48
    else if (gm[6] == p1 && gm[13] == p1 && gm[20] == p1 && gm[27] == p1 && gm[34] == p1 && gm[41] == p1 && gm[48] == ' ')
    {
        gm[48] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[6] == p1 && gm[13] == p1 && gm[20] == p1 && gm[27] == p1 && gm[34] == p1 && gm[48] == p1 && gm[41] == ' ')
    {
        gm[41] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[6] == p1 && gm[13] == p1 && gm[20] == p1 && gm[27] == p1 && gm[41] == p1 && gm[48] == p1 && gm[34] == ' ')
    {
        gm[34] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[6] == p1 && gm[13] == p1 && gm[20] == p1 && gm[34] == p1 && gm[41] == p1 && gm[48] == p1 && gm[27] == ' ')
    {
        gm[27] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[6] == p1 && gm[13] == p1 && gm[27] == p1 && gm[34] == p1 && gm[41] == p1 && gm[48] == p1 && gm[20] == ' ')
    {
        gm[20] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[6] == p1 && gm[20] == p1 && gm[27] == p1 && gm[34] == p1 && gm[41] == p1 && gm[48] == p1 && gm[13] == ' ')
    {
        gm[13] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[13] == p1 && gm[20] == p1 && gm[27] == p1 && gm[34] == p1 && gm[41] == p1 && gm[48] == p1 && gm[6] == ' ')
    {
        gm[6] = p2;
        trn = 0;
        return trn;
    }
    //0,8,16,24,32,40,48
    else if (gm[0] == p1 && gm[8] == p1 && gm[16] == p1 && gm[24] == p1 && gm[32] == p1 && gm[40] == p1 && gm[48] == ' ')
    {
        gm[48] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[0] == p1 && gm[8] == p1 && gm[16] == p1 && gm[24] == p1 && gm[32] == p1 && gm[48] == p1 && gm[40] == ' ')
    {
        gm[40] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[0] == p1 && gm[8] == p1 && gm[16] == p1 && gm[24] == p1 && gm[40] == p1 && gm[48] == p1 && gm[32] == ' ')
    {
        gm[32] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[0] == p1 && gm[8] == p1 && gm[16] == p1 && gm[32] == p1 && gm[40] == p1 && gm[48] == p1 && gm[24] == ' ')
    {
        gm[24] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[0] == p1 && gm[8] == p1 && gm[24] == p1 && gm[32] == p1 && gm[40] == p1 && gm[48] == p1 && gm[16] == ' ')
    {
        gm[16] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[0] == p1 && gm[16] == p1 && gm[24] == p1 && gm[32] == p1 && gm[40] == p1 && gm[48] == p1 && gm[8] == ' ')
    {
        gm[8] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[8] == p1 && gm[16] == p1 && gm[24] == p1 && gm[32] == p1 && gm[40] == p1 && gm[48] == p1 && gm[0] == ' ')
    {
        gm[0] = p2;
        trn = 0;
        return trn;
    }
    //6,12,18,24,30,36,42
    else if (gm[6] == p1 && gm[12] == p1 && gm[18] == p1 && gm[24] == p1 && gm[30] == p1 && gm[36] == p1 && gm[42] == ' ')
    {
        gm[42] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[6] == p1 && gm[12] == p1 && gm[18] == p1 && gm[24] == p1 && gm[30] == p1 && gm[42] == p1 && gm[36] == ' ')
    {
        gm[36] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[6] == p1 && gm[12] == p1 && gm[18] == p1 && gm[24] == p1 && gm[36] == p1 && gm[42] == p1 && gm[30] == ' ')
    {
        gm[30] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[6] == p1 && gm[12] == p1 && gm[18] == p1 && gm[30] == p1 && gm[36] == p1 && gm[42] == p1 && gm[24] == ' ')
    {
        gm[24] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[6] == p1 && gm[12] == p1 && gm[24] == p1 && gm[30] == p1 && gm[36] == p1 && gm[42] == p1 && gm[18] == ' ')
    {
        gm[18] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[6] == p1 && gm[18] == p1 && gm[24] == p1 && gm[30] == p1 && gm[36] == p1 && gm[42] == p1 && gm[12] == ' ')
    {
        gm[12] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[12] == p1 && gm[18] == p1 && gm[24] == p1 && gm[30] == p1 && gm[36] == p1 && gm[42] == p1 && gm[6] == ' ')
    {
        gm[6] = p2;
        trn = 0;
        return trn;
    }
    else
    {
        return -1;
	}
}
int winPssbl()
{
	//Modul untuk mencari celah agar dirinya (komputer) menang 
	//Initial State	: Program belum berjalan
	//Final State	: Komputer menginputkan langkah yang bisa diperkirakan menang
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: Nabiilah Nada Iswari
	//0,1,2,3,4,5,6
	if (gm[0] == p2 && gm[1] == p2 && gm[2] == p2 && gm[3] == p2 && gm[4] == p2 && gm[5] == p2 && gm[6] == ' ')
    {
        gm[6] = p2;
        trn = 0;
        return trn;
    }
	else if (gm[0] == p2 && gm[1] == p2 && gm[2] == p2 && gm[3] == p2 && gm[4] == p2 && gm[6] == p2 && gm[5] == ' ')
    {
        gm[5] = p2;
        trn = 0;
        return trn;
    }
	else if (gm[0] == p2 && gm[1] == p2 && gm[2] == p2 && gm[3] == p2 && gm[5] == p2 && gm[6] == p2 && gm[4] == ' ')
    {
        gm[4] = p2;
        trn = 0;
        return trn;
    }
	else if (gm[0] == p2 && gm[1] == p2 && gm[2] == p2 && gm[4] == p2 && gm[5] == p2 && gm[6] == p2 && gm[3] == ' ')
    {
        gm[3] = p2;
        trn = 0;
        return trn;
    }
	else if (gm[0] == p2 && gm[1] == p2 && gm[3] == p2 && gm[4] == p2 && gm[5] == p2 && gm[6] == p2 && gm[2] == ' ')
    {
        gm[2] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[0] == p2 && gm[2] == p2 && gm[3] == p2 && gm[4] == p2 && gm[5] == p2 && gm[6] == p2 && gm[1] == ' ')
    {
        gm[1] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[1] == p2 && gm[2] == p2 && gm[3] == p2 && gm[4] == p2 && gm[5] == p2 && gm[6] == p2 && gm[0] == ' ')
    {
        gm[0] = p2;
        trn = 0;
        return trn;
    }
    
    //7,8,9,10,11,12,13
    else if (gm[7] == p2 && gm[8] == p2 && gm[9] == p2 && gm[10] == p2  && gm[11] == p2 && gm[12] == p2 && gm[13] == ' ')
    {
        gm[13] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[7] == p2 && gm[8] == p2 && gm[9] == p2 && gm[10] == p2  && gm[11] == p2 && gm[13] == p2 && gm[12] == ' ')
    {
        gm[12] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[7] == p2 && gm[8] == p2 && gm[9] == p2 && gm[10] == p2  && gm[12] == p2 && gm[13] == p2 && gm[11] == ' ')
    {
        gm[11] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[7] == p2 && gm[8] == p2 && gm[9] == p2 && gm[11] == p2  && gm[12] == p2 && gm[13] == p2 && gm[10] == ' ')
    {
        gm[10] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[7] == p2 && gm[8] == p2 && gm[10] == p2 && gm[11] == p2  && gm[12] == p2 && gm[13] == p2 && gm[9] == ' ')
    {
        gm[9] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[7] == p2 && gm[9] == p2 && gm[10] == p2 && gm[11] == p2 && gm[12] == p2 && gm[13] == p2 && gm[8] == ' ')
    {
        gm[8] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[8] == p2 && gm[9] == p2 && gm[10] == p2 && gm[11] == p2  && gm[12] == p2 && gm[13] == p2 && gm[7] == ' ')
    {
        gm[7] = p2;
        trn = 0;
        return trn;
    }
	 //14,15,16,17,18,19,20
	 else if (gm[14] == p2 && gm[15] == p2 && gm[16] == p2 && gm[17] == p2 && gm[18] == p2 && gm[19] == p2 && gm[20] == ' ')
    {
        gm[20] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[14] == p2 && gm[15] == p2 && gm[16] == p2 && gm[17] == p2 && gm[18] == p2 && gm[20] == p2 && gm[19] == ' ')
    {
        gm[19] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[14] == p2 && gm[15] == p2 && gm[16] == p2 && gm[17] == p2 && gm[19] == p2 && gm[20] == p2 && gm[18] == ' ')
    {
        gm[18] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[14] == p2 && gm[15] == p2 && gm[16] == p2 && gm[18] == p2 && gm[19] == p2 && gm[20] == p2 && gm[17] == ' ')
    {
        gm[17] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[14] == p2 && gm[15] == p2 && gm[17] == p2 && gm[18] == p2 && gm[19] == p2 && gm[20] == p2 && gm[16] == ' ')
    {
        gm[16] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[14] == p2 && gm[16] == p2 && gm[17] == p2 && gm[18] == p2 && gm[19] == p2 && gm[20] == p2 && gm[15] == ' ')
    {
        gm[15] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[15] == p2 && gm[16] == p2 && gm[17] == p2 && gm[18] == p2 && gm[19] == p2 && gm[20] == p2 && gm[14] == ' ')
    {
        gm[14] = p2;
        trn = 0;
        return trn;
    }
    //21,22,23,24,25,26,27
 	else if (gm[21] == p2 && gm[22] == p2 && gm[23] == p2 && gm[24] == p2 && gm[25] == p2 && gm[26] == p2 && gm[27] == ' ')
    {
        gm[27] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[21] == p2 && gm[22] == p2 && gm[23] == p2 && gm[24] == p2 && gm[25] == p2 && gm[27] == p2 && gm[26] == ' ')
    {
        gm[26] = p2;
        trn = 0;
        return trn;
    }
	else if (gm[21] == p2 && gm[22] == p2 && gm[23] == p2 && gm[24] == p2 && gm[26] == p2 && gm[27] == p2 && gm[25] == ' ')
    {
        gm[25] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[21] == p2 && gm[22] == p2 && gm[23] == p2 && gm[25] == p2 && gm[26] == p2 && gm[27] == p2 && gm[24] == ' ')
    {
        gm[24] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[21] == p2 && gm[22] == p2 && gm[24] == p2 && gm[25] == p2 && gm[26] == p2 && gm[27] == p2 && gm[23] == ' ')
    {
        gm[23] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[21] == p2 && gm[23] == p2 && gm[24] == p2 && gm[25] == p2 && gm[26] == p2 && gm[27] == p2 && gm[22] == ' ')
    {
        gm[22] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[22] == p2 && gm[23] == p2 && gm[24] == p2 && gm[25] == p2 && gm[26] == p2 && gm[27] == p2 && gm[21] == ' ')
    {
        gm[21] = p2;
        trn = 0;
        return trn;
    }
    //28,29,30,31,32,33,34
    else if (gm[28] == p2 && gm[29] == p2 && gm[30] == p2 && gm[31] == p2 && gm[32] == p2 && gm[33] == p2 && gm[34] == ' ')
    {
        gm[34] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[28] == p2 && gm[29] == p2 && gm[30] == p2 && gm[31] == p2 && gm[32] == p2 && gm[34] == p2 && gm[33] == ' ')
    {
        gm[33] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[28] == p2 && gm[29] == p2 && gm[30] == p2 && gm[31] == p2 && gm[33] == p2 && gm[34] == p2 && gm[32] == ' ')
    {
        gm[32] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[28] == p2 && gm[29] == p2 && gm[30] == p2 && gm[32] == p2 && gm[33] == p2 && gm[34] == p2 && gm[31] == ' ')
    {
        gm[31] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[28] == p2 && gm[29] == p2 && gm[31] == p2 && gm[32] == p2 && gm[33] == p2 && gm[34] == p2 && gm[30] == ' ')
    {
        gm[30] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[28] == p2 && gm[30] == p2 && gm[31] == p2 && gm[32] == p2 && gm[33] == p2 && gm[34] == p2 && gm[29] == ' ')
    {
        gm[29] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[29] == p2 && gm[30] == p2 && gm[31] == p2 && gm[32] == p2 && gm[33] == p2 && gm[34] == p2 && gm[28] == ' ')
    {
        gm[28] = p2;
        trn = 0;
        return trn;
    }
    //35,36,37,38,39,40,41
    else if (gm[35] == p2 && gm[36] == p2 && gm[37] == p2 && gm[38] == p2 && gm[39] == p2 && gm[40] == p2 && gm[41] == ' ')
    {
        gm[41] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[35] == p2 && gm[36] == p2 && gm[37] == p2 && gm[38] == p2 && gm[39] == p2 && gm[41] == p2 && gm[40] == ' ')
    {
        gm[40] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[35] == p2 && gm[36] == p2 && gm[37] == p2 && gm[38] == p2 && gm[40] == p2 && gm[41] == p2 && gm[39] == ' ')
    {
        gm[39] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[35] == p2 && gm[36] == p2 && gm[37] == p2 && gm[39] == p2 && gm[40] == p2 && gm[41] == p2 && gm[38] == ' ')
    {
        gm[38] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[35] == p2 && gm[36] == p2 && gm[38] == p2 && gm[39] == p2 && gm[40] == p2 && gm[41] == p2 && gm[37] == ' ')
    {
        gm[37] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[35] == p2 && gm[37] == p2 && gm[38] == p2 && gm[39] == p2 && gm[40] == p2 && gm[41] == p2 && gm[36] == ' ')
    {
        gm[36] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[36] == p2 && gm[37] == p2 && gm[38] == p2 && gm[39] == p2 && gm[40] == p2 && gm[41] == p2 && gm[35] == ' ')
    {
        gm[35] = p2;
        trn = 0;
        return trn;
    }
    
    //42,43,44,45,46,47,48
    else if (gm[42] == p2 && gm[43] == p2 && gm[44] == p2 && gm[45] == p2 && gm[46] == p2 && gm[47] == p2 && gm[48] == ' ')
    {
        gm[48] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[42] == p2 && gm[43] == p2 && gm[44] == p2 && gm[45] == p2 && gm[46] == p2 && gm[48] == p2 && gm[47] == ' ')
    {
        gm[47] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[42] == p2 && gm[43] == p2 && gm[44] == p2 && gm[45] == p2 && gm[47] == p2 && gm[48] == p2 && gm[46] == ' ')
    {
        gm[46] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[42] == p2 && gm[43] == p2 && gm[44] == p2 && gm[46] == p2 && gm[47] == p2 && gm[48] == p2 && gm[45] == ' ')
    {
        gm[45] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[42] == p2 && gm[43] == p2 && gm[45] == p2 && gm[46] == p2 && gm[47] == p2 && gm[48] == p2 && gm[44] == ' ')
    {
        gm[44] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[42] == p2 && gm[44] == p2 && gm[45] == p2 && gm[46] == p2 && gm[47] == p2 && gm[48] == p2 && gm[43] == ' ')
    {
        gm[43] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[43] == p2 && gm[44] == p2 && gm[45] == p2 && gm[46] == p2 && gm[47] == p2 && gm[48] == p2 && gm[42] == ' ')
    {
        gm[42] = p2;
        trn = 0;
        return trn;
    }
    
    //0,7,14,21,28,35,42
    else if (gm[0] == p2 && gm[7] == p2 && gm[14] == p2 && gm[21] == p2 && gm[28] == p2 && gm[35] == p2 && gm[42] == ' ')
    {
        gm[42] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[0] == p2 && gm[7] == p2 && gm[14] == p2 && gm[21] == p2 && gm[28] == p2 && gm[42] == p2 && gm[35] == ' ')
    {
        gm[35] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[0] == p2 && gm[7] == p2 && gm[14] == p2 && gm[21] == p2 && gm[35] == p2 && gm[42] == p2 && gm[28] == ' ')
    {
        gm[28] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[0] == p2 && gm[7] == p2 && gm[14] == p2 && gm[28] == p2 && gm[35] == p2 && gm[42] == p2 && gm[21] == ' ')
    {
        gm[21] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[0] == p2 && gm[7] == p2 && gm[21] == p2 && gm[28] == p2 && gm[35] == p2 && gm[42] == p2 && gm[14] == ' ')
    {
        gm[14] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[0] == p2 && gm[14] == p2 && gm[21] == p2 && gm[28] == p2 && gm[35] == p2 && gm[42] == p2 && gm[7] == ' ')
    {
        gm[7] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[7] == p2 && gm[14] == p2 && gm[21] == p2 && gm[28] == p2 && gm[35] == p2 && gm[42] == p2 && gm[0] == ' ')
    {
        gm[0] = p2;
        trn = 0;
        return trn;
    }
    
    //1,8,15,22,29,36,43
    else if (gm[1] == p2 && gm[8] == p2 && gm[15] == p2 && gm[22] == p2 && gm[29] == p2 && gm[36] == p2 && gm[43] == ' ')
    {
        gm[43] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[1] == p2 && gm[8] == p2 && gm[15] == p2 && gm[22] == p2 && gm[29] == p2 && gm[43] == p2 && gm[36] == ' ')
    {
        gm[36] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[1] == p2 && gm[8] == p2 && gm[15] == p2 && gm[22] == p2 && gm[36] == p2 && gm[43] == p2 && gm[29] == ' ')
    {
        gm[29] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[1] == p2 && gm[8] == p2 && gm[15] == p2 && gm[29] == p2 && gm[36] == p2 && gm[43] == p2 && gm[22] == ' ')
    {
        gm[22] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[1] == p2 && gm[8] == p2 && gm[22] == p2 && gm[29] == p2 && gm[36] == p2 && gm[43] == p2 && gm[15] == ' ')
    {
        gm[15] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[1] == p2 && gm[15] == p2 && gm[22] == p2 && gm[29] == p2 && gm[36] == p2 && gm[43] == p2 && gm[8] == ' ')
    {
        gm[8] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[8] == p2 && gm[15] == p2 && gm[22] == p2 && gm[29] == p2 && gm[36] == p2 && gm[43] == p2 && gm[1] == ' ')
    {
        gm[1] = p2;
        trn = 0;
        return trn;
    }
    
    //2,9,16,23,30,37,44
    else if (gm[2] == p2 && gm[9] == p2 && gm[16] == p2 && gm[23] == p2 && gm[30] == p2 && gm[37] == p2 && gm[44] == ' ')
    {
        gm[44] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[2] == p2 && gm[9] == p2 && gm[16] == p2 && gm[23] == p2 && gm[30] == p2 && gm[44] == p2 && gm[37] == ' ')
    {
        gm[37] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[2] == p2 && gm[9] == p2 && gm[16] == p2 && gm[23] == p2 && gm[37] == p2 && gm[44] == p2 && gm[30] == ' ')
    {
        gm[30] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[2] == p2 && gm[9] == p2 && gm[16] == p2 && gm[30] == p2 && gm[37] == p2 && gm[44] == p2 && gm[23] == ' ')
    {
        gm[23] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[2] == p2 && gm[9] == p2 && gm[23] == p2 && gm[30] == p2 && gm[37] == p2 && gm[44] == p2 && gm[16] == ' ')
    {
        gm[16] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[2] == p2 && gm[16] == p2 && gm[23] == p2 && gm[30] == p2 && gm[37] == p2 && gm[44] == p2 && gm[9] == ' ')
    {
        gm[9] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[9] == p2 && gm[16] == p2 && gm[23] == p2 && gm[30] == p2 && gm[37] == p2 && gm[44] == p2 && gm[2] == ' ')
    {
        gm[2] = p2;
        trn = 0;
        return trn;
    }
    
    //3,10,17,24,31,38,45
    else if (gm[3] == p2 && gm[10] == p2 && gm[17] == p2 && gm[23] == p2 && gm[31] == p2 && gm[38] == p2 && gm[45] == ' ')
    {
        gm[45] = p2;
        trn = 0;
        return trn;
    }
	else if (gm[3] == p2 && gm[10] == p2 && gm[17] == p2 && gm[23] == p2 && gm[31] == p2 && gm[45] == p2 && gm[38] == ' ')
    {
        gm[38] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[3] == p2 && gm[10] == p2 && gm[17] == p2 && gm[23] == p2 && gm[38] == p2 && gm[45] == p2 && gm[31] == ' ')
    {
        gm[31] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[3] == p2 && gm[10] == p2 && gm[17] == p2 && gm[31] == p2 && gm[38] == p2 && gm[45] == p2 && gm[24] == ' ')
    {
        gm[24] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[3] == p2 && gm[10] == p2 && gm[24] == p2 && gm[31] == p2 && gm[38] == p2 && gm[45] == p2 && gm[17] == ' ')
    {
        gm[17] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[3] == p2 && gm[17] == p2 && gm[24] == p2 && gm[31] == p2 && gm[38] == p2 && gm[45] == p2 && gm[10] == ' ')
    {
        gm[10] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[10] == p2 && gm[17] == p2 && gm[24] == p2 && gm[31] == p2 && gm[38] == p2 && gm[45] == p2 && gm[3] == ' ')
    {
        gm[3] = p2;
        trn = 0;
        return trn;
    }
    
    //4,11,18,25,32,39,46
    else if (gm[4] == p2 && gm[11] == p2 && gm[18] == p2 && gm[25] == p2 && gm[32] == p2 && gm[39] == p2 && gm[46] == ' ')
    {
        gm[46] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[4] == p2 && gm[11] == p2 && gm[18] == p2 && gm[25] == p2 && gm[32] == p2 && gm[46] == p2 && gm[39] == ' ')
    {
        gm[39] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[4] == p2 && gm[11] == p2 && gm[18] == p2 && gm[25] == p2 && gm[39] == p2 && gm[46] == p2 && gm[32] == ' ')
    {
        gm[32] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[4] == p2 && gm[11] == p2 && gm[18] == p2 && gm[32] == p2 && gm[39] == p2 && gm[46] == p2 && gm[25] == ' ')
    {
        gm[25] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[4] == p2 && gm[11] == p2 && gm[25] == p2 && gm[32] == p2 && gm[39] == p2 && gm[46] == p2 && gm[18] == ' ')
    {
        gm[18] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[4] == p2 && gm[18] == p2 && gm[25] == p2 && gm[32] == p2 && gm[39] == p2 && gm[46] == p2 && gm[11] == ' ')
    {
        gm[11] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[11] == p2 && gm[18] == p2 && gm[25] == p2 && gm[32] == p2 && gm[39] == p2 && gm[46] == p2 && gm[4] == ' ')
    {
        gm[4] = p2;
        trn = 0;
        return trn;
    }
    
    //5,12,19,26,33,40,47
    else if (gm[5] == p2 && gm[12] == p2 && gm[19] == p2 && gm[26] == p2 && gm[33] == p2 && gm[40] == p2 && gm[47] == ' ')
    {
        gm[47] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[5] == p2 && gm[12] == p2 && gm[19] == p2 && gm[26] == p2 && gm[33] == p2 && gm[47] == p2 && gm[40] == ' ')
    {
        gm[40] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[5] == p2 && gm[12] == p2 && gm[19] == p2 && gm[26] == p2 && gm[40] == p2 && gm[47] == p2 && gm[33] == ' ')
    {
        gm[33] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[5] == p2 && gm[12] == p2 && gm[19] == p2 && gm[33] == p2 && gm[40] == p2 && gm[47] == p2 && gm[26] == ' ')
    {
        gm[26] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[5] == p2 && gm[12] == p2 && gm[26] == p2 && gm[33] == p2 && gm[40] == p2 && gm[47] == p2 && gm[19] == ' ')
    {
        gm[19] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[5] == p2 && gm[19] == p2 && gm[26] == p2 && gm[33] == p2 && gm[40] == p2 && gm[47] == p2 && gm[12] == ' ')
    {
        gm[12] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[12] == p2 && gm[19] == p2 && gm[26] == p2 && gm[33] == p2 && gm[40] == p2 && gm[47] == p2 && gm[5] == ' ')
    {
        gm[5] = p2;
        trn = 0;
        return trn;
    }
    
    //6,13,20,27,34,41,48
    else if (gm[6] == p2 && gm[13] == p2 && gm[20] == p2 && gm[27] == p2 && gm[34] == p2 && gm[41] == p2 && gm[48] == ' ')
    {
        gm[48] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[6] == p2 && gm[13] == p2 && gm[20] == p2 && gm[27] == p2 && gm[34] == p2 && gm[48] == p2 && gm[41] == ' ')
    {
        gm[41] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[6] == p2 && gm[13] == p2 && gm[20] == p2 && gm[27] == p2 && gm[41] == p2 && gm[48] == p2 && gm[34] == ' ')
    {
        gm[34] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[6] == p2 && gm[13] == p2 && gm[20] == p2 && gm[34] == p2 && gm[41] == p2 && gm[48] == p2 && gm[27] == ' ')
    {
        gm[27] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[6] == p1 && gm[13] == p1 && gm[27] == p1 && gm[34] == p1 && gm[41] == p1 && gm[48] == p1 && gm[20] == ' ')
    {
        gm[20] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[6] == p2 && gm[20] == p2 && gm[27] == p2 && gm[34] == p2 && gm[41] == p2 && gm[48] == p2 && gm[13] == ' ')
    {
        gm[13] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[13] == p2 && gm[20] == p2 && gm[27] == p2 && gm[34] == p2 && gm[41] == p2 && gm[48] == p2 && gm[6] == ' ')
    {
        gm[6] = p2;
        trn = 0;
        return trn;
    }
    
    //0,8,16,24,32,40,48
    else if (gm[0] == p2 && gm[8] == p2 && gm[16] == p2 && gm[24] == p2 && gm[32] == p2 && gm[40] == p2 && gm[48] == ' ')
    {
        gm[48] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[0] == p2 && gm[8] == p2 && gm[16] == p2 && gm[24] == p2 && gm[32] == p2 && gm[48] == p2 && gm[40] == ' ')
    {
        gm[40] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[0] == p2 && gm[8] == p2 && gm[16] == p2 && gm[24] == p2 && gm[40] == p2 && gm[48] == p2 && gm[32] == ' ')
    {
        gm[32] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[0] == p2 && gm[8] == p2 && gm[16] == p2 && gm[32] == p2 && gm[40] == p2 && gm[48] == p2 && gm[24] == ' ')
    {
        gm[24] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[0] == p2 && gm[8] == p2 && gm[24] == p2 && gm[32] == p2 && gm[40] == p2 && gm[48] == p2 && gm[16] == ' ')
    {
        gm[16] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[0] == p2 && gm[16] == p2 && gm[24] == p2 && gm[32] == p2 && gm[40] == p2 && gm[48] == p2 && gm[8] == ' ')
    {
        gm[8] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[8] == p2 && gm[16] == p2 && gm[24] == p2 && gm[32] == p2 && gm[40] == p2 && gm[48] == p2 && gm[0] == ' ')
    {
        gm[0] = p2;
        trn = 0;
        return trn;
    }
    
    //6,12,18,24,30,36,42
    else if (gm[6] == p2 && gm[12] == p2 && gm[18] == p2 && gm[24] == p2 && gm[30] == p2 && gm[36] == p2 && gm[42] == ' ')
    {
        gm[42] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[6] == p2 && gm[12] == p2 && gm[18] == p2 && gm[24] == p2 && gm[30] == p2 && gm[42] == p2 && gm[36] == ' ')
    {
        gm[36] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[6] == p2 && gm[12] == p2 && gm[18] == p2 && gm[24] == p2 && gm[36] == p2 && gm[42] == p2 && gm[30] == ' ')
    {
        gm[30] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[6] == p2 && gm[12] == p2 && gm[18] == p2 && gm[30] == p2 && gm[36] == p2 && gm[42] == p2 && gm[24] == ' ')
    {
        gm[24] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[6] == p2 && gm[12] == p2 && gm[24] == p2 && gm[30] == p2 && gm[36] == p2 && gm[42] == p2 && gm[18] == ' ')
    {
        gm[18] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[6] == p2 && gm[18] == p2 && gm[24] == p2 && gm[30] == p2 && gm[36] == p2 && gm[42] == p2 && gm[12] == ' ')
    {
        gm[12] = p2;
        trn = 0;
        return trn;
    }
    else if (gm[12] == p2 && gm[18] == p2 && gm[24] == p2 && gm[30] == p2 && gm[36] == p2 && gm[42] == p2 && gm[6] == ' ')
    {
        gm[6] = p2;
        trn = 0;
        return trn;
    }
    else
        return -1;
}
void Board()
{
	//Modul untuk menampilkan papan ukuran 7x7 
	//Initial State	: Program belum berjalan
	//Final State	: Terlihattampilan papan ukuran 7x7
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: Nabiilah Nada Iswari
	system("cls");
	system ("color 1");
	printf("+---------------+---------------+----------------+---------------+----------------+---------------+---------------+\n");
	printf("|		|		|	 	 |		|	 	 |		|		|\n");
	printf("|	%c	|	%c	|	%c	 |	%c	|	%c	 |	%c	|	%c	|\n",gm[0],gm[1],gm[2],gm[3],gm[4],gm[5],gm[6]);
	printf("|		|		|		 |		|	 	 |		|		|\n");
	printf("+---------------+---------------+----------------+---------------+----------------+---------------+---------------+\n");
	printf("|		|		|		 |		|	 	 |		|		|\n");
	printf("|	%c	|	%c	|	%c	 |	%c	|	%c	 |	%c	|	%c	|\n",gm[7],gm[8],gm[9],gm[10],gm[11],gm[12],gm[13]);
	printf("|		|		|		 |		|	 	 |		|		|\n");
	printf("+---------------+---------------+----------------+---------------+----------------+---------------+---------------+\n");	
	printf("|		|		|		 |		|	 	 |		|		|\n");
	printf("|	%c	|	%c	|	%c	 |	%c	|	%c	 |	%c	|	%c	|\n",gm[14],gm[15],gm[16],gm[17],gm[18],gm[19],gm[20]);
	printf("|		|		|		 |		|	 	 |		|		|\n");
	printf("+---------------+---------------+----------------+---------------+----------------+---------------+---------------+\n");
	printf("|		|		|		 |		|	 	 |		|		|\n");
	printf("|	%c	|	%c	|	%c	 |	%c	|	%c	 |	%c	|	%c	|\n",gm[21],gm[22],gm[23],gm[24],gm[25],gm[26],gm[27]);
	printf("|		|		|		 |		|	 	 |		|		|\n");
	printf("+---------------+---------------+----------------+---------------+----------------+---------------+---------------+\n");
	printf("|		|		|		 |		|	 	 |		|		|\n");
	printf("|	%c	|	%c	|	%c	 |	%c	|	%c	 |	%c	|	%c	|\n",gm[28],gm[29],gm[30],gm[31],gm[32],gm[33],gm[34]);
	printf("|		|		|		 |		|	 	 |		|		|\n");
	printf("+---------------+---------------+----------------+---------------+----------------+---------------+---------------+\n");
	printf("|		|		|		 |		|	 	 |		|		|\n");
	printf("|	%c	|	%c	|	%c	 |	%c	|	%c	 |	%c	|	%c	|\n",gm[35],gm[36],gm[37],gm[38],gm[39],gm[40],gm[41]);
	printf("|		|		|		 |		|	 	 |		|		|\n");
	printf("+---------------+---------------+----------------+---------------+----------------+---------------+---------------+\n");
	printf("|		|		|		 |		|	 	 |		|		|\n");
	printf("|	%c	|	%c	|	%c	 |	%c	|	%c	 |	%c	|	%c	|\n",gm[42],gm[43],gm[44],gm[45],gm[46],gm[47],gm[48]);
	printf("|		|		|		 |		|	 	 |		|		|\n");
	printf("+---------------+---------------+----------------+---------------+----------------+---------------+---------------+\n");
}
int checkW1nner()
{
	//Modul untuk mengecek keadaan papan yang menang
	//Initial State	: Program belum berjalan
	//Final State	: Papan yang sudah dicek 
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: Nabiilah Nada Iswari
	//0,1,2,3,4,5,6
	if(gm[0] == gm[1] && gm[1] == gm[2] && gm[2] == gm[3] && gm[3] == gm[4] && gm[4] == gm[5] && gm[5] == gm[6] && gm[0] != ' ')
    {
        return 1;
    }
    //7,8,9,10,11,12,13
	else if(gm[7] == gm[8] && gm[8] == gm[9] && gm[9] == gm[10] && gm[10] == gm[11] && gm[11] == gm[12] && gm[12] == gm[13] && gm[7] != ' ')
    {
        return 1;
    }
	//14,15,16,17,18,19,20
	else if(gm[14] == gm[15] && gm[15] == gm[16] && gm[16] == gm[17] && gm[17] == gm[18] && gm[18] == gm[19] && gm[19] == gm[20] && gm[14] != ' ')
    {
        return 1;
    }
	//21,22,23,24,25,26,27
	else if(gm[21] == gm[22] && gm[22] == gm[23] && gm[23] == gm[24] && gm[24] == gm[25] && gm[25] == gm[26] && gm[26] == gm[27] && gm[21] != ' ')
    {
        return 1;
    }
	//28,29,30,31,32,33,34
	else if(gm[28] == gm[29] && gm[29] == gm[30] && gm[30] == gm[31] && gm[31] == gm[32] && gm[32] == gm[33] && gm[33] == gm[34] && gm[28] != ' ')
    {
        return 1;
    }
	//35,36,37,38,39,40,41
	else if(gm[35] == gm[36] && gm[36] == gm[37] && gm[37] == gm[38] && gm[38] == gm[39] && gm[39] == gm[40] && gm[40] == gm[41] && gm[35] != ' ')
    {
        return 1;
    }
	//42,43,44,45,46,47,48
	else if(gm[42] == gm[43] && gm[43] == gm[44] && gm[44] == gm[45] && gm[45] == gm[46] && gm[46] == gm[47] && gm[47] == gm[48] && gm[42] != ' ')
    {
        return 1;
    }
	//0,7,14,21,28,35,42
	else if(gm[0] == gm[7] && gm[7] == gm[14] && gm[14] == gm[21] && gm[21] == gm[28] && gm[28] == gm[35] && gm[35] == gm[42] && gm[0] != ' ')
    {
        return 1;
    }
	//1,8,15,22,29,36,43
	else if(gm[1] == gm[8] && gm[8] == gm[15] && gm[15] == gm[22] && gm[22] == gm[29] && gm[29] == gm[36] && gm[36] == gm[43] && gm[1] != ' ')
    {
        return 1;
    }
	//2,9,16,23,30,37,44
	else if(gm[2] == gm[9] && gm[9] == gm[16] && gm[16] == gm[23] && gm[23] == gm[30] && gm[30] == gm[37] && gm[37] == gm[44] && gm[2] != ' ')
    {
        return 1;
    }
	//3,10,17,24,31,38,45
	else if(gm[3] == gm[10] && gm[10] == gm[17] && gm[17] == gm[24] && gm[24] == gm[31] && gm[31] == gm[38] && gm[38] == gm[45] && gm[3] != ' ')
    {
        return 1;
    }
	//4,11,18,25,32,39,46
	else if(gm[4] == gm[11] && gm[11] == gm[18] && gm[18] == gm[25] && gm[25] == gm[32] && gm[32] == gm[39] && gm[39] == gm[46] && gm[4] != ' ')
    {
        return 1;
    }
    //5,12,19,26,33,40,47
	else if(gm[5] == gm[12] && gm[12] == gm[19] && gm[19] == gm[26] && gm[26] == gm[33] && gm[33] == gm[40] && gm[40] == gm[47] && gm[5] != ' ')
    {
        return 1;
    }
	//6,13,20,27,34,41,48
	else if(gm[6] == gm[13] && gm[13] == gm[20] && gm[20] == gm[27] && gm[27] == gm[34] && gm[34] == gm[41] && gm[41] == gm[48] && gm[6] != ' ')
    {
        return 1;
    }
	//0,8,16,24,32,40,48
	else if(gm[0] == gm[8] && gm[8] == gm[16] && gm[16] == gm[24] && gm[24] == gm[32] && gm[32] == gm[40] && gm[40] == gm[48] && gm[0] != ' ')
    {
        return 1;
    }
	//6,12,18,24,30,36,42
	else if(gm[6] == gm[12] && gm[12] == gm[18] && gm[18] == gm[24] && gm[24] == gm[30] && gm[30] == gm[36] && gm[36] == gm[42] && gm[6] != ' ')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void dispMenu()
{
	//Modul untuk menampilkan menu memilih simbol
	//Initial State	: Program belum berjalan
	//Final State	: Terlihat pilihan menu di layar, dimana user bisa memilih modul mana yang ingin dieksekusi
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: -
	system("cls");
	system ("color 1");
    int choice;
    printf("			+-----------------------------------------------------------------------+\n");
    printf("			|			     *** * MENU * ***				|\n");
    printf("			|              		  Player 1 Choose Symbol			|\n");
    printf("			|              		  1. Play with 'X' 				|\n");
    printf("			|              		  2. Play with 'O'  				|\n");
    printf("			|              		  3. Quit game 					|\n");
    printf("			+-----------------------------------------------------------------------+\n");
    printf("			|Please select: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
    	system("cls");
        p1 = 'X'; p2 = 'O';
        printf("			|Player 1 %s: %c \nPlayer 2 %s: %c", p1nm, p1, p2nm, p2);
    }
    else if (choice == 2)
    {
    	system("cls");
        p1 = 'O'; p2 = 'X';
        printf("			|Player 1 %s: %c \nPlayer 2 %s: %c", p1nm, p1, p2nm, p2);
    }
    else if (choice == 3)
    {
        printf("Quiting");
        exit(0);
    }
    else
    {
    	system("cls");
        printf("			|\aInvalid Choice! Enter a digit (1 to 3)\n");
        dispMenu();
    }
}
int gmMd()
{
	//Modul untuk menampilkan menu memilih musuh/ lawan
	//Initial State	: Program belum berjalan
	//Final State	: Terlihat pilihan menu di layar, dimana user bisa memilih modul mana yang ingin dieksekusi
	//Author		: Mirza Abdul wadood Baig 
	//Modifided by	: Dimas Wisnu Saputro
	system("cls");
	system ("color 1");
    int n;
    printf("			+-----------------------------------------------------------------------+\n");
	printf("			| 			WELCOME TO TIC TAC TOE				|\n");
    printf("			+-----------------------------------------------------------------------+\n");
    printf("			| 			   CHOOSE Game Mode: 				|\n");
    printf("			|		     1. Human vs Human (2 player)			|\n");
    printf("			|		     2. Human vs Computer (Single player)		|\n");
    printf("			|		     3. Quit						|\n");
	printf("			+-----------------------------------------------------------------------+\n");
	printf("			|Please select: ");
    scanf("%d", &n);
    if (n == 1)
    {
        md = 0;
        printf("			|Human VS Human								|\n");
        printf("			+-----------------------------------------------------------------------+\n");
        printf("			|Player 1: Enter Your Name:");
		fflush(stdin);
		gets(p1nm);
		printf("			|Player 2: Enter Your Name:");
		fflush(stdin);
		gets(p2nm);
    }
    else if(n == 2)
    {
        md = 1;
        printf("			|Human VS Computer							|\n");
        printf("			+-----------------------------------------------------------------------+\n");
        printf("			|Player 1: Enter Your Name:");
		fflush(stdin);
		gets(p1name);
		PilihanKesulitan7x7();
    }
    else if(n == 3)
    {
        exit(0);
    }
    else
    {
        printf("			|\aInvalid Choice, enter a digit (1 to 3).\n");
    }
}
void PilihanKesulitan7x7()
{
	//Modul untuk menampilkan menu memilih tingkat kesulitan
	//Initial State	: Program belum berjalan
	//Final State	: Terlihat pilihan menu di layar, dimana user bisa memilih modul mana yang ingin dieksekusi
	//Author		: Dimas Wisnu Saputro
	//Modifided by	: -
	system ("color 1");
	int kesulit4n;
	printf ("\n\t\t\t1. Easy");
	printf ("\n\t\t\t2. Medium");
	printf ("\n\t\t\t3. Hard");
	printf ("\n\t\t\tPlease select: ");
	scanf("%d", &kesulit4n);
}
