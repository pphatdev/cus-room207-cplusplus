#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	
    double score1, score2, score3, average;

    cout 
		<< "Enter: 3 test scores and I will avarage them: ";
    cin 
		>> score1 
		>> score2 
		>> score3;

    average = (score1 + score2 + score3) / 3.0;

    cout
        << fixed
        << showpoint
        << setprecision(1);

    cout
        << "Your average is: "
        << average
        << endl;

    if (average > 95)
        cout
			<< "Congratulation! That's a hight score!";
    return 0;
}