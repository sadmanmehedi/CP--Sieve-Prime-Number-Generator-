#include<iostream>
using namespace std;

class tictok
{
	private:
			int gameboard[3][3];
			int entry;   		 // to get entry form players
			int player;
			int player_no;
			int store_entryLocation[9];	 /* array to store entry location for
										 checking is location valid or not */

	public:
			tictok();
			void set_values();     	//	function to set values
			void print_board();    //	function to print gameboard
			void get_entry();     // to get players entry location
			void check_entry();	 // to check entry location is valid or not
			void set_entry();   // to set entry
			int check_win();   //   function to check game status
};

//   constructure definition
tictok::tictok()
{
	set_values();
	print_board();
	get_entry();
}
//  set values function definition
void tictok::set_values()
{
	cout<<"\nTictok Game"<<endl;
	cout<<"\nWho want to start game : "<<endl;
	cout<<"Player one or Player two :"<<endl;
	cin>>player_no;

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){

		gameboard[i][j]=0;

	  }
	}
	for(int i=0;i<9;i++)
	{
	   store_entryLocation[i]=0;
	}
}

void tictok::print_board()    //  function to print gameboard
{

	cout<<"\nTictok Game"<<endl;

	cout << "\t _________________" << endl;
	cout << "\t|     |     |     |" << endl;
	cout << "\t|  " << gameboard[0][0] << "  |  " <<gameboard[0][1]<< "  |  " << gameboard[0][2] <<"  |" << endl;

	cout << "\t|_____|_____|_____|" << endl;
	cout << "\t|     |     |     |" << endl;

	cout << "\t|  " << gameboard[1][0] << "  |  " <<gameboard[1][1]<< "  |  " << gameboard[1][2]<<"  |" << endl;

	cout << "\t|_____|_____|_____|" << endl;
	cout << "\t|     |     |     |" << endl;

	cout << "\t|  " <<gameboard[2][0] << "  |  " <<gameboard[2][1] << "  |  " <<gameboard[2][2] <<"  |" << endl;

	cout << "\t|_____|_____|_____|" << endl << endl;


}

void tictok::get_entry()    // function to get entry location from players
{
	cout<<"Player "<<player_no<<" : ";
	cin>>entry;

	check_entry();

}
void tictok::check_entry()  // to check entry location is valid or not
{
	if(entry<1||entry>9)
    {
		cout<<"\nInvalid Location"<<endl;
		get_entry();
	}
	else
	{
    	if(store_entryLocation[entry]!=0)
    	{
    		cout<<"\nThis location is already occupied"<<endl;
			get_entry();

		}
		else
		{
			store_entryLocation[entry]=entry;
			if(player_no==1)
   		    {
		 	   player_no=2;
			   player=1;
			   set_entry();
    		}
    		else
    		{
   	   		  player_no=1;
			  player=2;
			  set_entry();
    		}
		}
	}
}
void tictok::set_entry()   // function to set player entry
{

		switch(entry)
		 {

			case 1:
				gameboard[0][0]=player;
				break;
			case 2:
				gameboard[0][1]=player;
				break;
			case 3:
				gameboard[0][2]=player;
				break;
			case 4:
				gameboard[1][0]=player;
				break;
			case 5:
				gameboard[1][1]=player;
				break;
			case 6:
				gameboard[1][2]=player;
				break;
			case 7:
				gameboard[2][0]=player;
				break;
			case 8:
				gameboard[2][1]=player;
				break;
			case 9:
				gameboard[2][2]=player;
				break;
		 }
// checking status of game
	switch(check_win())
	{
	   case 0:
	   			//  if game is continue
		    	system("CLS");   //to clear screen
		    	print_board();
		    	get_entry();
		    	break;
		case 1:
				//  if player wins
				system("CLS");   //to clear screen
		    	print_board();
				cout<<"\nPlayer "<<player<<" wins the game"<<endl;
				break;
		case 2:
				//  if game draw
				system("CLS");   //to clear screen
		    	print_board();
				cout<<"\nGame has been drawn"<<endl;
				break;
	}
}
int tictok::check_win()
{
	int Continue=0,win=1,draw=2;

			if (gameboard[0][0] == gameboard[0][1] && gameboard[0][0] == gameboard[0][2]&&gameboard[0][0]!=0)

		return win;
	else if (gameboard[1][0] == gameboard[1][1] && gameboard[1][0] == gameboard[1][2]&&gameboard[1][0]!=0)

	return win;
else	if (gameboard[2][0] == gameboard[2][1] && gameboard[2][0] == gameboard[2][2]&&gameboard[2][0]!=0)

		return win;
	else if (gameboard[0][0] ==gameboard[1][0] && gameboard[0][0] == gameboard[2][0]&&gameboard[0][0]!=0)

	return win;
else	if  (gameboard[0][1] ==gameboard[1][1] && gameboard[0][1] == gameboard[2][1]&&gameboard[0][1]!=0)

		return win;
	else if (gameboard[0][2] ==gameboard[1][2] && gameboard[0][2] == gameboard[2][2]&&gameboard[0][2]!=0)

	return win;
else	if (gameboard[0][0] == gameboard[1][1] && gameboard[0][0] == gameboard[2][2]&&gameboard[0][0]!=0)

		return win;
	else if (gameboard[0][2] ==gameboard[1][1] && gameboard[0][2] == gameboard[2][0]&&gameboard[0][2]!=0)

	return win;


		int check=0;

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		if(gameboard[i][j]!=0)
		{
			check+=1;
		}
	  }
	}
	  if(check==9)
	  {
	  	return draw;
	  }
	else
	{

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		if(gameboard[i][j]==0)
		{
			return Continue;
		}
	   }
	 }
    }
}
int main()
{

	tictok game;

	return 0;

}

