#include "Date.h"
#include <iostream>

Date::Date(int year, int month, int day) : Triad(year, month, day) {}

Date::Date() : Triad() {}

Date::Date(const Date& other) : Triad(other) {}

Date& Date::operator=(const Date& other) {
    if (this != &other) {
        Triad::operator=(other);
    }
    return *this;
}

int Date::getYear() const {
    return getFirst();
}

int Date::getMonth() const {
    return getSecond();
}

int Date::getDay() const {
    return getThird();
}

void Date::setYear(int year) {
    setFirst(year);
}

void Date::setMonth(int month) {
    setSecond(month);
}

void Date::setDay(int day) {
    setThird(day);
}

std::istream& operator>>(std::istream& is, Date& date) {
    Triad& triad = static_cast<Triad&>(date);
    is >> triad;
    return is;
}

std::ostream& operator<<(std::ostream& os, const Date& date) {
    const Triad& triad = static_cast<const Triad&>(date);
    os << triad;
    return os;
}

Date::operator std::string() const {
    return static_cast<std::string>(static_cast<const Triad&>(*this));
}

Date& Date::operator++() {
    Triad::operator++();
    return *this;
}

Date Date::operator++(int) {
    Date temp(*this);
    Triad::operator++();
    return temp;
}

Date& Date::operator--() {
    Triad::operator--();
    return *this;
}

Date Date::operator--(int) {
    Date temp(*this);
    Triad::operator--();
    return temp;
}

bool operator<(const Date& lhs, const Date& rhs) {
    return static_cast<const Triad&>(lhs) < static_cast<const Triad&>(rhs);
}

bool operator==(const Date& lhs, const Date& rhs) {
    return static_cast<const Triad&>(lhs) == static_cast<const Triad&>(rhs);
}

bool operator!=(const Date& lhs, const Date& rhs) {
    return !(lhs == rhs);
}

bool operator>(const Date& lhs, const Date& rhs) {
    return rhs < lhs;
}

bool operator<=(const Date& lhs, const Date& rhs) {
    return !(lhs > rhs);
}

bool operator>=(const Date& lhs, const Date& rhs) {
    return !(lhs < rhs);
}