#include <iostream>
using namespace std;

class tictactoe{
public:
	int board[3][3];
	void move(int val1, int val2, int end)
	{
		if (val1 >= 0 && val1 >= 0 && val1 <= 3 && val2 <= 3)
		{
			board[val1][val2] = end;
		}
		else
		{
			cout << "Sorry invalid move" << endl;
		}
	}


	void reset()
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				board[i][j] = 0;
			}
		}
	}

	void print()
	{
		for (int k = 0; k < 3; k++)
		{
			for (int m = 0; m < 3; m++)
			{
				cout << " " << board[k][m] << endl;
			}
			cout << "\t" << endl;
		}
	}


};

void main()
{
	tictactoe obj;
	int part, val1, val2;
	for (int i = 0; i < 9; i++)
	{
		cout << "Enter participant number" << endl;
		cin >> part;
		cout << "Enter column" << endl;
		cin >> val1;
		cout << "Enter row to" << endl;
		cin >> val2;
		obj.move(val1, val2, part);
	}
	int choice;
	bool flag = true;
	while (flag == true){
		cout << "Enter 0 to quit or 1 to reset or 2 to print" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			obj.reset();
			break;
		case 2:
			obj.print;
			break;
		
		default:
			flag = false;
			break;
		}
	}
}//Loop