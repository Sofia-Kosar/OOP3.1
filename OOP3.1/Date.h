#include "Triad.h"

class Date : public Triad {
public:
    Date(int year, int month, int day);
    Date();
    Date(const Date& other);
    Date& operator=(const Date& other);
    int getYear() const;
    int getMonth() const;
    int getDay() const;
    void setYear(int year);
    void setMonth(int month);
    void setDay(int day);

    friend std::istream& operator>>(std::istream& is, Date& date);
    friend std::ostream& operator<<(std::ostream& os, const Date& date);
    operator std::string() const;
    Date& operator++();
    Date operator++(int);
    Date& operator--();
    Date operator--(int);
    friend bool operator<(const Date& lhs, const Date& rhs);
    friend bool operator==(const Date& lhs, const Date& rhs);
    friend bool operator>(const Date& lhs, const Date& rhs);
    friend bool operator!=(const Date& lhs, const Date& rhs);
    friend bool operator<=(const Date& lhs, const Date& rhs);
    friend bool operator>=(const Date& lhs, const Date& rhs);
};