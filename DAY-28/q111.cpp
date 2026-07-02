#include <iostream>
#include <string>
using namespace std;

// Menu-driven movie ticket booking system with a fixed number of seats.
int main() {
    const int TOTAL_SEATS = 10;
    bool booked[TOTAL_SEATS + 1] = { false };  // seats 1..10
    string holder[TOTAL_SEATS + 1];
    int choice;

    cout << "=== Ticket Booking System ===" << endl;
    cout << "There are " << TOTAL_SEATS << " seats available (1 to " << TOTAL_SEATS << ")." << endl;

    while (true) {
        cout << "\n1. Show Available Seats" << endl;
        cout << "2. Book a Seat" << endl;
        cout << "3. Cancel a Booking" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";

        if (!(cin >> choice)) break;

        if (choice == 1) {
            cout << "Available seats: ";
            bool any = false;
            for (int i = 1; i <= TOTAL_SEATS; i++) {
                if (!booked[i]) { cout << i << " "; any = true; }
            }
            if (!any) cout << "(none)";
            cout << endl;
        } else if (choice == 2) {
            int seat;
            cout << "Enter seat number to book (1-" << TOTAL_SEATS << "): ";
            cin >> seat;
            if (seat < 1 || seat > TOTAL_SEATS) cout << "Invalid seat number." << endl;
            else if (booked[seat]) cout << "Seat already booked." << endl;
            else {
                cin.ignore();
                cout << "Enter passenger name: ";
                getline(cin, holder[seat]);
                booked[seat] = true;
                cout << "Seat " << seat << " booked for " << holder[seat] << "." << endl;
            }
        } else if (choice == 3) {
            int seat;
            cout << "Enter seat number to cancel: ";
            cin >> seat;
            if (seat < 1 || seat > TOTAL_SEATS) cout << "Invalid seat number." << endl;
            else if (!booked[seat]) cout << "Seat is not booked." << endl;
            else {
                booked[seat] = false;
                cout << "Booking for seat " << seat << " cancelled." << endl;
            }
        } else if (choice == 4) {
            cout << "Thank you! Enjoy the show." << endl;
            break;
        } else {
            cout << "Invalid choice." << endl;
        }
    }

    return 0;
}
