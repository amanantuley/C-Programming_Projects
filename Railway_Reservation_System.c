#include <stdio.h>
#include <string.h>
// Railway Reservation system
#define MAX_SEATS 100

typedef struct {
    int seatNumber;
    char passengerName[50];
    int isBooked;
} Seat;

void initializeSeats(Seat seats[], int size) {
    for (int i = 0; i < size; i++) {
        seats[i].seatNumber = i + 1;
        seats[i].isBooked = 0;
        strcpy(seats[i].passengerName, "");
    }
}

void bookTicket(Seat seats[], int size) {
    int seatNumber;
    char name[50];

    printf("Enter seat number to book (1-%d): ", size);
    scanf("%d", &seatNumber);

    if (seatNumber < 1 || seatNumber > size) {
        printf("Invalid seat number!\n");
        return;
    }

    if (seats[seatNumber - 1].isBooked) {
        printf("Seat already booked!\n");
        return;
    }

    printf("Enter passenger name: ");
    scanf("%s", name);

    seats[seatNumber - 1].isBooked = 1;
    strcpy(seats[seatNumber - 1].passengerName, name);

    printf("Ticket booked successfully!\n");
}

void viewBookedTickets(Seat seats[], int size) {
    printf("Booked Tickets:\n");
    printf("Seat Number\tPassenger Name\n");

    for (int i = 0; i < size; i++) {
        if (seats[i].isBooked) {
            printf("%d\t\t%s\n", seats[i].seatNumber, seats[i].passengerName);
        }
    }
}
void cancelTicket(Seat seats[], int size) {
    int seatNumber;

    printf("Enter seat number to cancel (1-%d): ", size);
    scanf("%d", &seatNumber);

    if (seatNumber < 1 || seatNumber > size) {
        printf("Invalid seat number!\n");
        return;
    }

    if (!seats[seatNumber - 1].isBooked) {
        printf("Seat not booked!\n");
        return;
    }
    seats[seatNumber - 1].isBooked = 0;
    strcpy(seats[seatNumber - 1].passengerName, "");

    printf("Ticket canceled successfully!\n");
}
int main() {
    Seat seats[MAX_SEATS];
    int choice;

    initializeSeats(seats, MAX_SEATS);

    while (1) {
        printf("\nRailway Reservation System\n");
        printf("1. Book Ticket\n");
        printf("2. View Booked Tickets\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bookTicket(seats, MAX_SEATS);
                break;
            case 2:
                viewBookedTickets(seats, MAX_SEATS);
                break;
            case 3:
                cancelTicket(seats, MAX_SEATS);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
return 0;
}
