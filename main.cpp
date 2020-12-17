 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you decide to write empty functions, you will need to fill them in with code in part 3.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
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
struct Gym
{
    // 1) number of treadmills
    int numTreadmills = 9;
    // 2) number of barbells
    int numBarbells = 48;
    //3) number of weight benches
    int numWeightBenches = 3;
    // 4) number of protien bars
    int numProtienBars = 21;
    // 5) membership list
    std::string membershipList = "Todd, John, Lisa";

    struct YogaRoom
    {
        bool isReserved = false;
        float floorWidthSqFt = 67.3f;
        float floorLengthSqFt = 56.21f;
        int numMembersUsing = 3;
        int numYogaMats = 12;

        void reserveRoom(int numMembers = 6);
        void startClass(double time = 3.15, std::string classType = "Pilates");
        void lighting(bool lightsOn = true);
    };

    // 1) provide excersize equiptment
    int provideEquipment(std::string currentMembers);

    // 2) provide space to workout
    int provideWorkputSpace(YogaRoom yogaRoom, int numMembers);

    //3) provide training programs
    void provideTrainingProgram(bool isPilates,  bool isYoga, std::string trainerName = "Mark");

    YogaRoom excerciseArea;
};
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
struct GasStation
{
    //1) amount of gas for pumps
    double totalGallonsGas = 126.48;
    //2) number of gas pumps
    int numGasPumps;
    //3) product inventory list
    std::string productList = "cigarettes, beer, whisky, Snickers bars, Red Bull";
    //4) number of candy bars
    int numCandyBars = 56;
    //5) number of energy drinks
    int numEnergyDrinks = 31;

    struct SnackFood 
    {
        std::string snackType = "chips";
        float price = 2.95f;
        double weightInOunces = 0.8;
        int numServings = 2;
        int numCarbsInGrams = 26;

        int provideEnergy(int numCalories, int numGramsProtien);
        float provideFlavor(bool tastesGood = false);
        void cureHunger(bool stillHungry = true);
    };

    //1) provide gas to customer
    int provideGas(double gallonsPaidFor, bool isDeisel);
    //2) charge credit card
    void chargeCard(SnackFood bagChips, bool isCredit, int zipCode, bool addCarwash, bool canAffordSnack);
    //3) provide parking space
    void allowParking(bool isCustomer, double carSize, bool canUseForGym);

    SnackFood bagChips;
    Gym myGym;
};
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
struct CoatRack
{
    //1) amount of space on rack
    int rackSpace = 4;
    //2) width of rack
    double rackWidth = 24.06;
    //3) number of coats on rack
    int numCoats = 6;
    //4) number of hats on rack
    int numHats = 2;
    //5) number of hooks on rack
    int numHooks = 12;

    struct Hat
    {
        int size = 4;
        float diameter;
        std::string color = "Red";
        bool feather = true;
        std::string material = "Felt";

        void sitOnHead(float howLongToWear, bool doesFit);
        void containsRabbit(bool isRabbitInHat = true);
        void provideStyle(bool matchesJacket);
    };

    //1) mount to wall
    float mountRack(float wallHeight, bool addedSupport);
    //2) hang hats
    void hangHats(Hat myHat1, int hookToHang, int hatsPerHook);
    //3) hang coats
    void hangCoats(int coatsToHang, int coatsPerHook);

    Hat myHat1;
    Hat myHat2;
};
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
struct RemoteControl
{
    // 1) on/off switch
    int onOffSwitch = 1;
    // 2) contains batteries
    bool containsBatteries = true;
    // 3) left/right buttons
    bool leftRightButtons = false;
    // 4) up/down buttons
    bool upDownButtons = true;
    // 5) weight of object
    float objectWeight = 0.14f;

    // 1) change channel
    int changeChannel(int channel);
    // 2) switch mode
    void switchMode(bool hdmi);
    // 3) turn tv off
    int turnOff(bool isButtonDown);
};
/*
Thing 5) Channel Strip
5 properties:
    1) number of knobs
    2) number of faders
    3) max range of gain knob
    4) text size used on control labels
    5) number of inputs
3 things it can do:
    1) apply adjustments to channel
    2) accept input of microphone
    3) accept input of audio cable
 */
struct ChannelStrip
{
    // 1) number of knobs
    int numKnobs = 4;
    // 2) number of faders
    int numFaders = 1;
    // 3) max range of gain knob
    float maxGainRange = 12.0f;
    // 4) text size used on control labels
    float labelTextSize = 2.4f;
    // 5) number of inputs
    int numInputs = 2;

