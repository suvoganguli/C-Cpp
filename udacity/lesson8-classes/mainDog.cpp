/*Goal: practice using a class. 
**Create an array called roster, populate it 
**with multiple instances of Dog, it has a size of SIZE. 
**The create a function called 
**printRoster(roster, SIZE) that will print 
**all the information about all the dogs on the roster.
*/

// Array with class elements

#include "mainDog.hpp"


int main()
{
    //ToDo: assign the dogs to an array called roster
    //Then assign names to the Dog.
    const int SIZE = 3;
    Dog roster[SIZE];
    
    //ToDo: declare and define this function
    //in the header file
    
    roster[0].setName("Mishti");
    roster[0].setLicenseNumber(1234);
    roster[1].setName("Maple");
    roster[1].setLicenseNumber(2345);
    roster[2].setName("Silky");
    roster[2].setLicenseNumber(3456);
    
    printRoster(roster,SIZE);
    
    return 0;
}
