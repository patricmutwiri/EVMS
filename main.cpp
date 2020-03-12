#include <iostream>

using namespace std;

class Voter {
    long voter_id, id_number;
    char gender[1];
    string fname, mname, lname, surname, dob;
    char polling_station[50];
    public:
    void registerVoter(){
        cout<<"\nEnter Voter ID \t: ";
        cin>>voter_id;
        cout<<"\nEnter National ID number \t: ";
        cin>>id_number;
        cout<<"\nEnter Gender, M/F \t: ";
        cin>>gender;
        cout<<"\nEnter First Name \t: ";
        cin>>fname;
        cout<<"\nEnter Middle Name \t: ";
        cin>>mname;
        cout<<"\nEnter Second Name \t: ";
        cin>>lname;
        cout<<"\nEnter surname \t: ";
        cin>>surname;
        cout<<"\nEnter date of birth in format DD-MM-YYYY \t: ";
        cin>>dob;
        cout<<"\nEnter polling station \t: ";
        cin.getline(polling_station, 50);

    }

    void showVoterDetails(){
        cout<<"\nVoter ID \t: "<<voter_id;
        cout<<"\nNational ID \t: "<<id_number;
        cout<<"\nFull Name \t: "<<surname<<" "<<fname<<" "<<mname<<" "<<lname;
        cout<<"\nVoter DOB \t: "<<dob;
        cout<<"\nPolling station \t: "<<polling_station;
    }
};

int main()
{
    Voter v;
    cout << "\n\n";
    cout << "\n\n :: EVMS Kenya ::";
    // Get voter info
    cout<<"\n\n:: Get Voter Info ::\n";
    v.registerVoter();
    // Show voter info
    cout<<"\n\n:: Show Voter info ::\n";
    v.showVoterDetails();
    cout<<"\n\nKura yako sauti yako.\n";
    return 0;
}
