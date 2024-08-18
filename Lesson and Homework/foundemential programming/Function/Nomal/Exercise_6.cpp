#include <iostream>
using namespace std;

// Function to determine if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}
// Function to calculate the number of days in a given year
int daysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return 0; // Invalid month
    }
}
// Function to calculate the number of days from 01/01/0000 to the given date
int daysFromStart(int day, int month, int year) {
    int days = 0;
    // Count days for all years up to the year before the given year
    for (int y = 0; y < year; ++y) {
        days += isLeapYear(y) ? 366 : 365;
    }

    // Count days for all months in the given year before the given month
    for (int m = 1; m < month; ++m) {
        days += daysInMonth(m, year);
    }
    // Add days for the given month
    days += day;
    return days;
}
// Function to calculate the difference in days between two dates
int daysBetweenDates(int day1, int month1, int year1, int day2, int month2, int year2) {
    int days1 = daysFromStart(day1, month1, year1);
    int days2 = daysFromStart(day2, month2, year2);
    return abs(days2 - days1);
}

