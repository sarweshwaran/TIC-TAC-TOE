#include<iostream>

using namespace std;

void board();			//to print the board

int winchk();			//for checking the victory

char square[10]={'0','1','2','3','4','5','6','7','8','9'};	//place in the array





//main function

int main()
{
	
	int player= 1,i,ch;
	
	char mark;
	
	do{
		
		board();		//printing the board
		
		player=(player%2)?1:2;		//choosing player
		
		cout<<"\nPLAYER"<<player<<" ENTER THE POSITION :";				//getting input from the player 
		cin>>ch;
		
		
		mark=(player==1)?'X':'O';			//choosing symbol
		
		
		//changing the number to symbol in the selected place 
		
		if(ch==1&&square[1]=='1')
		square[1]=mark;							
		
		else if(ch==2&&square[2]=='2')
		square[2]=mark;
		
		else if(ch==3&&square[3]=='3')
		square[3]=mark;
		
		else if(ch==4&&square[4]=='4')
		square[4]=mark;
		
		else if(ch==5&&square[5]=='5')
		square[5]=mark;
		
		else if(ch==6&&square[6]=='6')
		square[6]=mark;
		
		else if(ch==7&&square[7]=='7')
		square[7]=mark;
		
		else if(ch==8&&square[8]=='8')
		square[8]=mark;
		
		else if(ch==9&&square[9]=='9')
		square[9]=mark;
		
		else
		{
			cout<<"\nINVALID CHOICE .";
			
			player--;						//to make the current player to play again
			
			cin.ignore();				
			
			cin.get();						
		}
		
		player++;
		
		i=winchk();
		
	}while(i==-1);
	
	board();
	
	if(i==1)
	{
		cout<<"\n\a ==> PLAYER "<<--player<<" YOU WON THE MATCH.";				//printing the victory message
	}
	
	else
	cout<<"\n\aTHE GAME IS DRAW.";
	
	cin.ignore();
	
	cin.get();
	
	return 0;
}




//printing the board



void board()
{
	system("cls");
	
	cout<<square[1]<<" | "<<square[2]<<" | "<<square[3]<<endl;
	
	cout<<"__ ___ __"<<endl;
	
	cout<<square[4]<<" | "<<square[5]<<" | "<<square[6]<<endl;
	
	cout<<"__ ___ __"<<endl;
	
	cout<<square[7]<<" | "<<square[8]<<" | "<<square[9]<<endl;
	
}





//checking for victory

int winchk()
{
	//win checking
	
	if(square[1]==square[2]&&square[2]==square[3])
	return 1;
	
	else if(square[4]==square[5]&&square[5]==square[6])
	return 1;
	
	else if(square[7]==square[8]&&square[8]==square[9])
	return 1;
	
	else if(square[1]==square[4]&&square[4]==square[7])
	return 1;
	
	else if(square[2]==square[5]&&square[5]==square[8])
	return 1;
	
	else if(square[3]==square[6]&&square[6]==square[9])
	return 1;
	
	else if(square[1]==square[5]&&square[5]==square[9])
	return 1;
	
	else if(square[3]==square[5]&&square[5]==square[7])
	return 1;
	
	//checking for draw
	
	else if(square[1]!='1'&&square[2]!='2'&&square[3]!='3'&&square[4]!='4'&&square[5]!='5'&&square[6]!='6'&&square[7]!='7'&&square[8]!='8'&&square[9]!='9')
	return 0;
	
	else
	return -1;
}
