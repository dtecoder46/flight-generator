#include <iostream>
#include <cstdlib>

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
    
    int randomNum = (rand() % 8) + 1; // generates random numbers from 1-8

    cout << randomNum;
}