#include<iostream>

using namespace std;

int main(){

    int marks;

    int math;
    int chem;
    int phy;
    int com;
    int eng;
    

    cout << "Enter marks of sub-1: " << endl;
    cin >> math;
    cout << "Enter marks of sub-2: " << endl;
    cin >> chem;
    cout << "Enter marks of sub-3: " << endl;
    cin >> phy;
    cout << "Enter marks of sub-4: " << endl;
    cin >> com;
    cout << "Enter marks of sub-5: " << endl;
    cin >> eng;


    int sum;

    sum = math+chem+phy+com+eng;

    cout << "Total marks are: " << sum << endl;


     int avg;
        avg = sum/5;

        cout << "Average is : " << avg << endl;


        if(avg>=90){
            cout << "The grade is A." << endl;

        }

        else if(avg >=70){
            cout << "The grade is B." << endl;
        }

        else if(avg >=50){
            cout << "The grade is c." << endl;
        }

        else if(avg >=30){
            cout << "The grade is f." << endl;
        }

        else{
            cout << "You faild the exam." << endl;
        }

   

}