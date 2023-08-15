#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

void assigning_stars(char **ptr , int r , int c);
int ConvertingAlphabetToNumber(char alphabet);
void display(char **ptr, int r, int c);
void input(string &SeatType , int &r , char &c);
bool CheckingSeatAccordingToType(int r , string SeatType);

int main()
{
	int row = 13;
	int col = 6;
	char **menu;
	
	menu = new char *[row];
	for (int i = 0; i < row; i++)//DECLARING THE ARRAY 
	{
		menu[i] = new char[col];
	}

	assigning_stars(menu , row , col);//ASSIGNING STARS
	display(menu, row, col);//DISPLAYING MATRIX
	
    string further_booking;
	do{//STARTRING OF DO LOOP
	
	
	string seat_type;
	int row_number;
	char col_number;
	input(seat_type ,row_number,col_number );//GETTING INPUT


	int colum;
	colum =  ConvertingAlphabetToNumber(col_number);//CONVERTING ALPHABET TO NUMBER

	menu[row_number -1][colum];//USER ENTERED SEAT NUMBER FINAL RESULT

	bool matches;//GETTING CONFIRMATION OF SEAT SUITS TO THE TYPE OF TICKET
	matches = CheckingSeatAccordingToType(row_number -1 ,seat_type );
	
	
	//CONTROLL STRUCTURE
	if(matches == true){
	
				if (menu[row_number -1][colum] == 'X')//CHECKING FOR THE SEAT RESERVATION
	{
		cout << "This seat is already booked ;( " << endl;
		cout<<"DO YOU WANT TO BOOK AGAIN...!  "<<endl;
		cin>>further_booking;
	}
				else
	{
		menu[row_number -1][colum] = 'X';//MARKING X ON THE PLACE OF RESERVATION
		display(menu, row, col);//DISPLAYING MATRIX AFETER BOOKING
		cout<<endl << "YOUR SEAT IS BOOKED SUCCESSGULLY : ) " << endl;
		cout<<"DO YOU WANT TO BOOK AGAIN...!  "<<endl;
		cin>>further_booking;
	}
	
	}
	else
	{
		cout<<"Your Enterd Seat Row is Not According to your Ticket type ;( "<<endl;
		cout<<"DO YOU WANT TO BOOK AGAIN...!  "<<endl;
		cin>>further_booking;
	}
} while(further_booking == "yes");//ENDING OF THE DO WHILE LOOP
	return 0;
}

void assigning_stars(char **ptr, int r, int c)//START
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			ptr[i][j] = '*';
		}
	}
}

int ConvertingAlphabetToNumber(char alphabet)//START
{
	char ASCI[6] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	for (int i = 0; i < 6; i++)
	{
		if (alphabet == ASCI[i])
		{
			return i ;	
		}
	}
}
void display(char **ptr, int r, int c)//START
{
	cout << "        A   B   C   D   E   F" << endl;
	for (int i = 0; i < r; i++)
	{
		cout << "ROW " << i + 1 << " : ";
		if (i <= 8)
		{
			for (int j = 0; j < c; j++)
			{
				cout << " " << ptr[i][j] << "  ";
			}
			cout << endl;

		}
		else
		{
			for (int j = 0; j < c; j++)
			{
				cout << ptr[i][j] << "   ";
			}
			cout << endl;
		}
		}	
	}
	
void input(string &SeatType , int &r , char &c)
	{
	cout << "what is your seat type : ";//TAKING INPUT OF SEAT TYPE
	cin >> SeatType;
	cout << endl;
	cout << "plz entre the seat row number: ";
	cin>>r;
	cout<<endl;
	cout<<"plz entre the column number : ";
	cin>>c;	
	}
	
bool CheckingSeatAccordingToType(int r , string SeatType)
	{
		if(SeatType == "firstclass")
		{
			if(r == 0 || r==1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else if(SeatType == "businessclass")
		{
		
			if(r==2||r==3||r==4||r==5||r==6)
			{
			return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
		if(r==7||r==8||r==9||r==10||r==11||r==12)
				{
					return true;
				}
			else
			{
				return false;
			}	

            
	}
}

