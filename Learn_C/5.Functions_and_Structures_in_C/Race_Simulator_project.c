#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Structures section
struct Race
{
    int numberOfLaps;
    int currentLap;
    char *firstPlaceDriverName;
    char *firstPlaceRaceCarColor;
};

struct RaceCar
{
    char *driverName;
    char *raceCarColor;
    int totalLapTime;
};

// Print functions section
void printIntro()
{
    printf("Welcome to our main event digital race fans!\nI hope everybody has their snacks because we are about to begin!\n");
}

void printCountDown()
{
    printf("Racers Ready! In...\n5\n4\n3\n2\n1\nRace!\n");
}

void printFirstPlaceAfterLap(struct Race race)
{
    printf("After lap number %d\n", race.currentLap);
    printf("First Place Is: %s in the %s car!\n", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
}

void printCongratulations(struct Race race)
{
    printf("Let's all congratulate %s in the %s race car for an amazing performance.\nIt truly was a great race and everybody have a goodnight!\n", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
}

// Logic functions section
int calculateTimeToCompleteLap()
{
    int speed = (rand() % 3) + 1;
    int acceleration = (rand() % 3) + 1;
    int nerves = (rand() % 3) + 1;

    return speed + acceleration + nerves;
}

void updateRaceCar(struct RaceCar *raceCar)
{
    raceCar->totalLapTime += calculateTimeToCompleteLap();
}

void updateFirstPlace(struct Race *race, struct RaceCar *raceCar1, struct RaceCar *raceCar2)
{
    if (raceCar1->totalLapTime <= raceCar2->totalLapTime)
    {
    race->firstPlaceDriverName = raceCar1->driverName;
    race->firstPlaceRaceCarColor = raceCar1->raceCarColor;
    } 
    else 
    {
    race->firstPlaceDriverName = raceCar2->driverName;
    race->firstPlaceRaceCarColor = raceCar2->raceCarColor;
    }
}

void startRace(struct RaceCar *raceCar1, struct RaceCar *raceCar2)
{
    struct Race race =
    {
        .numberOfLaps = 15,
        .currentLap = 1,
        .firstPlaceDriverName = "",
        .firstPlaceRaceCarColor = ""
    };

    for (int i = 1; i <= race.numberOfLaps-1; i++)
    {
        race.currentLap++;
        updateRaceCar(raceCar1);
        updateRaceCar(raceCar2);
        updateFirstPlace(&race, raceCar1, raceCar2);
        printFirstPlaceAfterLap(race);
    }
    printCongratulations(race);
}

int main()
{
    srand(time(NULL));

    struct RaceCar raceCar1 = {"Tim", "Red", calculateTimeToCompleteLap()};
    struct RaceCar raceCar2 = {"Mike", "Black", calculateTimeToCompleteLap()};

    printIntro();
    printCountDown();
    
    startRace(&raceCar1, &raceCar2);
}