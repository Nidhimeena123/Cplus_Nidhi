#include<iostream>
using namespace std;

// Base class Cricketer
class Cricketer{
	protected:
	 int matchesPlayed;
	 
	public:
// Function to input data for the cricketer
    void inputData() {
        cout << "Enter number of matches played: ";
        cin >> matchesPlayed;
    }
};

// Derived class: Batsman
class  Batsman : public Cricketer{
	private:
		int Totalruns,bestperformance;
		float Averageruns;
		
	public:
	// Function to input data for  batsman
		void inputBatsmanData() {
			cout<<"Enter Total Runs  :";
			cin>>Totalruns;
			cout<<"Enter best performance :";
			cin>>bestperformance;
			
			AverageRuns();
		}
		
	// to calculate average runs
		void AverageRuns() {
	    // Checking if matchesplayed is not zero
        if (matchesPlayed != 0) {
            Averageruns = (Totalruns) / matchesPlayed;
        } else {
            Averageruns = 0;
        }
    }
    
    // Function to display data for batsman
     void displayData() {
        cout <<endl<< "Batsman Details"<<endl;
        cout << "Matches Played: " << matchesPlayed <<endl;
        cout << "Total Runs: " << Totalruns << endl;
        cout << "Average Runs: " << Averageruns << endl;
        cout << "Best Performance : " << bestperformance << endl;
    }
};

int main()
{
	// Creating object for Batsman class
	Batsman b1;
	
	b1.inputData();
    b1.inputBatsmanData();
    b1.displayData();
	return 0;
	
}
