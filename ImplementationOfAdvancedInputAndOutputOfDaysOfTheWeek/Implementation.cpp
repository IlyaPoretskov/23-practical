#include <iostream>

using namespace std;

#define D_1 "Monday"
#define D_2 "Tuesday"
#define D_3 "Wednesday"
#define D_4 "Thursday"
#define D_5 "Friday"
#define D_6 "Saturday"
#define D_7 "Sunday"

#define GET_DAY(i) case i: cout << D_ ## i << endl; break;

int main()
{
    int day;
    cout << "Input number of day of the week: ";
    cin >> day;
    switch (day) {
        GET_DAY(1)
        GET_DAY(2)
        GET_DAY(3)
        GET_DAY(4)
        GET_DAY(5)
        GET_DAY(6)
        GET_DAY(7)
    }
}