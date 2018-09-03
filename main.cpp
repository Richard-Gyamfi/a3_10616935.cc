#include <iostream>

using namespace std;

int main()
{
    double overall_mark;
    cout << "Enter your total mark: ";
    cin >> overall_mark;

    if((overall_mark >=80) && (overall_mark <=100))
        {
            cout << "Grade is  " << "A" << endl;
       }
       else if((overall_mark >= 75) && (overall_mark <= 79))
       {
            cout << "Grade = " << "B+" << endl;
       }else if((overall_mark >= 70) && (overall_mark <= 74))
       {
            cout << "Grade = " << "B" << endl;
       }
       else if((overall_mark >= 65) && (overall_mark <= 69))
       {
            cout << "Grade = " << "C+" << endl;
       }
       else if((overall_mark >= 60) && (overall_mark <= 64))
       {
            cout << "Grade = " << "C" << endl;
       }
       else if((overall_mark >= 55) && (overall_mark <= 59))
       {

            cout << "Grade = " << "D+" << endl;
       }
       else if((overall_mark >= 50) && (overall_mark <= 54))
       {
            cout << "Grade = " << "D" << endl;
       }
       else if((overall_mark >= 45) && (overall_mark <= 49))
       {
            cout << "Grade = " << "E" << endl;
       }
       else if((overall_mark >= 0) && (overall_mark <= 44))
       {
            cout << "Grade = " << "F" << endl;
       }
       else{
            cout <<"No Grade Available!" << endl;
       }
    return 0;
}
