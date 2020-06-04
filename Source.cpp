#include<iostream>

int  checkwin();
void board();

std::string player1;
std::string player2;
std::string  a[5][5] = { "1","|","2","|","3",
		"-","-","-","-","-",
		"4","|","5","|","6"
		 ,"-","-","-","-","-",
		"7","|","8","|","9" };

void input()
{
	int player = 1;
	int i;
	
	int num;
	do {
	
		player=((player % 2) ? 1 : 2) ;
		char draw = ((player == 1) ? 'x' : 'o');
		if (player == 1)
		{
			std::cout << player1 << "your turn\n";
		}
		else {
			std::cout << player2 << "your turn\n";
		}
		std::cin >> num;

		if (num == 1)
		{
			a[0][0] = draw;
		}
		else if (num == 2)
		{
			a[0][2] = draw;
		}
		else if (num == 3)
		{
			a[0][4] = draw;
		}
		else if (num == 4)
		{
			a[2][0] = draw;
		}
		else if (num == 5)
		{
			a[2][2] = draw;
		}
		else if (num == 6)
		{
			a[2][4] = draw;
		}
		else if (num == 7)
		{
			a[4][0] = draw;
		}
		else if (num == 8)

		{
			a[4][2] = draw;
		}
		else if (num == 9)
		{
			a[4][4] = draw;
		}
		else {
			std::cout << "invlid move\n";
			player--;

				std::cin.ignore();
			std::cin.get();
		}
		

		board();

		int check{ checkwin() };
		i = check;
		player++;
		

	} while (i == -1);

	if (i == 2)
	{
		std::cout << "draw\n";
	}
	else if (i == 10)
	{
		if (player == 2)
		{
			std::cout << player1 << ":";
			std::cout << "you win\n";
		}
		
		else 
		{
			std::cout << player2 << ":";
			std::cout << "you win\n";
		}
		
	}


}

void board()
{
	


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << a[i][j];
		}
	std:: cout << std::endl;
		}
}

void check()
{
	
}



int main()
{
	
	std::cout << "hello\n";

	std::cout << "welcome to tic tac toe\n";

	std::cout << "enter the first player\n";

    std:: cin >> player1;

    std::cout << "enter the second player \n";

    std::cin >> player2;

    std::cout << std::endl;
	char choice;
 
	do {

		board();

		std::cout << "Press the key given to fill in\n";

		input();

		system("pause");
		
		std::cout << "do you wanna play again press Y or y\n";
		std::cin >> choice;
	} while (choice == 'Y' || choice == 'y');

	return 0;

}
int checkwin()
{
	if (a[0][0] == a[0][2] && a[0][2] == a[0][4])
	{
		return 10;
	}
	else if (a[0][0] == a[2][0] && a[2][0] == a[4][0])
	{
		return 10;
	}
	else if (a[0][0] == a[2][2] && a[2][2] == a[4][4])
	{
		return 10;
	}
	else if (a[0][2] == a[2][2] && a[2][2] == a[4][2])
	{
		return 10;
	}
	else if (a[2][0] == a[2][2] && a[2][2] == a[2][4])
	{
		return 10;
	}
	else if (a[4][0] == a[4][2] && a[4][2] == a[4][4])
	{
		return 10;
	}
	else if (a[0][4] == a[2][4] && a[2][4] == a[4][4])
	{
		return 10;
	}
	else if (a[0][4] == a[2][2] && a[2][2] == a[4][0])
	{
		return 10;
	}
	else if ((a[0][0] == "x" || a[0][0] == "o") &&( a[0][2] == "x" || a[0][2] == "o") && (a[0][4] == "x" || a[0][4] == "o") && (a[2][0] == "x" || a[2][0] == "o") && (a[2][2] == "x" || a[2][2] == "o" )&& (a[2][4] == "x" || a[2][4] == "o") &&( a[4][0] == "x" || a[4][0] == "o") && (a[4][2] == "x" || a[4][2] == "o") && (a[4][4] == "x" || a[4][4] == "o"))
	{
		return 2;
	}
	else {
		return -1;
	}
}