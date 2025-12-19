#include <iostream>
#include <string>
using namespace std;

/*
-------------------------------------------------
StreetVendor Class
This class acts like a blueprint for a street vendor.
It defines what information a vendor has and
what actions a vendor can perform.
-------------------------------------------------
*/
class StreetVendor {
private:
    // These variables store information about the vendor
    string Name;        // Vendor name
    string Goods;       // Items being sold
    string Location;    // Current location
    int DailyGoal;      // Daily sales goal

public:
    /*
    Constructor
    This runs automatically when a StreetVendor object is created.
    It sets the starting values for the vendor.
    */
    StreetVendor(string name, string goods, string location, int goal)
    {
        Name = name;
        Goods = goods;
        Location = location;
        DailyGoal = goal;
    }

    /*
    DisplayInfo Method
    Prints the vendor’s name, goods, and location.
    */
    void DisplayInfo()
    {
        cout << Name << " sells " << Goods
             << " and is located at: " << Location << endl;
    }

    /*
    Relocate Method
    Allows the vendor to move locations.
    Only locations that contain the word "Manhattan" are allowed.
    */
    void Relocate(string new_location)
    {
        if (new_location.find("Manhattan") != string::npos)
        {
            Location = new_location;
            cout << Name << " successfully moved to "
                 << Location << endl;
        }
        else
        {
            cout << "Relocation denied: Must stay in Manhattan!" << endl;
        }
    }
};

int main()
{
    /*
    -------------------------------------------------
    Creating StreetVendor objects
    Each object represents a real street vendor
    -------------------------------------------------
    */
    StreetVendor HalalGuys("53rd St. Halal",
                           "Chicken & Rice",
                           "Midtown",
                           1500);

    StreetVendor FlowerShop("Union Sq Blooms",
                            "Fresh Flowers",
                            "Union Square",
                            750);

    /*
    -------------------------------------------------
    Calling methods for each vendor
    -------------------------------------------------
    */
    HalalGuys.DisplayInfo();
    HalalGuys.Relocate("Manhattan, Times Square");

    cout << endl;

    FlowerShop.DisplayInfo();
    FlowerShop.Relocate("Queens");   // Not allowed

    return 0;
}

