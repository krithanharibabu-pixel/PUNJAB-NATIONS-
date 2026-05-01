#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Structure for Menu Items
struct MenuItem {
    string name;
    int price;
};

// Main Restaurant Class
class PunjabiNation {
private:
    string restaurantName = "Love's Punjabi Nation";
    string address = "No 15, GST Rd, near Hablis Hotel, Guindy, Chennai";
    string mapsLink = "https://maps.google.com/maps?vet=10CAAQoqAOahcKEwjoo82n-ZWUAxUAAAAAHQAAAAAQBQ..i&rlz=1C1CHBF_enIN987IN987&pvq=CgwvZy8xMjR0MmYydGQiEwoNcHVuamFiIG5hdGlvbhACGAM&lqi=Cg1wdW5qYWIgbmF0aW9uSKyWmpGTgoCACFodEAAQARgBIg1wdW5qYWIgbmF0aW9uKgYIAhAAEAGSARJwdW5qYWJpX3Jlc3RhdXJhbnQ&fvr=1&cs=1&um=1&ie=UTF-8&fb=1&gl=in&sa=X&ftid=0x3a52674109ebaf75:0x3a1fc2f342b4987d";
    string phone = "+91 98405 94433";
    string zomatoLink = "https://www.zomato.com/chennai/punjabi-nation-guindy/order?v=o2";
    string swiggyLink = "https://www.swiggy.com/city/chennai/punjabi-nation-guindy-guindy-rest25263";

    vector<MenuItem> starters;
    vector<MenuItem> mainCourse;

public:
    PunjabiNation() {
        // Initialize Menu
        starters = {{"Paneer Crunchy", 310}, {"Hara Bhara Kabab", 310}, {"Chicken 65", 400}};
        mainCourse = {{"Butter Chicken", 410}, {"Paneer Butter Masala", 320}, {"Dal Makhani", 280}};
    }

    void displayInfo() {
        cout << "========================================" << endl;
        cout << "       " << restaurantName << "        " << endl;
        cout << "========================================" << endl;
        cout << "Location: " << address << endl;
        cout << "Google Maps: " << mapsLink << endl;
        cout << "Phone: " << phone << endl;
        cout << "\nORDER ONLINE:" << endl;
        cout << "Zomato: " << zomatoLink << endl;
        cout << "Swiggy: " << swiggyLink << endl;
    }

    void displayMenu() {
        cout << "\n--- STARTERS ---" << endl;
        for (const auto& item : starters) {
            cout << item.name << " : Rs." << item.price << endl;
        }

        cout << "\n--- MAIN COURSE ---" << endl;
        for (const auto& item : mainCourse) {
            cout << item.name << " : Rs." << item.price << endl;
        }
    }
};

int main() {
    PunjabiNation myRestaurant;
    
    // Execute Display Functions
    myRestaurant.displayInfo();
    myRestaurant.displayMenu();

    return 0;
}