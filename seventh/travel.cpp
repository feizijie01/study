//travel.cpp -- using structures with functions
#include<iostream>
using namespace std;
const int Mins_per_hr=60;
struct travel_time
{
    int hours;
    int mins;
};

travel_time sum(travel_time day1,travel_time day2);
void show_time(travel_time t);

int main()
{
    travel_time day1={5,45};  // 5hrs,45mins
    travel_time day2={4,55};  // 4 hrs,55 mins
    travel_time trip=sum(day1,day2);
    cout << "Two-day total: ";
    show_time(trip);
    travel_time day3={4,32};
    cout << "Three-day total: ";
    show_time(sum(trip,day3));
    cin.get();
    return 0;
}
travel_time sum(travel_time t1,travel_time t2)
{
    travel_time trip;
    trip.mins=(t1.mins+t2.mins)%Mins_per_hr;
    trip.hours=t1.hours+t2.hours+(t1.mins+t2.mins)/Mins_per_hr;
    return trip;
}

void show_time(travel_time t)
{
    cout << t.hours << " hours.";
    cout << t.mins << " mintues.\n";
}