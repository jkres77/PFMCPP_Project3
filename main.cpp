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

 
struct Person 
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTraveled;

    struct Limb 
    {
        void stepForward();
        int stepSize();
    };

    Limb leftFoot, rightFoot;

    void run(int, bool);
};

// Person p;

void Person::run(int howFast, bool startWithLeftFoot)
{    
    howFast = 5;
    if (startWithLeftFoot == true)
    {
        leftFoot.stepForward();
        rightFoot.stepForward();
    }
    else 
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    distanceTraveled += leftFoot.stepSize() + rightFoot.stepSize();
}

void Person::Limb::stepForward()
{

}

int Person::Limb::stepSize()
{
    return 10;
}


 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you decide to write empty functions, you will need to fill them in with code in part 3.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */


struct Gym
{
    int numTreadmills = 9;
    int numBarbells = 48;
    int numWeightBenches = 3;
    int numProtienBars = 21;
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

    int provideEquipment(std::string currentMembers);

    int provideWorkputSpace(YogaRoom yogaRoom, int numMembers);

    void provideTrainingProgram(bool isPilates,  bool isYoga, std::string trainerName = "Mark");

    YogaRoom excerciseArea;
};

void Gym::YogaRoom::reserveRoom(int numMembers)
{
    if (numMembers > 6)
    {
        isReserved = true;
        std::cout << "room is full" << std::endl;
    }
    else 
    {
        isReserved = false;
        std::cout << "come on in" << std::endl;
    }
}

void Gym::YogaRoom::startClass(double time, std::string classType)
{
    if (time < 5.30)
    {
        std::cout << "Enter class Type:";
        std::cin >> classType;
        std::cout << classType << " starts now" << std::endl;
    }
}

void Gym::YogaRoom::lighting(bool lightsOn)
{
    if (lightsOn == true)
    {
        std::cout << "Please turn off before leaving" << std::endl;
    }
}

int Gym::provideEquipment(std::string currentMembers)
{
    if (currentMembers != "William")
    {
        numBarbells = 10;
    }
    return 0;
}

int Gym::provideWorkputSpace(Gym::YogaRoom yogaRoom, int numMembers = 8)
{
    if (yogaRoom.isReserved == true && numMembers > 10)
    {
        std::cout << "Room is full" << std::endl;
    }
    return numMembers;
}

void Gym::provideTrainingProgram(bool isPilates, bool isYoga, std::string trainerName)
{
    if (isPilates == true || isYoga == true)
    {
        std::cin >> trainerName;
    }
}

//===============================================================

struct GasStation
{
    double totalGallonsGas = 126.48;
    int numGasPumps;
    std::string productList = "cigarettes, beer, whisky, Snickers bars, Red Bull";
    int numCandyBars = 56;
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

    int provideGas(double gallonsPaidFor, bool isDeisel);
    void chargeCard(SnackFood bagChips, bool isCredit, int zipCode, bool addCarwash, bool canAffordSnack);
    void allowParking(bool isCustomer, double carSize, bool canUseForGym);

    SnackFood bagChips;
    Gym myGym;
};

int GasStation::SnackFood::provideEnergy(int numCalories, int numGramsProtien)
{
    if (snackType == "BeefJerky")
    {
        numCalories = 82;
        numGramsProtien = 7;
    }
    return 0;
}

float GasStation::SnackFood::provideFlavor(bool tastesGood)
{
    if (snackType == "DietSoda")
    {
        tastesGood = false;
    }
    return 0;
}

void GasStation::SnackFood::cureHunger(bool stillHungry)
{
    if (numServings < 2)
    {
        stillHungry = true;
    }
}

int GasStation::provideGas(double gallonsPaidFor, bool isDeisel)
{
    if (isDeisel == true)
    {
        totalGallonsGas = gallonsPaidFor * 1.3;
    }
    return totalGallonsGas;
}

void GasStation::chargeCard(SnackFood bagChips, bool isCredit, int zipCode, bool addCarwash, bool canAffordSnack)
{
    isCredit = true;
    addCarwash = true;
    zipCode = 70448;
    if (canAffordSnack == true)
    {
        bagChips.cureHunger(true);
    }
}

