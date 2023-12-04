#include <iostream>  // standard library
using namespace std; // using namespace as std
class Character      // Parent abstract class
{
protected: // Access specifier
    int target_set;
    int score;
    string health;
    char another;

public:
    virtual void move() = 0; // Pure virtual function
    virtual void attack() = 0;
    virtual void power_punch() = 0;
};
class Hero : public Character // Simple inheritance concept (3 Characters)
{
public:         // Access specifier
    void move() // Feature as a function move()
    {
        cout << "Player Hero moved by 1 units!!" << endl;
    }
    void attack() // Feature 2
    {
        cout << "Deadly attack launched on Villain by Hero!!" << endl;
    }
    void power_punch() // Feature 3
    {
        cout << "What health do you want to set (1-100): ";
        cin >> health;
        cout << "Power punch exerted on Villain by Hero!!" << endl;
        set_score();
    }
    void set_score() // Feature 3.1 of powerPunch
    {
        do
        {
            score++;
            cout << "Where do you want to set the target: " << endl; // Some extra features
            cout << "1- Face " << endl;
            cout << "2- Arm " << endl;
            cout << "3- Leg " << endl;
            cin >> target_set;
            switch (target_set) // Switch case
            {
            case 1:
            {
                cout << "Face is set as target!!" << endl;
                break; // Break prompt
            }
            case 2:
            {
                cout << "Arm is set as target!!" << endl;
                break;
            }
            case 3:
            {
                cout << "Leg is set as target!!" << endl;
                break;
            }
            default: // Default prompt
            {
                cout << "Invalid input!!" << endl;
            }
            }
            cout << "Health with which punch was hit: " << health << endl; // Health of Player
            cout << "Score of player Hero: " << score << endl;             // Score of Player
            cout << "Do you want to hit another time (Y/N): ";
            cin >> another;
        } while (another == 'Y' || another == 'y'); // Useful implementation of Do-While loop
    }
};
class Villain : public Character // Simple inheritance concept again
{
public:
    void move() // Overriding of functions
    {
        cout << "Player Villain moved by 1 units!!" << endl;
    }
    void attack()
    {
        cout << "Deadly attack launched on Hero by Villain!!" << endl;
    }
    void power_punch()
    {
        cout << "What health do you want to set (1-100): ";
        cin >> health;
        cout << "Power punch exerted on Villain by Hero!!" << endl;
        set_score();
    }
    void set_score() // Feature 3.1 of powerPunch
    {
        do
        {
            score++;
            cout << "Where do you want to set the target: " << endl; // Some extra features
            cout << "1- Face " << endl;
            cout << "2- Arm " << endl;
            cout << "3- Leg " << endl;
            cin >> target_set;
            switch (target_set) // Switch case
            {
            case 1:
            {
                cout << "Face is set as target!!" << endl;
                break; // Break prompt
            }
            case 2:
            {
                cout << "Arm is set as target!!" << endl;
                break;
            }
            case 3:
            {
                cout << "Leg is set as target!!" << endl;
                break;
            }
            default: // Default prompt
            {
                cout << "Invalid input!!" << endl;
            }
            }
            cout << "Health with which punch was hit: " << health << endl; // Health of Player
            cout << "Score of player Villain: " << score << endl;          // Score of Player
            cout << "Do you want to hit another time (Y/N): ";
            cin >> another;
        } while (another == 'Y' || another == 'y'); // Useful implementation of Do-While loop
    }
};
class AnyCharacter : public Character // Simple inheritance concept again
{
public:
    void move()
    {
        cout << "Player AnyCharacter moved by 1 units!!" << endl;
    }
    void attack()
    {
        cout << "Deadly attack launched on Villain by AnyCharacter!!" << endl;
    }
    void power_punch()
    {
        cout << "What health do you want to set (1-100): ";
        cin >> health;
        cout << "Power punch exerted on Villain by Hero!!" << endl;
        set_score();
    }
    void set_score() // Feature 3.1 of powerPunch
    {
        do
        {
            score++;
            cout << "Where do you want to set the target: " << endl; // Some extra features
            cout << "1- Face " << endl;
            cout << "2- Arm " << endl;
            cout << "3- Leg " << endl;
            cin >> target_set;
            switch (target_set) // Switch case
            {
            case 1:
            {
                cout << "Face is set as target!!" << endl;
                break; // Break prompt
            }
            case 2:
            {
                cout << "Arm is set as target!!" << endl;
                break;
            }
            case 3:
            {
                cout << "Leg is set as target!!" << endl;
                break;
            }
            default: // Default prompt
            {
                cout << "Invalid input!!" << endl;
            }
            }
            cout << "Health with which punch was hit: " << health << endl; // Health of Player
            cout << "Score of player Anyplayer: " << score << endl;        // Score of Player
            cout << "Do you want to hit another time (Y/N): ";
            cin >> another;
        } while (another == 'Y' || another == 'y'); // Useful implementation of Do-While loop
    }
};
int main() // Main function
{
    char choice; // Some main function() variables
    string keyword;
    int password;
    int character;
    do
    {
        cout << "       Welcome to King Of Fighters!       " << endl;
        cout << "------------------------------------------" << endl;
        cout << "For Hero Character - Press 1:       " << endl;
        cout << "For Villain Character - Press 2:    " << endl;
        cout << "For Any Random Character - Press 3: " << endl;
        cin >> character;
        cout << "Score is unifromly increased by power punch!" << endl;
        switch (character)
        {
        case 1:
        {
            // Password for Hero Character is 123
            cout << "Enter the Password for Hero Character: ";
            cin >> password;
            if (password == 123)
            {
                Character *character1; // Runtime Polymorphism
                character1 = new Hero;
                cout << "You have been identified as a Hero!" << endl;
                cout << "Enter the keyword 'move' or 'attack' or 'punch' for Hero !! " << endl;
                cin >> keyword;
                if (keyword == "move")
                {
                    character1->move();
                }
                if (keyword == "attack")
                {
                    character1->attack();
                }
                if (keyword == "punch")
                {
                    character1->power_punch();
                }
            }
            break;
        }
        case 2:
        {
            // Password for Villain Character is 234
            cout << "Enter the Password for Villain Character: ";
            cin >> password;
            if (password == 234)
            {
                Character *character2;
                character2 = new Villain;
                cout << "You have been identified as a Villain!" << endl;
                cout << "Enter the keyword 'move' or 'attack' for Villain !! " << endl;
                cin >> keyword;
                if (keyword == "move")
                {
                    character2->move();
                }
                if (keyword == "attack")
                {
                    character2->attack();
                }
                if (keyword == "punch")
                {
                    character2->power_punch();
                }
            }
            break;
        }
        case 3:
        {
            // Password for Any Character is 345
            cout << "Enter the Password for Any Character: ";
            cin >> password;
            if (password == 345)
            {
                Character *character3;
                character3 = new AnyCharacter;
                cout << "You have been identified as an Any Character!" << endl;
                cout << "Enter the keyword 'move' or 'attack' for Any Character !! " << endl;
                cin >> keyword;
                if (keyword == "move")
                {
                    character3->move();
                }
                if (keyword == "attack")
                {
                    character3->attack();
                }
                if (keyword == "punch")
                {
                    character3->power_punch();
                }
            }
            break;
        }
        default:
        {
            cout << "You have opted for a wrong choice!" << endl;
        }
        }
        cout << "Do you want to play the game again? (Y/N): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y'); // do-While loop
    return 0;
}
