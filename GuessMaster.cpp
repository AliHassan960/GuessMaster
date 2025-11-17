#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main() 
{
    int num_players;
    
    // number of players input lene ke lia
    cout << "Enter number of players: ";
    cin >> num_players;
    
    int attempts[num_players]; // Har player ke attempts store karne ke liye
    bool guessed[num_players]; // Track karega ke player ne guess kar liya ya nahi
    
    // Initialize arrays
    for(int i = 0; i < num_players; i++) 
	{
        attempts[i] = 5; // Har player ko 5 attempts milenge
        guessed[i] = false; // Shuru mein kisi ne nahi guess kiya
    }
    
    // Har player ke liye game
    for(int i = 0; i < num_players; i++) 
	{
        cout << "\n--- Player " << (i + 1) << "'s turn ---" << endl;
        
        // Naya random number generate karo har player ke liye
        int secret_number = (rand() + time(0)) % 100;
        int user_guess;
        
        // 5 attempts ke liye loop
        for(int attempt = 1; attempt <= 5; attempt++) 
		{
            cout << "Attempt " << attempt << "/5 - Enter your guess: ";
            cin >> user_guess;
            
            if(user_guess < secret_number) 
			{
                cout << "Too low!" << endl;
            }
            else if(user_guess > secret_number) 
			{
                cout << "Too high!" << endl;
            }
            else 
			{
                cout << "Congratulations! You guessed it!" << endl;
                attempts[i] = attempt; // Kitne attempts mein guess kiya
                guessed[i] = true; // Player ne guess kar liya
                break; // Loop se bahar
            }
            
            // Agar last attempt bhi galat hai
            if(attempt == 5) 
			{
                cout << "Sorry! No more attempts. The number was: " << secret_number << endl;
                attempts[i] = 5; // Maximum attempts use kiye
                guessed[i] = false; // Player nahi jeeta
            }
        }
    }
    
    // Results calculate kerne ke lia
    cout << "\n=== GAME RESULTS ===" << endl;
    cout << "Total Players: " << num_players << endl;
    
    int winners_count = 0;
    for(int i = 0; i < num_players; i++) 
	{
        if(guessed[i]) 
		{
            winners_count++;
        }
    }
    cout << "Total Winners: " << winners_count << endl;
    cout << "Total Losers: " << (num_players - winners_count) << endl;
    
    // Top 3 winners find karo
    cout << "Top Three Winners: ";

    int count = 0;
    for(int attempts_count = 1; attempts_count <= 5 && count < 3; attempts_count++) 
	{
        for(int i = 0; i < num_players && count < 3; i++) 
		{
        if(guessed[i] && attempts[i] == attempts_count) 
		{
            if(count > 0) cout << ", ";
            cout << "Player " << (i + 1);
            guessed[i] = false;
            count++;
        }
    }
}
    cout << endl; 
    return 0;
}
