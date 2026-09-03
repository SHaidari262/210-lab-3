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

// Function to display restaurant details
void displayRestaurant(const Restaurant& r) {
    // Display the restaurant details
    cout << "\nRestaurant Details:" << endl;
    cout << "Name: " << r.name << endl;
    cout << "Number of Tables: " << r.noOfTables << endl;
    cout << "Address: " << r.address << endl;
    cout << "Phone Number: " << r.phoneNumber << endl;
    cout << "Rating: " << r.rating << endl;
}

// main fuction
int main() {
    // Call the createRestaurant function to get restaurant details
    Restaurant myRestaurant = createRestaurant();
    Restaurant myrastarurabrant = createRestaurant();
    Restaurant myrestaurant2 = createRestaurant();
    Restaurant myrestaurant3 = createRestaurant();
        
    // Display the restaurants
    displayRestaurant(myRestaurant); // Display the restaurant details
    displayRestaurant(myrastarurabrant); // Display the restaurant details
    displayRestaurant(myrestaurant2); // Display the restaurant details
    displayRestaurant(myrestaurant3); // Display the restaurant details

    return 0;
}