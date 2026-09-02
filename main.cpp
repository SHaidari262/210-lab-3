#include <iostream>
using namespace std;

// Restaurant struct
struct Restaurant {
    string name;            // Name of the restaurant
    int noOfTables;         // Numbwer of tables in the restaurant
    string address;         // Address of the restaurant
    string phoneNumber;     // Phone number of the restaurant
    double rating;          // Rating of the restaurant
};

// Function to create struct instance
Restaurant createRestaurant ()
{
    // Create a Restaurant struct object
    Restaurant r;

    // Get the name
    cout << "Enter the name of the restaurant: ";
    getline(cin, r.name);

    // Get the number of tables
    cout << "Enter the number of tables: ";
    cin >> r.noOfTables;
    cin.ignore(1000, 10); // Ignore the newline character left in the input buffer

    // Get the address
    cout << "Enter the address: ";
    getline(cin, r.address);

    // Get the phone number
    cout << "Enter the phone number: ";
    getline(cin, r.phoneNumber);

    // Get the rating
    cout << "Enter the rating (0.0 - 5.0): ";
    cin >> r.rating;
    cin.ignore(1000, 10); // Ignore the newline character left in the input buffer

    // Return the Restaurant struct object
    return r;
}

// main fuction
int main() {
    // Create an instance of the Restaurant struct

}