void GasStation::allowParking(bool isCustomer, double carSize, bool canUseForGym)
{
    carSize = 82.4;
    if (isCustomer == true && canUseForGym == true)
    {
        Gym::YogaRoom unusedYogaRoom;
        myGym.provideWorkputSpace(unusedYogaRoom, 2);
    }
}

//==============================================================

struct CoatRack
{
    int rackSpace = 4;
    double rackWidth = 24.06;
    int numCoats = 6;
    int numHats = 2;
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

    float mountRack(float wallHeight, bool addedSupport);
    void hangHats(Hat myHat1, int hookToHang, int hatsPerHook);
    void hangCoats(int coatsToHang, int coatsPerHook);

    Hat myHat1;
    Hat myHat2;
};

void CoatRack::Hat::sitOnHead(float howLongToWear, bool doesFit)
{
    if (diameter > 2.4f)
    {
        doesFit = true;
    }
    howLongToWear = 32.5f;
}

void CoatRack::Hat::containsRabbit(bool isRabbitInHat)
{
    if (isRabbitInHat == true)
    {
        sitOnHead(0.0f, false);
    }
}

void CoatRack::Hat::provideStyle(bool matchesJacket)
{
    if (color == "blue")
    {
        matchesJacket = true;
    }
}

float CoatRack::mountRack(float wallHeight, bool addedSupport)
{
    if (addedSupport == true)
    {
        wallHeight *= rackWidth;
    }
    return 0;
}

void CoatRack::hangHats(Hat myHat1, int hookToHang, int hatsPerHook)
{
    myHat1.containsRabbit(false);
    hatsPerHook += hookToHang;
}

void CoatRack::hangCoats(int coatsToHang, int coatsPerHook)
{
    if (coatsToHang > 6)
    {
        coatsPerHook = 2;
    }
}

//==========================================================

struct RemoteControl
{
    int onOffSwitch = 1;
    bool containsBatteries = true;
    bool leftRightButtons = false;
    bool upDownButtons = true;
    float objectWeight = 0.14f;

    int changeChannel(int channel);
    void switchMode(bool hdmi);
    int turnOff(bool isButtonDown);
};

int RemoteControl::changeChannel(int channel)
{
    if (leftRightButtons == true)
    {
        channel += 1;
    }
    return channel;
}

void RemoteControl::switchMode(bool hdmi)
{
    if (changeChannel(4))
    {
        hdmi = true;
    }
    
}

int RemoteControl::turnOff(bool isButtonDown)
{
    if (onOffSwitch == 1 && isButtonDown == true)
    {
        changeChannel(false);
    }
    return 0;
}

//============================================================

struct ChannelStrip
{
    int numKnobs = 4;
    int numFaders = 1;
    float maxGainRange = 12.0f;
    float labelTextSize = 2.4f;
    int numInputs = 2;

    void makeAdjustments(float volume, float panning, bool mute);
    void acceptMicInput(bool isConnected);
    void acceptAudioInput(bool isConnected, bool isMono);
};

void ChannelStrip::makeAdjustments(float volume, float panning, bool mute)
{
    maxGainRange = 8.0f;
    volume = 7.3f;
    panning = -1.2f;
    mute = false;
}

void ChannelStrip::acceptMicInput(bool isConnected)
{
    if (numInputs == 3)
    {
        isConnected = true;
    }
}

void ChannelStrip::acceptAudioInput(bool isConnected, bool isMono)
{
    acceptMicInput(false);
    isConnected = true;
    isMono = false;
}

//============================================================

struct Equalizer
{
    int numBands = 3;
    double maxFreqRange = 20000.0;
    std::string knobColor = "Blue";
    std::string filterType = "lowShelf";
    double knobSmoothness = 2.6;

    double boostBass(float level, float freqRange);
    double cutHiFreq(float amountToCut, float freqRange);
    double adjustWidth(float level);
};

