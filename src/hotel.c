#include <stdio.h>
#include <string.h>
#include "hotel.h"

void bookRoom(struct Reservation hotel[], int booked[]) {
    int room, days;
    char name[MAX_NAME];

    printf("Enter room number (1-%d): ", MAX_ROOMS);
    scanf("%d", &room);

    if (room < 1 || room > MAX_ROOMS) {
        printf("Invalid room number!\n");
        return;
    }

    if (booked[room-1]) {
        printf("Room %d is already booked!\n", room);
    } else {
        printf("Enter guest name: ");
        scanf(" %49[^\n]", name);   // safer input
        printf("Enter number of days: ");
        scanf("%d", &days);

        hotel[room-1].room_no = room;
        strcpy(hotel[room-1].guest_name, name);
        hotel[room-1].days = days;
        booked[room-1] = 1;

        printf("Room %d booked successfully for %s!\n", room, name);
    }
}

void viewReservations(struct Reservation hotel[], int booked[]) {
    printf("\n--- Current Reservations ---\n");
    for (int i = 0; i < MAX_ROOMS; i++) {
        if (booked[i]) {
            printf("Room %d: %s (%d days)\n",
                   hotel[i].room_no, hotel[i].guest_name, hotel[i].days);
        } else {
            printf("Room %d: Available\n", i+1);
        }
    }
}
