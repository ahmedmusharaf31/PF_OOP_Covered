#include <iostream> // Header file
using namespace std;
class Car // Parent class
{
protected:            // Access specifier
    string car_model; // Attributes of car as variables
    int car_year;
    int no_of_seats;

public:                          // Access specifier
    void set_model(string model) // Setter for Car Model
    {
        car_model = model;
    }
    void set_year(int year) // Setter for Car Year
    {
        car_year = year;
    }
    void set_seats(int seats) // Setter for No. of Seats in a Car
    {
        no_of_seats = seats;
    }
    string get_model() // Getter for Car Model
    {
        return car_model;
    }
    int get_year() // Getter for Car Year
    {
        return car_year;
    }
    int get_seats() // Getter for No. of Seats in a Car
    {
        return no_of_seats;
    }
    virtual void car_information() // Virtual Keyword for Runtime Polymorphism
    {
        cout << "---Car Information---" << endl;
        cout << "Model: " << get_model() << endl; // Calling getters
        cout << "Year: " << get_year() << endl;
        cout << "No. of Seats: " << get_seats() << endl;
    }
    // Pure virtual function as Car rent is different for Compact and Luxury Car
    virtual void car_rent(int no_of_hours) = 0;
};
class Compact_car : public Car // Child Class of Car
{
public:
    void car_infromation() // Function Overriding
    {
        // Calling function using Scope Resolution Operator
        Car::car_information();
    }
    void car_rent(int no_of_hours) // Taking no_of_hours as parameter
    {
        cout << "---Rent---" << endl;
        cout << no_of_hours * 600 << endl; // Rent/hr = 600 for Compact Car
        cout << "----------" << endl;
    }
};
class Luxury_car : public Car // Child Class of Car
{
public:
    void car_information() // Function Overriding
    {
        Car::car_information(); // Using Scope Resolution Operator
    }
    void car_rent(int no_of_hours) // Function Overriding for car_rent() function
    {
        cout << "---Rent---" << endl;
        cout << no_of_hours * 1000 << endl; // rent/hr = 1000 for Luxury Car
        cout << "----------" << endl;
    }
};
int main() // Main function
{
    int choice, no_of_hours; // Required Variables
    char again;
    Car *rented_cars[5]; // Array of Pointer
    do                   // do-while loop to ask user again and again
    {
        cout << "                    List of Cars:                      " << endl; // enlisting cars
        cout << "-------------------------------------------------------" << endl;
        cout << "(1) Alto - Compact Car - 4 Seats" << endl;
        cout << "(2) Cultus - Compact Car - 4 Seats" << endl;
        cout << "(3) Saga - Compact Car - 5 Seats" << endl;
        cout << "(4) BMW_Z4 - Luxury Car - 2 Seats" << endl;
        cout << "(5) Grand_Carnival - Luxury Car - 7 Seats" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "The Compact car will be charged Rupees 600 Per hour." << endl;
        cout << "The Luxury car will be charged Rupees 1000 Per hour." << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "Enter number (1-5) as per your choice: ";
        cin >> choice;
        switch (choice) // Switch case
        {
            {
            case 1:
                Compact_car alto;                  // Object of Compact_car class
                rented_cars[0] = &alto;            // Allocation of object to array
                rented_cars[0]->set_model("Alto"); // Passing data to Setter Function as argument
                rented_cars[0]->set_year(2018);
                rented_cars[0]->set_seats(4);
                rented_cars[0]->car_information(); // Runtime Polymorphism
                cout << "Enter number of hours for which you want to book the car: ";
                cin >> no_of_hours;
                rented_cars[0]->car_rent(no_of_hours); // Runtime Polymorphism
                break;
            }
            {
            case 2:
                Compact_car cultus;
                rented_cars[1] = &cultus;
                rented_cars[1]->set_model("Cultus");
                rented_cars[1]->set_year(2018);
                rented_cars[1]->set_seats(4);
                rented_cars[1]->car_information(); // Runtime Polymorphism
                cout << "Enter number of hours for which you want to book the car: ";
                cin >> no_of_hours;
                rented_cars[1]->car_rent(no_of_hours); // Runtime Polymorphism
                break;
            }
            {
            case 3:
                Compact_car saga;
                rented_cars[2] = &saga;
                rented_cars[2]->set_model("Saga");
                rented_cars[2]->set_year(2020);
                rented_cars[2]->set_seats(5);
                rented_cars[2]->car_information(); // Runtime Polymorphism
                cout << "Enter number of hours for which you want to book the car: ";
                cin >> no_of_hours;
                rented_cars[2]->car_rent(no_of_hours); // Runtime Polymorphism
                break;
            }
            {
            case 4:
                Luxury_car bmw;
                rented_cars[3] = &bmw;
                rented_cars[3]->set_model("BMW_Z4");
                rented_cars[3]->set_year(2005);
                rented_cars[3]->set_seats(2);
                rented_cars[3]->car_information(); // Runtime Polymorphism
                cout << "Enter number of hours for which you want to book the car: ";
                cin >> no_of_hours;
                rented_cars[3]->car_rent(no_of_hours); // Runtime Polymorphism
                break;
            }
            {
            case 5:
                Luxury_car grand_carnival;
                rented_cars[4] = &grand_carnival;
                rented_cars[4]->set_model("Grand_Carnival");
                rented_cars[4]->set_year(2017);
                rented_cars[4]->set_seats(7);
                rented_cars[4]->car_information(); // Runtime Polymorphism
                cout << "Enter number of hours for which you want to book the car: ";
                cin >> no_of_hours;
                rented_cars[4]->car_rent(no_of_hours); // Runtime Polymorphism
                break;
            }
        default:
            cout << "You have entered an Invalid Choice!" << endl; // Default statement
        }
        cout << "Do you want to book another car (y/n)? "; // Prompt for do-while loop
        cin >> again;
    } while ((again == 'Y') || (again == 'y'));                                // Condition for do-while loop
    cout << "               Thank you for booking!                  " << endl; // Ending Prompt
    cout << "-------------------------------------------------------" << endl;
    return 0; // Return statement
}
