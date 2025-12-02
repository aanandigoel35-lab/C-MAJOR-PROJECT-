HOTEL RESERVATION SYSTEM

DESCRIPTION

The Hotel Reservation System is a console-based room booking project written in C programming language. The objective of this system is to allow the user to book rooms, enter guest details, check availability, and manage reservations easily. The program is designed using simple modular logic, menu-driven interaction, and structure-based data handling.

The project follows clean coding practices, with separate parts for:
	•	Main program logic (main.c)
	•	Reservation handling using structures
	•	Room availability tracking
	•	Input validation and menu operations

This project helps beginners understand arrays, structures, conditional statements, loops, and basic reservation management. It also demonstrates logic flow, user interaction, and decision-making based on user choices.

⸻

GETTING STARTED

When the program begins, all rooms are initialized as available. The user is shown a main menu with options:
	•	1 — Book Room
	•	2 — View Reservations
	•	3 — Exit

How Booking Works
	•	User enters a room number (1–5).
	•	If the room is available → user enters guest name and number of days.
	•	Data is stored in a structure array.
	•	If the room is already booked, a message is shown.

How Viewing Works
	•	Program displays all rooms:
	•	Booked rooms show guest name and stay duration.
	•	Available rooms are clearly marked.

Program Ending

After selecting Exit, the program closes cleanly and stops running.

⸻

BUILD INSTRUCTIONS

Step 1 — Create a folder and place this file inside:
	•	main.c

(Filenames must be exact.)

Step 2 — Compile the Project Using GCC

Open Terminal / CMD inside the project folder and run:
gcc main.c -o hotel_system

Step 3 — Run the Game

After successful compilation, run:
./hotel_system

USAGE

This project can be used for:
	1.	Learning C Programming
Understanding structures, arrays, menu-driven programs, input handling, and basic data storage.
	2.	College Assignments / Mini Projects
This program fulfills common C mini-project requirements: flowchart support, modular logic, documentation, and user-interactive menu.
	3.	Demonstrating Basic Reservation Logic
Useful for understanding how room booking apps work, how records are stored, and how availability is checked.
	4.	Enhancing into a Larger System
The logic can be extended into:
	•	Multi-room hotel management
	•	GUI-based room booking
	•	File-handling systems
	•	Online room reservation portals

⸻

CONTRIBUTING

If someone wants to contribute to this project, here is the development workflow:
	1.	Fork the project repository and create your own version.
	2.	Create a new branch:
git checkout -b feature-update


3.	Make your changes. Possible enhancements include:
	•	Adding room cancellation
	•	Adding price calculation
	•	Improving UI
	•	Adding file storage for saving bookings
	•	Fixing input bugs
	4.	Test your changes to ensure the program compiles and runs correctly.
5.	Commit your updates:
git commit -m "Added new reservation feature"
