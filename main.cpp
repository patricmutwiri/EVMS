#include <iostream>
#include <string>

using namespace std;

class Voter {
    long voter_id, id_number;
    int d,m,y;
    char gender;
    string fname, mname, lname, surname, dob, polling_station;
    public:
    void registerVoter(){
        cout<<"\nEnter Voter ID \t: ";
        cin>>voter_id;
        cout<<"\nEnter National ID number \t: ";
        cin>>id_number;
        enterGender:
        cout<<"\nEnter Gender, M/F \t: ";
        cin>>gender;
        if (gender != 'M' && gender != 'F') {
            cout<<"Gender value not well formatted. ";
            goto enterGender;
        }
        cout<<"\nEnter First Name \t: ";
        cin>>fname;
        cout<<"\nEnter Middle Name \t: ";
        cin>>mname;
        cout<<"\nEnter Second Name \t: ";
        cin>>lname;
        cout<<"\nEnter surname \t: ";
        cin>>surname;
        cout<<"\nEnter day of month you were born \t: ";
        cin>>d;
        cout<<"\nEnter month of year you were born \t: ";
        cin>>m;
        cout<<"\nEnter the year were born \t: ";
        cin>>y;
        //cin>>dob;
        cout<<"\nEnter polling station \t: ";
        cin.ignore();
        getline(cin, polling_station);
    }

    void showVoterDetails(){
        cout<<"\nVoter ID \t: "<<voter_id;
        cout<<"\nNational ID \t: "<<id_number;
        cout<<"\nFull Name \t: "<<surname<<" "<<fname<<" "<<mname<<" "<<lname;
        cout<<"\nVoter DOB \t: "<<d<<"-"<<m<<"-"<<y;
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
