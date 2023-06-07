#include <iostream>

using namespace std;

class Classlab12_Buriko {

private:
    float length;
    float diameter;

public:
    Classlab12_Buriko(float l,float d) {

        length = l;
        diameter = d;
    }

    float getArea() {

        return (2 * 3.14) * (2 / diameter) * (length);
    }

    float getlength() {

        return length;

    }

    float getdiameter() {

        return diameter;
    }

    void setlength(float l) {

        length = l;
    }

    void setdiameter(float d) {

        diameter = d;
    }
    
   




};

int main()
{

    Classlab12_Buriko pipe(30, 6);

    int choice = 0;

    while (true) {
        cout << "Enter 1 to show attributes \n 2 for area \n 3 for to change attributes \n 0 to exit \n";
        cin >> choice;

        if (choice == 1) {
            cout << "Base length: " << pipe.getlength() << endl;
            cout << "Base diameter: " << pipe.getdiameter() << endl;
        }
        else if (choice == 2) {
            cout << "Area: " << pipe.getArea() << endl;
        }
        else if (choice == 3) {
            try {

                float newlength;
                float newdiameter;

                cout << "Enter new length(number): ";

                cin >> newlength;

                if (newlength <= 0) {
                    throw invalid_argument("enter a valid number");
                }


                pipe.setlength(newlength);

                cout << "Enter new diameter(number): ";

                cin >> newdiameter;

                if (newdiameter <= 0) {
                    throw invalid_argument("enter a valid number");
                }

                pipe.setdiameter(newdiameter);



            }
            catch (const exception& e) {

                cout << "Wrong input " << e.what() << endl;
            }
        }
        else if (choice == 0) {
            cout << "Exiting the program." << endl;
            break; 
        }
        else {
            cout << "Invalid input. Please enter 0, 1, 2, or 3." << endl;
        }
    }

    return 0;
}


