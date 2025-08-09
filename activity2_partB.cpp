/*Organizing Cards in a Hand:
Application: When playing card games, players often use an approach similar to insertion sort to  organize their cards. They pick one card at a time and insert it into the correct position in their hand, maintaining a sorted sequence. Write a program that demonstrates how to organize (sort) cards in a hand using insertion sort
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of cards: ";
    cin >> n;

    int cards[n];
    cout << "Enter the card values: ";
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    

    for (int i = 1; i < n; i++) {
        int key = cards[i];
        int j = i - 1;
        while (j >= 0 && cards[j] > key) {
            cards[j + 1] = cards[j];
            j--;
        }
        cards[j + 1] = key;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << cards[i] << " ";
    }
    cout << endl;

    return 0;
}

