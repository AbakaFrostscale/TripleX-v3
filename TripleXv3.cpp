#include <iostream>
#include <ctime>

int GuessA, GuessB, GuessC, GuessProd, GuessSum;
int PlayerGuessA, PlayerGuessB, PlayerGuessC, PlayerGuessProd, PlayerGuessSum;
int PlayerLevel, MaxLevel;

bool Win ()
{
	if (GuessSum == PlayerGuessSum && GuessProd == PlayerGuessProd)
			{
				return true;
			}
		else
			{
				return false;
			}
}

void PlayGame()
{
	srand(time(NULL));
	PlayerLevel = 1;
	std::cout << "Enter your name: ";
		char PlayerName[20];
		std::cin >> PlayerName;
	
		std::cout << "\nHey there " << PlayerName << " welcome to the game\n";
		std::cout << "How many levels would you like play? ";
		std::cin >> MaxLevel;	
	while (PlayerLevel <= MaxLevel)
	{
		std::cout << "\nYou are an adventurer that has stumbled upon a level " << PlayerLevel << " three letter code chest\n";
		std::cout << "Decipher the code to unlock the marvels within\n";
		
		GuessA = rand()%PlayerLevel + PlayerLevel;
		GuessB = rand()%PlayerLevel + PlayerLevel;
		GuessC = rand()%PlayerLevel + PlayerLevel;
		GuessSum = GuessA + GuessB + GuessC;
		GuessProd = GuessA * GuessB * GuessC;
		
		std::cout << "The sum of the codes is: " << GuessSum << "\n";
		std::cout << "The product of the code is: " << GuessProd << "\n\n";
	
		std::cin >> PlayerGuessA;
		std::cin >> PlayerGuessB;
		std::cin >> PlayerGuessC;
		PlayerGuessSum = PlayerGuessA + PlayerGuessB + PlayerGuessC;
		PlayerGuessProd = PlayerGuessA * PlayerGuessB * PlayerGuessC;
	
		Win();
		if (Win() == true)
			{
				std::cout  <<  "\nYou have opened the chest successfully!\n\n";
				PlayerLevel = PlayerLevel + 1;
			}
		else
			{
				std::cout << "You have lost\n\n";
				PlayerLevel = 1;0
			}
		}
}

int main ()
{
	PlayGame();
	std::cout << "YOU HAVE BEAT THE GAME ENJOY THE REST OF YOUR'E ADVENTURE:D";
	return 0;
}
