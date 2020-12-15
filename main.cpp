/*
Project 3 - Part 1c / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

1) write the 10th UDT
    come up with an object that is made of 5 smaller parts.
    These parts will not be defined using Primitives, but instead will be their own UDTs you'll define in Part 1d
    
    Here is an example:
    Cell Phone

    A Cell Phone is made up of the following 5 properties:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or "has a cpu" as one of the properties of the CellPhone
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' (has a) as a member variable type.
    Instead, prefer the other primitive types.

    When you choose your 5 smaller parts, remember that each of these 5 Sub Objects will need 
    to be defined with 5 primitive properties and 3 actions EACH.  
*/


/*
Thing 1) Gym
5 properties:
    1) number of treadmills
    2) number of barbells
    3) number of weight benches
    4) number of protien bars
    5) membership list
3 things it can do:
    1) provide excersize equiptment
    2) provide space to workout
    3) provide training programs
 */

/*
Thing 2) Gas Station
5 properties:
    1) amount of gas for pumps
    2) number of gas pumps
    3) product inventory list
    4) number of candy bars
    5) number of energy drinks
3 things it can do:
    1) provide gas to customer
    2) charge credit card
    3) provide parking space
 */

/*
Thing 3) Coat Rack
5 properties:
    1) amount of space on rack
    2) width of rack
    3) number of coats on rack
    4) number of hats on rack
    5) number of hooks on rack
3 things it can do:
    1) mount to wall
    2) hang hats
    3) hang coats
 */

/*
Thing 4) Remote Control
5 properties:
    1) on/off switch
    2) contains batteries
    3) left/right buttons
    4) up/down buttons
    5) weight of object
3 things it can do:
    1) change channel
    2) switch mode
    3) turn tv off
 */

/*
Thing 10) Mixing Console
5 properties:
    1) Volume Fader
    2) Panning Knob
    3) Power Switch
    4) Line Input Jack
    5) Level Meter
3 things it can do:
    1) adjust volume
    2) output to speakers
    3) indicate level
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
