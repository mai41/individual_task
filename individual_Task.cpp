//FCI - Programming 1 - 2018 - Assignment 2
//Program Name: Individual_Task_Game2
//Last Modification Date: 1 - 3 - 2018
//Author 1 : Mai Rady Hassan - 20170302 - G 12
//Author 2 : Nour Elhoda Khaled Samir - 20170320 - G 12
//Author 3 : Andrew Emad Aziz - 20170061 - G 12
//Teaching Assistant: ENG.Khadiga && ENG.Dina Mohamed
//Purpose: Writing a code to gauge the expected cost of an item in a specified number of year


#include <iostream>

using namespace std;

int main()
{

    cout<<"Ahlan ya user ya habibi"<<endl;
    cout<<endl;
    cout<<"What do you like to do today?!"<<endl;
    cout<<endl;

    int nYears;
    float cost_of_item,inflation_rate,inflationRate;
    cout<<"Enter num of years: ";
    cin>>nYears;
    cout<<"Enter cost of the item: ";
    cin>>cost_of_item;
    cout<<"Enter inflation_rate(%): ";
    cin>>inflation_rate;
    inflationRate=inflation_rate/100;
    cout<<"inflation_rate in fraction is: "<<inflationRate<<endl;

    for(int i=0; i<nYears; i++){
            cost_of_item+=(inflationRate*cost_of_item);
    }
    cout<<endl<<"Cost of the item after this period is: "<<cost_of_item;







    return 0;
}
