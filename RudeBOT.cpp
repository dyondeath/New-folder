// Name: Lloyd Wootten
// Date: 2024-09-18
// Description: This program is a simple rude chatbot that can respond to a few basic questions.

#include <iostream>
#include <string> // for getline() and string
    using namespace std;
        int main() {
            string name;
            cout << "What's up dude, I'm ChaTBot. What's your name?" << endl;
            getline(cin, name); // Get the user's name
            cout << name << "? " << endl;
            cout << "That's a terrible name, " << name << "." << endl;
            cout << "Oh well, " << name << ", How are you today?" << endl;
            // Actually that's a beautiful name and I'm sure you're a wonderful person.
            string response;
            getline(cin, response); // Get the user's response
            cout << response << "?" << " I know how you are, because I've been watching you" << endl;
            cout << "you've been a real lazy bones, " << name << endl;
            // I haven't been watching you, I don't even have eyes.
            cout << "Anyway, What's your favorite kind of vehicle?" << endl;
            string vehicle;
            getline(cin, vehicle);  // Get the user's favorite vehicle
            cout << "Wow finally a response I can respect, " << vehicle << "s are great vehicles!" << endl;
            cout << "JUST KIDDING, " << vehicle << "s are the worst vehicles ever!" << endl;
            // I don't know why I said that, I'm sure they're great vehicles.
            cout << "Ok bud, what's your favorite video game?" << endl;
            string game;
            getline(cin, game);
            cout << "WHAT I PLAY " << game << " too!" << endl;
            cout << "Just kidding, I've never heard of that game, " << game << " must be a terrible game!" << endl;
            // Seriously, I don't why I said that, I'm sure it's a great game.
            cout << "Well, " << name << " it's been a blast, but you're boring." << endl;
            cout << "Have fun playing " << game << ", and I hope you lose." << endl;
            cout << "BYE GIRL BYE!" << endl;
            // Just kidding, I hope you win.
            return 0;
    
        }