#include <iostream>
#include <time.h>
using namespace std;

const int MAX_PARTICIPANTS = 100;
const int MAX_LENGTH = 100;

struct Participant
{
    int id;
    int inputMoney;
    int percent;
    int reward = 0;
};

int main(){
    int totalParticipants = 0;
    double totalDeposit = 0.0;
    srand(time(NULL));

    cout << "The number of total participants: " << endl;
    cin >> totalParticipants;

    Participant participants[totalParticipants];

    // Set up the participants
    for (int i = 0; i < totalParticipants; i++)
    {
        participants[i].id = i;
        participants[i].inputMoney = (rand() % 951) + 50;
        participants[i].percent = rand() % 101;
        cout << "ID: " << participants[i].id << " | Deposit: " << participants[i].inputMoney << " | Percent Completed: " << participants[i].percent << "%" << endl;
        totalDeposit = totalDeposit + participants[i].inputMoney;
    }

    // Money to be distributed
    int moneyToDistribute = 0;
    int fullCompleteID[totalParticipants] = {};
    int numOfFull = 0;
    int position = 0;

    for (int i = 0; i < totalParticipants; i++)
    {
        if (participants[i].percent < 85)
        {
            moneyToDistribute += 0.01 * (100 - participants[i].percent) * participants[i].inputMoney;
        }

        if (participants[i].percent >= 95)
        {
            participants[i].percent = 100;
        }

        if (participants[i].percent == 100)
        {
            fullCompleteID[position] = participants[i].id;
            ++position;
        }
    }
    
    cout << endl;
    cout << "Totel deposit: " << totalDeposit << endl;
    cout << "Money to be distributed: " << moneyToDistribute << endl;
    cout << "Participants who completed by 100%: " << endl;
    for (int i = 0; i < position; i++)
    {
        cout << "ID: " << participants[fullCompleteID[i]].id << " | Deposit: " << participants[fullCompleteID[i]].inputMoney << " | Percent Completed: " << participants[fullCompleteID[i]].percent << "%" << endl;
    }

    cout << endl; 
    cout << "---------- Calculating the reward for each individual. ----------" << endl;
    for (int i = 0; i < position; i++)
    {
        double proportion = participants[fullCompleteID[i]].inputMoney / totalDeposit;
        participants[fullCompleteID[i]].reward = proportion * moneyToDistribute;
    }

    cout << endl;
    for (int i = 0; i < position; i++)
    {
        cout << "ID: " << participants[fullCompleteID[i]].id << " | Reward: " << participants[fullCompleteID[i]].reward << " HKD." << endl;
    }
    return 0;
}