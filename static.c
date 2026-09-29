#include <stdio.h>
#define MAX_TRAINS 5
struct Train
{
    int trainNo;
    char name[30];
    int availableSeats;
};
struct Train trains[MAX_TRAINS] =
{
    {101, "Godavari Express", 20},
    {102, "Vande Bharat", 15},
    {103, "Konark Express", 25},
    {104, "Chennai Express", 10},
    {105, "Duronto Express", 18}
};
int trainCount = 5;
int countTrains()
{
    return trainCount;
}

int totalAvailableSeats()
{
    int i;
    int total = 0;

    for (i = 0; i < trainCount; i++)
    {
        total = total + trains[i].availableSeats;
    }
    return total;
}
float averageSeats()
{
    int total;
    total = totalAvailableSeats();
    if (trainCount == 0)
        return 0;
    return (float)total / trainCount;
}
void displayStatistics()
{
    int total;
    total = totalAvailableSeats();
    printf("\n===== Railway Statistics =====\n");
    printf("Total Trains: %d\n", countTrains());
    printf("Total Available Seats: %d\n", total);
    printf("Average Available Seats: %.2f\n", averageSeats());
}
int main()
{
    int choice;
    while (1)
    {
        printf("\n===== MEMBER 4 =====\n");
        printf("1. Display Statistics\n");
        printf("2. Total Trains\n");
        printf("3. Total Available Seats\n");
        printf("4. Average Available Seats\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            displayStatistics();
        }
        else if (choice == 2)
        {
            printf("Total Trains: %d\n", countTrains());
        }
        else if (choice == 3)
        {
            printf("Total Available Seats: %d\n",
                   totalAvailableSeats());
        }
        else if (choice == 4)
        {
            printf("Average Available Seats: %.2f\n",
                   averageSeats());
        }
        else if (choice == 5)
        {
            printf("Program ended.\n");
            break;
        }
        else
        {
            printf("Invalid choice.\n");
        }
    }
    return 0;
}