/*
 * This is a simple drinking game. Juoma means "a drink" in Finnish.
 * Rules are simple:
 *   - List players
 *   - List available drinks
 *   - The person with the highest number has to drink the drink provided by the game,
 *      player can decide portion size
 *   - If you puke or pass out, you lose
 *   - If a drink runs out, it must be removed from the drink list
 *   - Last one who's not thrown up or passed out, IS THE WINNER!
 *   - Do not die
 *   - Have fun
 *
 *  Juha Tauriainen @juha_tauriainen juha@bin.fi
 */

#include <iostream>
 
int main()
{
    // list players here
    const char* players[5] = {"Juha", "Pekka", "Timo", "Liisa", "Maija"};
    
    // list available drinks here
    const char* drinks[4] = {"Beer", "Koskenkorva", "Whiskey", "Milk"};
    
    char winnerString[100];
    int winner = 0;
    
    char result [100];
    
    int i = 5;
    while(i--) {
        int roll = rand() % 100 + 1;
        int drink = rand() % 4;
        sprintf(result, "%s rolls kukkuu %d for %s\n", players[i], roll, drinks[drink]);
        printf("%s", result);
        
        if(roll > winner) {
            winner = roll;
            sprintf(winnerString, "%s", result);
        }

    }
    
    printf("WINNER: %s", winnerString);
    return 0;
}