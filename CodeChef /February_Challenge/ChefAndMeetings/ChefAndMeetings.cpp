#include<bits/stdc++.h>
using namespace std; 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int TestCases;
    cin>>TestCases;
    cin>>ws;
    for(int i=0;i<TestCases;i++)
    {
        string Time;
        getline(cin,Time);
        int NoOfTimes;
        cin>>ws>>NoOfTimes>>ws;
        int hour=((int)Time[0]-48)*10+((int)Time[1]-48);            //Converting hour and time to int
        int min=((int)Time[3]-48)*10+((int)Time[4]-48);
        if(hour==12&&Time[6]=='A'){hour=0;}                         //Converting PM and AM to 24 hrs  
        if(Time[6]=='P'&&hour!=12){hour+=12;}
        for(int j=0;j<NoOfTimes;j++)
        {
            string TimeGiven;
            getline(cin,TimeGiven);
            int hour1=((int)TimeGiven[0]-48)*10+((int)TimeGiven[1]-48); //Converting hour and time to int
            int min1=((int)TimeGiven[3]-48)*10+((int)TimeGiven[4]-48);
            int hour2=((int)TimeGiven[9]-48)*10+((int)TimeGiven[10]-48);
            int min2=((int)TimeGiven[12]-48)*10+((int)TimeGiven[13]-48);
            if(hour1==12&&TimeGiven[6]=='A'){hour1=0;}                  //Converting PM and AM to 24 hrs
            if(TimeGiven[6]=='P'&&hour1!=12){hour1+=12;}
            if(hour2==12&&TimeGiven[15]=='A'){hour2=0;}
            if(TimeGiven[15]=='P'&&hour2!=12){hour2+=12;}
            if(hour1>hour2||(hour1==hour2&&min1>min2)){hour2+=24; hour+=24;}
            int t=hour*60+min;
            int t1=hour1*60+min1;
            int t2=hour2*60+min2;
            if(t1<=t&&t<=t2){cout<<"1";}
            else{cout<<"0";}
        }
        cout<<endl;
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, t, sTime, eTime, mTime;
    
//     cin >> t;
//     fflush(stdin);
//     while (t--)
//     {
//         string meetTime, avTime, start, end, startT, endT, meetT;
//         cin >> meetTime;
//         fflush(stdin);
//         cin >> n;
//         meetTime.replace(2, 1, "");
//         meetT = meetTime.substr(0, 4);
//         mTime = stoi(meetT);
//         while (n>0)
//         {
//             avTime.clear();
//             cin >> avTime;
//             start = avTime.substr(0, 8);
//             end = avTime.substr(9, 8);
//             start.replace(2, 1, "");
//             end.replace(2, 1, "");
//             startT = start.substr(0, 4);
//             endT = end.substr(0, 4);
//             cout << startT;
//             cout << " " << endT;
//             sTime = stoi(startT);
//             eTime = stoi(endT);
//             if (sTime != 1200 && start[6] == 'P')
//                 sTime += 12;
//             if (sTime == 1200 && start[6] == 'A')
//                 sTime = 0;
//             if (sTime <= mTime && eTime >= mTime)
//                 cout << 1;
//             else
//                 {cout << 0;}
//             n--;
//         }
//         cout << "\n";
//     }
//     return 0;
// }