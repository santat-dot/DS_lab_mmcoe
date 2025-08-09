/*Game Development:
write a game development program that implements the Bubble Sort algorithm. The program will simulate a simple game where the player can input a set of numbers, and the numbers will be sorted using Bubble Sort to simulate a "level-up" scenario where the player's scores are sorted in ascending order.
*/


#include <iostream>
using namespace std;

int main() {
    int score1[5];  
    cout << "Enter for Player 1:\n";
    for (int i = 0; i < 5; i++) {
        cin >> score1[i];
    }

    for (int i = 0; i < 4; i++) {           
        for (int j = 0; j < 4 - i; j++) {   
            if (score1[j] < score1[j + 1]) { 
                int temp = score1[j];
                score1[j] = score1[j + 1];
                score1[j + 1] = temp;
            }
        }
    }

    
    cout << "\nPlayer 1 score in descending order:\n";
    for (int i = 0; i < 5; i++) {
        cout << score1[i] << " ";
    }

    
    cout << endl;


     int score2[5];  
    cout << "Enter score for Player 2:\n";
    for (int i = 0; i < 5; i++) {
        cin >> score2[i];
    }

    for (int i = 0; i < 4; i++) {           
        for (int j = 0; j < 4 - i; j++) {   
            if (score2[j] < score2[j + 1]) { 
                int temp = score2[j];
                score2[j] = score2[j + 1];
                score2[j + 1] = temp;
            }
        }
    }

    
    cout << "\nPlayer 2 score in descending order:\n";
    for (int i = 0; i < 5; i++) {
        cout << score2[i] << " ";
    }

    cout << endl;

    if(score1[0]>score2[0]){
        cout<<"player 1 is winner";
    }
    
    else if(score1[0]<score2[0]){
        cout<<"player 2 is winner";
    }

    else{
        cout<<"Match is tie";
    }



    return 0;
}
