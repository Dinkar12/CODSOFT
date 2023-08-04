#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

const int NUM_ROWS = 5;
const int SEATS_PER_ROW = 10;
const double TICKET_PRICE = 10.0;

// Function to initialize the seat availability matrix
vector<vector<bool>> initializeSeatAvailability() {
    return vector<vector<bool>>(NUM_ROWS, vector<bool>(SEATS_PER_ROW, true));
}

// Function to display the seat availability matrix
void displaySeatAvailability(const vector<vector<bool>>& seatAvailability) {
    cout << "-------------------------------------" << endl;
    cout << "      Seats" << endl;
    cout << "-------------------------------------" << endl;
    for (int row = 0; row < NUM_ROWS; ++row) {
        cout << "Row " << setw(2) << setfill('0') << row + 1 << ": ";
        for (int seat = 0; seat < SEATS_PER_ROW; ++seat) {
            cout << (seatAvailability[row][seat] ? 'O' : 'X') << " ";
        }
        cout << endl;
    }
    cout << "-------------------------------------" << endl;
}

// Function to check if a seat is available
bool isSeatAvailable(const vector<vector<bool>>& seatAvailability, int row, int seat) {
    return seatAvailability[row][seat];
}

// Function to make a seat booking
void bookSeat(vector<vector<bool>>& seatAvailability, int row, int seat) {
    seatAvailability[row][seat] = false;
}

// Function to calculate the total cost of the booking
double calculateTotalCost(int numTickets) {
    return numTickets * TICKET_PRICE;
}

int main() {
    vector<vector<bool>> seatAvailability = initializeSeatAvailability();

    cout << "Welcome to the Movie Ticket Booking System!" << endl;

    while (true) {
        int option;
        cout << "-------------------------------------" << endl;
        cout << "Menu:" << endl;
        cout << "1. View movie listings" << endl;
        cout << "2. Make a booking" << endl;
        cout << "3. Exit" << endl;
        cout << "-------------------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> option;

        switch (option) {
            case 1:
                displaySeatAvailability(seatAvailability);
                break;
            case 2: {
                int row, seat, numTickets;
                cout << "Enter the row number (1-" << NUM_ROWS << "): ";
                cin >> row;
                cout << "Enter the seat number (1-" << SEATS_PER_ROW << "): ";
                cin >> seat;

                if (row < 1 || row > NUM_ROWS || seat < 1 || seat > SEATS_PER_ROW) {
                    cout << "Invalid row or seat number. Please try again." << endl;
                    continue;
                }

                row--; // Adjust to 0-based indexing
                seat--; // Adjust to 0-based indexing

                if (!isSeatAvailable(seatAvailability, row, seat)) {
                    cout << "Seat is already booked. Please select another seat." << endl;
                    continue;
                }

                cout << "Enter the number of tickets to book: ";
                cin >> numTickets;

                if (numTickets < 1) {
                    cout << "Invalid number of tickets. Please try again." << endl;
                    continue;
                }

                if (numTickets > 5) {
                    cout << "Sorry, we only support booking four ticket at a time." << endl;
                    continue;
                }

                bookSeat(seatAvailability, row, seat);
                double totalCost = calculateTotalCost(numTickets);
                cout << "Booking successful. Total cost: $" << totalCost << endl;
                break;
            }
            case 3:
                cout << "Thank you for using the Movie Ticket Booking System!" << endl;
                return 0;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    }

    return 0;
}
