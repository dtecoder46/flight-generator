#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string locations[8] = {
        "South Pole", 
        "Nordwind Island", 
        "Warmland Island", 
        "Desert Island", 
        "Volcano Island", 
        "Axtell Isle", 
        "Big Rock Island", 
        "Valley Island"
    };
    
    srand(time(0)); // generates number on every program run

    int rand1 = (rand() % 8) + 1; // generates random numbers from 1-8

    int rand2 = (rand() % 8) + 1;

    cout << locations[rand1] + " to " + locations[rand2];
}