    // 1) apply adjustments to channel
    void makeAdjustments(float volume, float panning, bool mute);
    // 2) accept input of microphone
    void acceptMicInput(bool isConnected);
    // 3) accept input of audio cable
    void acceptAudioInput(bool isConnected, bool isMono);
};
/*
Thing 6) Equalizer
5 properties:
    1) number of bands
    2) max range of frequency
    3) color of knobs
    4) type of filter
    5) smoothness of control
3 things it can do:
    1) boost the bass frequency
    2) cut the high frequency
    3) adjust the width of the frequency band
 */
struct Equalizer
{
    // 1) number of bands
    int numBands = 3;
    // 2) max range of frequency
    double maxFreqRange = 20000.0;
    // 3) color of knobs
    std::string knobColor = "Blue";
    // 4) type of filter
    std::string filterType = "lowShelf";
    // 5) smoothness of control
    double knobSmoothness = 2.6;

    // 1) boost the bass frequency
    double boostBass(float level, float freqRange);
    // 2) cut the high frequency
    double cutHiFreq(float amountToCut, float freqRange);
    // 3) adjust the width of the frequency band
    double adjustWidth(float level);
};
/*
Thing 7) Preamp
5 properties:
    1) quality of effect
    2) number of controls
    3) amount of gain increase
    4) line sensitivity
    5) clipping indicator
3 things it can do:
    1) boost signal amplitude 
    2) trim signal amplitude
    3) distort overall signal
 */
struct Preamp
{
    // 1) quality of effect
    float quality = 96.0f;
    // 2) number of controls
    int numControls = 1;
    // 3) amount of gain increase
    float gainIncrease = 24.0f;
    // 4) line sensitivity
    double lineSensitivity = 10.0;
    // 5) clipping indicator
    bool clippingIndicator = false;

    // 1) boost signal amplitude 
    int  boostAmp(float level);
    // 2) trim signal amplitude
    int trimAmp(float level);
    // 3) distort overall signal
    int distortSignal(float level, bool allowClip = false);
};
/*
Thing 8) Master Controls
5 properties:
    1) volume control level
    2) panning control setting
    3) level meter indicator
    4) range of master volume in db
    5) headphone level
3 things it can do:
    1) adjust the master volume
    2) adjust the headphone volume
    3) indicate overall output level
 */
struct MasterControls
{
    // 1) volume control level
    double volLevel = 9.2;
    // 2) panning control setting
    double panSetting = -3.4;
    // 3) level meter indicator
    bool meterActive = true;
    // 4) range of master volume in db
    float volRangeInDb = 24.0f;
    // 5) headphone level
    double headphoneLevel = 8.2;

    // 1) adjust the master volume
    void setMainVolume(float level, float maxRange = 24.0f);
    // 2) adjust the headphone volume
    void setHeadphoneVolume(float level, bool isActive = true);
    // 3) indicate overall output level
    void indicateLevel(bool isActive = true, bool isClipping = false);
};
/*
Thing 9) Aux/Send Section
5 properties:
    1) number of sends
    2) number of returns
    3) tape-in activation button
    4) number of send controls
    5) mono/stereo option
3 things it can do:
    1) send input to external effects
    2) adjust the send levels
    3) accept input of audio cable
 */
struct AuxSend
{
    // 1) number of sends
    int numSends = 3;
    // 2) number of returns
    int numReturns = 6;
    // 3) tape-in activation button
    bool tapeInButton = true;
    // 4) number of send controls
    int numSendKnobs = 8;
    // 5) mono/stereo option
    bool monoStereoOption = true;

    // 1) send input to external effects
    void sendToFx(int numInputs);
    // 2) adjust the send levels
    void adjustSendLevel(float levelToSend);
    // 3) accept input of audio cable
    void acceptAudioIn(bool isConnected, bool isMono = true);
};
/*
Thing 10) Mixing Console
5 properties:
    1) Channel Strip
    2) Equalizer
    3) Preamp
    4) Master Controls
    5) Aux/Send Section
3 things it can do:
    1) adjust volume
    2) output to speakers
    3) indicate level
 */
struct MixingConsole
{
    // 1) Channel Strip
    ChannelStrip channel;
    // 2) Equalizer
    Equalizer eq;
    // 3) Preamp
    Preamp pre;
    // 4) Master Controls
    MasterControls main;
    // 5) Aux/Send Section
    AuxSend send;

    // 1) adjust volume
    double adjustVol(float volLevel, float maxVolRange);
    // 2) output to speakers
    int outToSpeakers(int numCables, bool isConnected);
    // 3) indicate level
    void indicateLevel(bool isActive, bool isClipping);
};
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
