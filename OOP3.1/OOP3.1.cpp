#include <iostream>
#include "Date.h"

int main() {
    using namespace std; 
    Triad triad;
    cout << "Enter a triad (first second third): ";
    cin >> triad;

    
    cout << "Entered triad: " << triad << endl;

   /* 
    Triad nextTriad = triad++;
    cout << "Triad after postfix increment: " << nextTriad << endl;
    Triad prevTriad = --nextTriad;
    cout << "Triad after prefix decrement: " << prevTriad << endl;*/

    
    Triad anotherTriad(5, 7, 9);
    cout << "Another triad: " << anotherTriad << endl;
    cout << "Comparing triads:\n";
    cout << triad << " == " << anotherTriad << " : " << (triad == anotherTriad) << endl;
    cout << triad << " != " << anotherTriad << " : " << (triad != anotherTriad) << endl;
    cout << triad << " < " << anotherTriad << " : " << (triad < anotherTriad) << endl;
    cout << triad << " <= " << anotherTriad << " : " << (triad <= anotherTriad) << endl;
    cout << triad << " > " << anotherTriad << " : " << (triad > anotherTriad) << endl;
    cout << triad << " >= " << anotherTriad << " : " << (triad >= anotherTriad) << endl;

    Date date;
    
    cout << "\nEnter a date (year month day): ";
    cin >> date;

    
    cout << "Entered date: " << date << endl;

    
   /* Date nextDate = date++;
    cout << "Date after postfix increment: " << nextDate << endl;
    Date prevDate = --nextDate;
    cout << "Date after prefix decrement: " << prevDate << endl;*/

    
    Date anotherDate(2023, 4, 15);
    cout << "Another Date: " << anotherDate << endl;
    cout << "Comparing dates:\n";
    cout << date << " == " << anotherDate << " : " << (date == anotherDate) << endl;
    cout << date << " != " << anotherDate << " : " << (date != anotherDate) << endl;
    cout << date << " < " << anotherDate << " : " << (date < anotherDate) << endl;
    cout << date << " <= " << anotherDate << " : " << (date <= anotherDate) << endl;
    cout << date << " > " << anotherDate << " : " << (date > anotherDate) << endl;
    cout << date << " >= " << anotherDate << " : " << (date >= anotherDate) << endl;

    return 0;
}
