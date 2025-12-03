
#include <stdio.h>
#include "hotel.h"

int main() {
    struct Reservation hotel[MAX_ROOMS];
    int booked[MAX_ROOMS] = {0};
    int choice;

    printf("=== Hotel Reservation System ===\n");

    while (1) {
        printf("\n1. Book Room\n2. View Reservations\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            bookRoom(hotel, booked);
        }
        else if (choice == 2) {
            viewReservations(hotel, booked);
        }
        else if (choice == 3) {
            printf("Exiting system. Goodbye!\n");
            break;
        }
        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
