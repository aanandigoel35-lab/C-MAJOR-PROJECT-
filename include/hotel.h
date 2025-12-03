#ifndef HOTEL_H
#define HOTEL_H

#define MAX_ROOMS 5
#define MAX_NAME 50

struct Reservation {
    int room_no;
    char guest_name[MAX_NAME];
    int days;
};

// Function declarations
void bookRoom(struct Reservation hotel[], int booked[]);
void viewReservations(struct Reservation hotel[], int booked[]);

#endif
