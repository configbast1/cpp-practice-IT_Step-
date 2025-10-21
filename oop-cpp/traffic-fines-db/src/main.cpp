#include "TrafficFinesDB.h"

int main() {
    TrafficFinesDB db;
    db.insert("ABC123", "Speeding");
    db.insert("XYZ789", "Parking Violation");
    db.insert("ABC123", "Running Red Light");

    db.print_all();
    db.print_by_number("ABC123");
    db.print_by_range("ABC000", "XYZ999");

    return 0;
}
