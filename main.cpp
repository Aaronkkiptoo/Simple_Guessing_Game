#include <iostream>
#include <random>
using namespace std;
int option=0;
int userGuess;

//menu
void Menu()
{
	system("clear");
 	cout << "****Welcome To The Guess The Number Game!****" << endl;
	cout << "Please Guess A number: ";
        cin >> userGuess;
	cout << "Please choose your difficulty level!" << endl;
	cout << "Easy(1)" << endl << "Medium(2)" << endl << "Hard(3)"<< endl << "Exit(4)" << endl << "option: ";

	cin >> option;
	if (option!=1 || option!=2 || option !=3)
	{
		system("exit");

	}



}





int main()
{

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(1, 10);
	uniform_int_distribution<> dis2(1, 100);
	uniform_int_distribution<> dis3(1, 1000);

	int random_number = dis(gen);
        int random_number2 = dis2(gen);
        int random_number3 = dis3(gen);

	Menu();
	switch(option){

		case 1:
			if(random_number==userGuess)
				cout << "CONGRATULATIONS!! YOU GUESSED CORRECTLY" << endl;
			else
				cout << "You failed, The correct guess was " << random_number << endl;
			break;
		case 2:
                        if(random_number2==userGuess)
                                cout << "CONGRATULATIONS!! YOU GUESSED CORRECTLY" << endl; 
                        else
                            	cout << "You failed, The correct guess was " << random_number2 << endl;
			break;
		case 3:
                        if(random_number3==userGuess)
                                cout << "CONGRATULATIONS!! YOU GUESSED CORRECTLY" << endl; 
                        else
                            	cout << "You failed, The correct guess was " << random_number3 << endl;
			break;
		}





	return 0;
}