double Equalizer::boostBass(float level, float freqRange)
{
    level = 24.0f;
    freqRange = 94.0f;

    return 0;
}

double Equalizer::cutHiFreq(float amountToCut, float freqRange)
{
    if (amountToCut > freqRange)
    {
        freqRange = 1200.0f;
    }

    return freqRange;
}

double Equalizer::adjustWidth(float level)
{
    if (level > 12.0f)
    {
        level = 12.0f;
    } 

    return level;
}

//============================================================

struct Preamp
{
    float quality = 96.0f;
    int numControls = 1;
    float gainIncrease = 24.0f;
    double lineSensitivity = 10.0;
    bool clippingIndicator = false;

    int boostAmp(float level);
    int trimAmp(float level);
    int distortSignal(float level, bool allowClip = false);
};

int Preamp::boostAmp(float level)
{
    level *= gainIncrease;

    return level;
}

int Preamp::trimAmp(float level)
{
    level = gainIncrease - 5.0f;

    return level;
}

int Preamp::distortSignal(float level, bool allowClip)
{
    if (allowClip == false)
    {
        if (gainIncrease > 24.0f)
        {
            level = 12.0f;
        }
    }
    else 
    {
        level = gainIncrease;
    }

    return level;
}

//============================================================

struct MasterControls
{
    double volLevel = 9.2;
    double panSetting = -3.4;
    bool meterActive = true;
    float volRangeInDb = 24.0f;
    double headphoneLevel = 8.2;

    void setMainVolume(float level, float maxRange = 24.0f);
    void setHeadphoneVolume(float level, bool isActive = true);
    void indicateLevel(bool isActive = true, bool isClipping = false);
};

void MasterControls::setMainVolume(float level, float maxRange)
{
    if (maxRange > 12.0f)
    {
        level = volLevel - 1.0f;
    }
}

void MasterControls::setHeadphoneVolume(float level, bool isActive)
{
    if (isActive == true)
    {
        level = volLevel;
    }
}

void MasterControls::indicateLevel(bool isActive, bool isClipping)
{
    if (isActive == true)
    {
        meterActive = true;
    }
    
    if (isClipping == true)
    {
        setMainVolume(12.0f, 24.0f);
    }
}

//============================================================

struct AuxSend
{
    int numSends = 3;
    int numReturns = 6;
    bool tapeInButton = true;
    int numSendKnobs = 8;
    bool monoStereoOption = true;

    void sendToFx(int numInputs);
    void adjustSendLevel(float levelToSend);
    void acceptAudioIn(bool isConnected, bool isMono = true);
};

void AuxSend::sendToFx(int numInputs)
{
    if (numInputs == 1)
    {
        monoStereoOption = true;
    }
}

void AuxSend::adjustSendLevel(float levelToSend)
{
    levelToSend = 4.0f;
}

void AuxSend::acceptAudioIn(bool isConnected, bool isMono)
{
    isMono = monoStereoOption;

    if (monoStereoOption == true && isConnected == true)
    {
        sendToFx(1);
    }
    else
    {
        sendToFx(2);
    }
}

//============================================================

struct MixingConsole
{
    ChannelStrip channel;
    Equalizer eq;
    Preamp pre;
    MasterControls main;
    AuxSend send;

    double adjustVol(float volLevel, float maxVolRange);
    int outToSpeakers(int numCables, bool isConnected);
    void indicateLevel(bool isActive, bool isClipping);
};

double MixingConsole::adjustVol(float volLevel, float maxVolRange)
{
    volLevel = 4.5f;

    if (main.volRangeInDb == 24.0f)
    {
        maxVolRange = 12.0f;
    }

    return volLevel;
}

int MixingConsole::outToSpeakers(int numCables, bool isConnected)
{
    if (isConnected == true)
    {
        channel.acceptAudioInput(true, true);
        numCables = 1;
    }

    return numCables;
}

void MixingConsole::indicateLevel(bool isActive, bool isClipping)
{
    isActive = true;

    if (isClipping == true)
    {
        main.indicateLevel(true, true);
    }
}

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
