#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main() {
    int Carpet;
    cout << " How much Carpet do you need in Feet total ? "<<endl ;
    cin >> Carpet;
    int Carpet_Yards = Carpet / 3 ;
    cout<< "This is the amount of Carpet in yards  " << Carpet_Yards << " Yards" <<endl ; // Finding the amount of carpet needed should be in square yards
    int Cups = 300'000,Popcorn_Boxes = 150'000 ;
    double Estimated_increase = .03 ;
    double Estimated_Cups = Cups * Estimated_increase ;
    int New_Cups = Estimated_Cups + Cups ;
    double Estimated_Boxes = Popcorn_Boxes * Estimated_increase ;
    int New_PopcornBoxes= Estimated_Boxes + Popcorn_Boxes ;
    cout << "What is estimated for Cups " << New_Cups << endl
         << "What is estimated for  Popcorn boxes " << New_PopcornBoxes<< endl ;
    int Orchestra_ticket = 35 ;
    int MainFloor_ticket = 30 ;
    int Balcony_ticket = 15 ;
    int Orchestra_seats ;
    int MainFloor_seats ;
    int Balcony_Seats;
    cout << "How many seats sold for Orchestra? "<< endl;
    cin >> Orchestra_seats;
    cout << "How many seats sold for Main Floor? "<< endl;
    cin >> MainFloor_seats;
    cout << "How many seats sold for the Balcony? " << endl;
    cin >> Balcony_Seats;
    int Total_Orchestral = Orchestra_ticket * Orchestra_seats ;
    int Total_MainFloor = MainFloor_seats * MainFloor_ticket;
    int Total_Balcony = Balcony_Seats * Balcony_ticket;
    int Total_tickets = Total_Orchestral + Total_MainFloor + Total_Balcony ;
    cout << "Total from Orchestra $" << Total_Orchestral << endl << "Total From Main Floor  $" << Total_MainFloor << endl
         << "Total From Balcony  $" << Total_Balcony << endl << "Grand Total from Sales  $"<< Total_tickets<< endl ;
    int Monthly_ticket_sales , Monthly_tickets_sold ;
    int Total_Quantity_Monday_1 , Total_Quantity_Tuesday_1 , Total_Quantity_Wednesday_1 , Total_Quantity_Thursday_1 , Total_Quantity_Friday_1 , Total_Quantity_Saturday_1 , Total_Quantity_Sunday_1 ;
    int Total_Quantity_Monday_2 , Total_Quantity_Tuesday_2 , Total_Quantity_Wednesday_2 , Total_Quantity_Thursday_2 , Total_Quantity_Friday_2 , Total_Quantity_Saturday_2 , Total_Quantity_Sunday_2 ;
    int Total_Quantity_Monday_3 , Total_Quantity_Tuesday_3 , Total_Quantity_Wednesday_3 , Total_Quantity_Thursday_3 , Total_Quantity_Friday_3 , Total_Quantity_Saturday_3 , Total_Quantity_Sunday_3 ;
    int Total_Quantity_Monday_4 , Total_Quantity_Tuesday_4 , Total_Quantity_Wednesday_4 , Total_Quantity_Thursday_4 , Total_Quantity_Friday_4 , Total_Quantity_Saturday_4 , Total_Quantity_Sunday_4 ;
    int Total_Quantity_Monday_5 , Total_Quantity_Tuesday_5 , Total_Quantity_Wednesday_5, Total_Quantity_Thursday_5 , Total_Quantity_Friday_5 , Total_Quantity_Saturday_5 , Total_Quantity_Sunday_5 ;
    int Total_Amount_Monday_1 , Total_Amount_Tuesday_1 , Total_Amount_Wednesday_1 , Total_Amount_Thursday_1 , Total_Amount_Friday_1 , Total_Amount_Saturday_1 , Total_Amount_Sunday_1 ;
    int Total_Amount_Monday_2 , Total_Amount_Tuesday_2 , Total_Amount_Wednesday_2 , Total_Amount_Thursday_2 , Total_Amount_Friday_2 , Total_Amount_Saturday_2 , Total_Amount_Sunday_2 ;
    int Total_Amount_Monday_3 , Total_Amount_Tuesday_3 , Total_Amount_Wednesday_3 , Total_Amount_Thursday_3 , Total_Amount_Friday_3 , Total_Amount_Saturday_3 , Total_Amount_Sunday_3 ;
    int Total_Amount_Monday_4 , Total_Amount_Tuesday_4 , Total_Amount_Wednesday_4 , Total_Amount_Thursday_4 , Total_Amount_Friday_4 , Total_Amount_Saturday_4 , Total_Amount_Sunday_4 ;
    int Total_Amount_Monday_5 , Total_Amount_Tuesday_5 , Total_Amount_Wednesday_5, Total_Amount_Thursday_5 , Total_Amount_Friday_5 , Total_Amount_Saturday_5 , Total_Amount_Sunday_5 ;
    cout<< "Enter the Amount of tickets sold per day for the 1st Week. Starting On Monday being the 1st day of the week and Sunday the last.  "<< endl
        << "For any days that have no tickets sold or are not part of the month put 0 " << endl;
    cin >> Total_Quantity_Monday_1 >> Total_Quantity_Tuesday_1 >> Total_Quantity_Wednesday_1 >> Total_Quantity_Thursday_1 >> Total_Quantity_Friday_1 >> Total_Quantity_Saturday_1 >> Total_Quantity_Sunday_1;
    cout<< "Enter the Amount of tickets sold per day for the 2nd Week. Starting On Monday being the 1st day of the week and Sunday the last. "<< endl
        << "For any days that have no tickets sold or are not part of the month put 0 " << endl ;
    cin >> Total_Quantity_Monday_2 >> Total_Quantity_Tuesday_2 >> Total_Quantity_Wednesday_2 >> Total_Quantity_Thursday_2 >> Total_Quantity_Friday_2 >> Total_Quantity_Saturday_2 >> Total_Quantity_Sunday_2;
    cout<< "Enter the Amount of tickets sold per day for the 3rd Week. Starting On Monday being the 1st day of the week and Sunday the last.  "<< endl
        << "For any days that have no tickets sold or are not part of the month put 0 " << endl ;
    cin >> Total_Quantity_Monday_3 >> Total_Quantity_Tuesday_3 >> Total_Quantity_Wednesday_3 >> Total_Quantity_Thursday_3 >> Total_Quantity_Friday_3 >> Total_Quantity_Saturday_3 >> Total_Quantity_Sunday_3;
    cout<< "Enter the Amount of tickets sold per day for the 4th Week. Starting On Monday being the 1st day of the week and Sunday the last.  "<< endl
        << "For any days that have no tickets sold or are not part of the month put 0 " << endl ;
    cin >> Total_Quantity_Monday_4 >> Total_Quantity_Tuesday_4 >> Total_Quantity_Wednesday_4 >> Total_Quantity_Thursday_4 >> Total_Quantity_Friday_4 >> Total_Quantity_Saturday_4 >> Total_Quantity_Sunday_4;
    cout<< "Enter the Amount of tickets sold per day for the 5th Week. Starting On Monday being the 1st day of the week and Sunday the last.  "<< endl
       << "For any days that have no tickets sold or are not part of the month put 0 " << endl ;
    cin>> Total_Quantity_Monday_5 >> Total_Quantity_Tuesday_5 >> Total_Quantity_Wednesday_5>> Total_Quantity_Thursday_5 >> Total_Quantity_Friday_5 >> Total_Quantity_Saturday_5 >> Total_Quantity_Sunday_5 ;
    cout<< "Enter the Quantity of tickets sold per day for the 1st Week. Starting On Monday being the 1st day of the week and Sunday the last.  "<< endl
        << "For any days that have no tickets sold or are not part of the month put 0 " << endl;
    cin>> Total_Quantity_Monday_1 >> Total_Quantity_Tuesday_1 >> Total_Quantity_Wednesday_1 >> Total_Quantity_Thursday_1 >> Total_Quantity_Friday_1 >> Total_Quantity_Saturday_1 >> Total_Quantity_Sunday_1 ;
    cout<< "Enter the Quantity of tickets sold per day for the 2nd Week. Starting On Monday being the 1st day of the week and Sunday the last.  "<< endl
        << "For any days that have no tickets sold or are not part of the month put 0 " << endl;
    cin >> Total_Quantity_Monday_2 >> Total_Quantity_Tuesday_2 >> Total_Quantity_Wednesday_2 >> Total_Quantity_Thursday_2 >> Total_Quantity_Friday_2 >> Total_Quantity_Saturday_2 >> Total_Quantity_Sunday_2 ;
    cout<< "Enter the Quantity of tickets sold per day for the 3rd Week. Starting On Monday being the 1st day of the week and Sunday the last.  "<< endl
        << "For any days that have no tickets sold or are not part of the month put 0 " << endl;
    cin >> Total_Quantity_Monday_3 >> Total_Quantity_Tuesday_3 >> Total_Quantity_Wednesday_3 >> Total_Quantity_Thursday_3 >> Total_Quantity_Friday_3 >> Total_Quantity_Saturday_3 >> Total_Quantity_Sunday_3 ;
    cout<< "Enter the Quantity of tickets sold per day for the 4th Week. Starting On Monday being the 1st day of the week and Sunday the last.  "<< endl
        << "For any days that have no tickets sold or are not part of the month put 0 " << endl;
     cin >> Total_Quantity_Monday_4 >> Total_Quantity_Tuesday_4 >> Total_Quantity_Wednesday_4 >> Total_Quantity_Thursday_4 >> Total_Quantity_Friday_4 >> Total_Quantity_Saturday_4 >> Total_Quantity_Sunday_4 ;
    cout<< "Enter the Quantity of tickets sold per day for the 5th Week. Starting On Monday being the 1st day of the week and Sunday the last.  "<< endl
        << "For any days that have no tickets sold or are not part of the month put 0 " << endl;
    cin >> Total_Quantity_Monday_5 >> Total_Quantity_Tuesday_5 >> Total_Quantity_Wednesday_5 >> Total_Quantity_Thursday_5 >> Total_Quantity_Friday_5 >> Total_Quantity_Saturday_5 >> Total_Quantity_Sunday_5 ;

    int Total_Amount_Week_1 = Total_Amount_Monday_1 + Total_Amount_Tuesday_1 + Total_Amount_Wednesday_1 + Total_Amount_Thursday_1 + Total_Amount_Friday_1 + Total_Amount_Saturday_1 + Total_Amount_Sunday_1 ;
    int Total_Amount_Week_2 = Total_Amount_Monday_2 + Total_Amount_Tuesday_2 + Total_Amount_Wednesday_2 + Total_Amount_Thursday_2 + Total_Amount_Friday_2 + Total_Amount_Saturday_2 + Total_Amount_Sunday_2 ;
    int Total_Amount_Week_3 = Total_Amount_Monday_3 + Total_Amount_Tuesday_3 + Total_Amount_Wednesday_3 + Total_Amount_Thursday_3 + Total_Amount_Friday_3 + Total_Amount_Saturday_3 + Total_Amount_Sunday_3 ;
    int Total_Amount_Week_4 = Total_Amount_Monday_4 + Total_Amount_Tuesday_4 + Total_Amount_Wednesday_4 + Total_Amount_Thursday_4 + Total_Amount_Friday_4 + Total_Amount_Saturday_4 + Total_Amount_Sunday_4 ;
    int Total_Amount_Week_5 = Total_Amount_Monday_5 + Total_Amount_Tuesday_5 + Total_Amount_Wednesday_5 + Total_Amount_Thursday_5 + Total_Amount_Friday_5 + Total_Amount_Saturday_5 + Total_Amount_Sunday_5 ;

    int Total_Quantity_Week_1 = Total_Quantity_Monday_1 + Total_Quantity_Tuesday_1 + Total_Quantity_Wednesday_1 + Total_Quantity_Thursday_1 + Total_Quantity_Friday_1 + Total_Quantity_Saturday_1 + Total_Quantity_Sunday_1 ;
    int Total_Quantity_Week_2 = Total_Quantity_Monday_2 + Total_Quantity_Tuesday_2 + Total_Quantity_Wednesday_2 + Total_Quantity_Thursday_2 + Total_Quantity_Friday_2 + Total_Quantity_Saturday_2 + Total_Quantity_Sunday_2 ;
    int Total_Quantity_Week_3 = Total_Quantity_Monday_3 + Total_Quantity_Tuesday_3 + Total_Quantity_Wednesday_3 + Total_Quantity_Thursday_3 + Total_Quantity_Friday_3 + Total_Quantity_Saturday_3 + Total_Quantity_Sunday_3 ;
    int Total_Quantity_Week_4 = Total_Quantity_Monday_4 + Total_Quantity_Tuesday_4 + Total_Quantity_Wednesday_4 + Total_Quantity_Thursday_4 + Total_Quantity_Friday_4 + Total_Quantity_Saturday_4 + Total_Quantity_Sunday_4 ;
    int Total_Quantity_Week_5 = Total_Quantity_Monday_5 + Total_Quantity_Tuesday_5 + Total_Quantity_Wednesday_5 + Total_Quantity_Thursday_5 + Total_Quantity_Friday_5 + Total_Quantity_Saturday_5 + Total_Quantity_Sunday_5 ;
    int Total_Amount_for_the_Month = Total_Amount_Week_1 + Total_Amount_Week_2 + Total_Amount_Week_3 + Total_Amount_Week_4 + Total_Amount_Week_5 ;
    int Total_Quantity_for_the_Month = Total_Amount_Week_1 + Total_Quantity_Week_2 + Total_Quantity_Week_3 + Total_Quantity_Week_4 + Total_Quantity_Week_5;
   cout << "Total Amount sold For Week 1  $" << Total_Amount_Week_1 << endl
         << "Total Amount sold For Week 2 $" << Total_Amount_Week_2 << endl
         << "Total Amount sold For Week 3 $" << Total_Amount_Week_3 << endl
         << "Total Amount sold For Week 4 $" << Total_Amount_Week_4 << endl
         << "Total Amount sold For Week 5 $" << Total_Amount_Week_5 << endl
         << "Total Amount of Tickets sold for the Month  $" << Total_Amount_for_the_Month << endl
         << "Total Quantity of tickets Sold for the 1st Week of the Month " << Total_Quantity_Week_1 << endl
         << "Total Quantity of tickets Sold for the 2nd Week of the Month " << Total_Quantity_Week_2 << endl
         << "Total Quantity of tickets Sold for the 3rd Week of the Month " << Total_Quantity_Week_3 << endl
         << "Total Quantity of tickets Sold for the 4th Week of the Month " << Total_Quantity_Week_4 << endl
         << "Total Quantity of tickets Sold for the 5th Week of the Month " << Total_Quantity_Week_5 << endl
         << "Total Quantity of tickets Sold for the Month " << Total_Quantity_for_the_Month<< endl;
    int Weekly_paycheck ;
    int Bi_weekly_paycheck ;
    int Bi_weekly_checks = 26 ;
    int Weekly_Checks = 52;

    int Salary ;
    string Employee_Firstname ;
    string Employee_Lastname ;
    cout << " What is the employees' First name ? " << endl;
    cin >> Employee_Firstname  ;
    cout << " What is the employees' Last name? " << endl;
    cin >> Employee_Lastname ;
    cout << " What is the employees' salary?" << endl ;
    cin >> Salary ;

    int Pay_Weekly = Salary / Weekly_Checks ;
    int Pay_Biweekly = Salary / Bi_weekly_checks ;
    if ( Salary>55'000)
    {

        cout << " Bi-Weekly pay is  $" << Pay_Biweekly << " For "<< Employee_Firstname<< " "<< Employee_Lastname ;
    }
    else
    {
        cout << " Weekly pay is  $" << Pay_Weekly<< " For " << Employee_Firstname << " "<< Employee_Lastname ;
    }
    return 0;
}
