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

    int randomNum = (rand() % 8) + 1; // generates random numbers from 1-8

    cout << randomNum;
}