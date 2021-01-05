/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 1) Add a constructor for each User-Defined-Type.
 
 2) amend some of your UDT's member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of each of your user-defined types in the main() function

 4) call some of your UDT's amended member functions in main().
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int a; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    a = 0;
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << a << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'a' equal to 0? " << (foo.a == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.





struct Gym
{
    int numTreadmills;
    int numBarbells;
    int numWeightBenches;
    int numProtienBars;
    std::string membershipList;
    Gym();
    
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

    void provideEquipmentList();

    int provideWorkputSpace(YogaRoom yogaRoom, int numMembers);

    void provideTrainingProgram(bool isPilates,  bool isYoga, std::string trainerName = "Mark");

    YogaRoom excerciseArea;
};

Gym::Gym()
{
    numTreadmills = 9;
    numBarbells = 48;
    numWeightBenches = 3;
    numProtienBars = 21;
    membershipList = "Todd, John, Lisa";
}

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
    if (lightsOn)
    {
        std::cout << "Please turn off before leaving" << std::endl;
    }
}

void Gym::provideEquipmentList()
{
    std::cout << "How mmany total pieces of equiptment? " << numTreadmills + numBarbells + numWeightBenches << std::endl;
}

int Gym::provideWorkputSpace(Gym::YogaRoom yogaRoom, int numMembers = 8)
{
    if (yogaRoom.isReserved && numMembers > 10)
    {
        std::cout << "Room is full" << std::endl;
    }
    return numMembers;
}

void Gym::provideTrainingProgram(bool isPilates, bool isYoga, std::string trainerName)
{
    if (isPilates || isYoga)
    {
        std::cin >> trainerName;
    }
}

//===============================================================

struct GasStation
{
    double totalGallonsGas;
    int numGasPumps;
    std::string productList;
    int numCandyBars;
    int numEnergyDrinks;
    GasStation();

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

    double provideGas(double gallonsPaidFor, bool isDeisel);
    void chargeCard();
    void allowParking(bool isCustomer, double carSize, bool canUseForGym);

    SnackFood bagChips;
    Gym myGym;
};

GasStation::GasStation()
{
    totalGallonsGas = 126.48;
    numGasPumps = 2;
    productList = "cigarettes, beer, whisky, Snickers bars, Red Bull";
    numCandyBars = 56;
    numEnergyDrinks = 31;
}

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

double GasStation::provideGas(double gallonsPaidFor, bool isDeisel)
{
    if (isDeisel)
    {
        totalGallonsGas = gallonsPaidFor * 1.3;
    }
    return totalGallonsGas;
}

void GasStation::chargeCard()
{
    // isCredit = true;
    // addCarwash = true;
    // zipCode = 70448;
    // if (canAffordSnack)
    // {
    //     myChips.cureHunger(true);
    // }

    std::cout << "How much gas are you getting? " << totalGallonsGas << std::endl;
}

void GasStation::allowParking(bool isCustomer, double carSize, bool canUseForGym)
{
    carSize = 82.4;
    if (isCustomer && canUseForGym)
    {
        Gym::YogaRoom unusedYogaRoom;
        myGym.provideWorkputSpace(unusedYogaRoom, 2);
    }
}

//==============================================================

struct CoatRack
{
    int rackSpace;
    double rackWidth;
    int numCoats;
    int numHats;
    int numHooks;
    CoatRack();

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

    float mountRack(double wallHeight, bool addedSupport);
    void hangHats(Hat myHat1, int hookToHang, int hatsPerHook);
    void hangCoats(int coatsToHang, int coatsPerHook);

    Hat myHat1;
    Hat myHat2;
};

CoatRack::CoatRack()
{
    rackSpace = 4;
    rackWidth = 24.06;
    numCoats = 6;
    numHats = 2;
    numHooks = 12;   
}

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
    if (isRabbitInHat)
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

float CoatRack::mountRack(double wallHeight, bool addedSupport)
{
    if (addedSupport)
    {
        wallHeight *= rackWidth;
    }
    return 0;
}

void CoatRack::hangHats(Hat thisHat, int hookToHang, int hatsPerHook)
{
    thisHat.containsRabbit(false);
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
    int onOffSwitch;
    bool containsBatteries;
    bool leftRightButtons;
    bool upDownButtons;
    float objectWeight;
    RemoteControl();
    int changeChannel(int channel);
    void switchMode(bool hdmi);
    int turnOff(bool isButtonDown);
};

RemoteControl::RemoteControl()
{
    onOffSwitch = 1;
    containsBatteries = true;
    leftRightButtons = false;
    upDownButtons = true;
    objectWeight = 0.14f;
}

int RemoteControl::changeChannel(int channel)
{
    if (leftRightButtons)
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
    std::cout << "Is the Roku set up? " << (hdmi == true ? "Yes" : "No") << "\n";
    
}

int RemoteControl::turnOff(bool isButtonDown)
{
    if (onOffSwitch == 1 && isButtonDown)
    {
        changeChannel(false);
    }
    return 0;
}

//============================================================

struct ChannelStrip
{
    int numKnobs;
    int numFaders;
    float maxGainRange;
    float labelTextSize;
    int numInputs;
    ChannelStrip();
    void makeAdjustments(float volume, float panning, bool mute);
    void acceptMicInput(bool isConnected);
    void acceptAudioInput(bool isConnected, bool isMono);
};

