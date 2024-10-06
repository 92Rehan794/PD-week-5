#include <iostream>
using namespace std;

string projectTimeCalculation(int, int, int);

main()
{
    int hours,days,workers;
    cout << "Enter the needed hours: ";
    cin >> hours;
    cout << "Enter the days that the firm has: ";
    cin >> days;
    cout << "Enter the number of workers: ";
    cin >> workers;
    string result = projectTimeCalculation(hours, days, workers);
    cout << result;


}
string projectTimeCalculation(int hours, int days, int workers)
{
    int time = days*0.9*10*workers;
    if (time > hours)
    {
        int hours_left = time - hours;
        return "Yes! " + to_string(hours_left) + "hours left.";
    }
    if (hours > time)
    {
        int hours_required = hours - time;
        return "Not enough time! " + to_string(hours_required) + "hours needed.";

    }
}