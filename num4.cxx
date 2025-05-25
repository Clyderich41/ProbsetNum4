#include <iostream>

using namespace std;

int main(){
    
    float day1 = 15000;
    float day2 = 23000;
    float day3 = 12000;
    float totalsales = day1 + day2 + day3;
    float days = 3;
    float average = totalsales / days;
    
    cout << "Total Sales: " << totalsales;
    cout << "Average sales per day: " << average;
    
    return 0;
}
    