ChannelStrip::ChannelStrip()
{
    numKnobs = 4;
    numFaders = 1;
    maxGainRange = 12.0f;
    labelTextSize = 2.4f;
    numInputs = 2;
}

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
    std::cout << "How loud can it go? " << maxGainRange << "db" << std::endl;
}

//============================================================

struct Equalizer
{
    int numBands;
    double maxFreqRange;
    std::string knobColor;
    std::string filterType;
    double knobSmoothness;
    Equalizer();
    double boostBass(float level, float freqRange);
    double cutHiFreq(float amountToCut, float freqRange);
    double adjustWidth(double level);
};

Equalizer::Equalizer()
{
    numBands = 3;
    maxFreqRange = 20000.0;
    knobColor = "Blue";
    filterType = "lowShelf";
    knobSmoothness = 2.6;
}

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

    return static_cast<double>(freqRange);
}

double Equalizer::adjustWidth(double level)
{
    if (level > 12.0)
    {
        level = 12.0;
    } 

    return level;
}

//============================================================

struct Preamp
{
    float quality;
    int numControls;
    float gainIncrease;
    double lineSensitivity;
    bool clippingIndicator;
    Preamp();
    float boostAmp(float level);
    float trimAmp(float level);
    float distortSignal(float level, bool allowClip = false);
};

Preamp::Preamp()
{
    quality = 96.0f;
    numControls = 1;
    gainIncrease = 24.0f;
    lineSensitivity = 10.0;
    clippingIndicator = false;
}

float Preamp::boostAmp(float level)
{
    level *= gainIncrease;

    return level;
}

float Preamp::trimAmp(float level)
{
    level = gainIncrease - 5.0f;

    return level;
}

float Preamp::distortSignal(float level, bool allowClip)
{
    if (!allowClip)
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
    float volLevel;
    double panSetting;
    bool meterActive;
    float volRangeInDb;
    double headphoneLevel;
    MasterControls();
    void setMainVolume(float level, float maxRange = 24.0f);
    void setHeadphoneVolume(float level, bool isActive = true);
    void indicateLevel(bool isActive = true, bool isClipping = false);
};

MasterControls::MasterControls()
{
    volLevel = 9.2f;
    panSetting = -3.4;
    meterActive = true;
    volRangeInDb = 24.0f;
    headphoneLevel = 8.2;
}

void MasterControls::setMainVolume(float level, float maxRange)
{
    if (maxRange > 12.0f)
    {
        level = volLevel - 1.0f;
    }
}

void MasterControls::setHeadphoneVolume(float level, bool isActive)
{
    if (isActive)
    {
        level = volLevel;
    }
    std::cout << "Are the headphones working? " << (level >= volLevel ? "Yes" : "No") << "\n";
}

void MasterControls::indicateLevel(bool isActive, bool isClipping)
{
    if (isActive)
    {
        meterActive = true;
    }
    
    if (isClipping)
    {
        setMainVolume(12.0f, 24.0f);
    }
}

//============================================================

struct AuxSend
{
    int numSends;
    int numReturns;
    bool tapeInButton;
    int numSendKnobs;
    bool monoStereoOption;
    AuxSend();
    void sendToFx(int numInputs);
    void adjustSendLevel(float levelToSend);
    void acceptAudioIn(bool isConnected, bool isMono = true);
};

AuxSend::AuxSend()
{
    numSends = 3;
    numReturns = 6;
    tapeInButton = true;
    numSendKnobs = 8;
    monoStereoOption = true;
}

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

    if (monoStereoOption && isConnected)
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
    MixingConsole();
    float adjustVol(float volLevel, float maxVolRange);
    int outToSpeakers(int numCables, bool isConnected);
    void indicateLevel(bool isActive, bool isClipping);
};

MixingConsole::MixingConsole()
{
 
}

float MixingConsole::adjustVol(float volLevel, float maxVolRange)
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
    if (isConnected)
    {
        channel.acceptAudioInput(true, true);
        numCables = 1;
    }

    return numCables;
}

void MixingConsole::indicateLevel(bool isActive, bool isClipping)
{
    isActive = true;

    if (isClipping)
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
    Gym myGym;
    myGym.provideEquipmentList();

    std::cout << "Do we have enough equiptment for everyone? " << (myGym.numTreadmills + myGym.numBarbells + myGym.numWeightBenches > 20 ? "Yes" : "No") << "\n";

    //==============================================================

    GasStation cornerStore;
    cornerStore.chargeCard();

    std::cout << "Can we afford a snack too? " << (cornerStore.totalGallonsGas < 20.0 ? "Yes" : "No") << "\n";

    //==============================================================

    CoatRack rack;

    //==============================================================

    RemoteControl theRemote;
    theRemote.switchMode(true);
    theRemote.containsBatteries = false;

    std::cout << "Netflix and chill? " << (theRemote.containsBatteries == true ? "Sure" : "I'd rather watch VHS") << "\n";

    //==============================================================

    ChannelStrip channel;
    channel.acceptAudioInput(true, false);
    channel.makeAdjustments(7.4f, 0.0f, false);

    std::cout << "Should I turn it down? " << (channel.numInputs == 1 ? "No" : "Yes") << "\n";

    //==============================================================

    Equalizer eq;

    //==============================================================

    Preamp pre;

    //==============================================================

    MasterControls master;
    master.setHeadphoneVolume(4.0f, true);

    //==============================================================

    AuxSend aux;

    //==============================================================

    MixingConsole mixer;

    //==============================================================

    Example::main();
    std::cout << "good to go!" << std::endl;
}
