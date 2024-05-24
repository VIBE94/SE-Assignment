
#include "bits/stdc++.h"
using namespace std;

#define endl '\n'


class AlarmClock {
    private:
        struct Alarm {
            string time;
            string day;
            time_t alertTime;
        };

        vector<Alarm> alarms;

    public:
        void display_Current_Time() {
            time_t now = time(nullptr);
            tm* currentTime = localtime(&now);
            cout << "Current time: " << put_time(currentTime, "%H:%M:%S") << endl;
        }

        void create_new_alarm(const string& alarmTime, const string& alarmDay, time_t alertTime) {
            Alarm alarm = { alarmTime, alarmDay, alertTime };
            alarms.push_back(alarm);
            cout << "Alarm set for " << alarmDay << " at " << alarmTime << ". Will alert at " << put_time(localtime(&alertTime), "%H:%M:%S") << endl;
        }

        void snoozeAlarm(int index) {
            if (index >= 0 && index < alarms.size()) { 
                alarms[index].alertTime += 300; // Snooze for 5 minutes (300 seconds)
                cout << "Alarm snoozed. New alert time is " << put_time(localtime(&alarms[index].alertTime), "%H:%M:%S") << endl;
            } else {
                cout << "Invalid alarm index." << endl;
            }
        }
};


void Excuse_Me(int TC)
{
    AlarmClock myAlarmClock;

    myAlarmClock.display_Current_Time();
    myAlarmClock.create_new_alarm("12:00", "Monday", time(nullptr) + 3600);
    myAlarmClock.snoozeAlarm(0); 
    
}
 
signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("error.txt","w",stderr);
    int Tc=1;
    cin>>Tc;
 
    for(int tc=1;tc<=Tc;tc++)
    {
        Excuse_Me(tc);
    }
   
    return 0;
}