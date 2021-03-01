// #include<iostream>
// #include<string>
// #include<algorithm>
// #include<math.h>
// using namespace std;

// char Alphabets[16]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};

// int OperationForIndex1(char Code[])
// {
//     int UpperBand=16,LowerBand=0;
//     int AsciValue;
//     for(int i=0;i<4;i++)
//     {
//         AsciValue=((int)Code[i])-48;
//         if(AsciValue==0)
//         { UpperBand=(LowerBand+UpperBand)/2; }
//         else
//         { LowerBand=(LowerBand+UpperBand)/2; }        
//     }
//     return LowerBand+48;
// }

// int OperationForIndex2(char Code[])
// {
//     int Decimal=0;
//     for(int i=0;i<4;i++)
//     {
//         Decimal+=(((int)Code[i])-48)*pow(2,i);
//     }
//     return Decimal+48;
// }

// int  IndexFinder(int Length,char Code[])
// {
//     char Subcode[4];
//     int Result=0,j=0;
//     for(int i=0;i<Length;i=i+4,j=j+2)
//     {
//         Subcode[i%4]=Code[i];
//         Subcode[(i+1)%4]=Code[i+1];
//         Subcode[(i+2)%4]=Code[i+2];
//         Subcode[(i+3)%4]=Code[i+3];
//         Result+=OperationForIndex2(Subcode)*pow(10,j);
//     }
//     return (int)Result;
// }

// void Display(int num)
// {
//     while(num!=0)
//     {
//         cout<<Alphabets[(num%100)-48];
//         num/=100;
//     }
// }

// int main(){
    
//     int pos,Testcases;
//     cin>>Testcases;
//     int Length;
//     int ResultantArray[Testcases];
//     for(int i=0;i<Testcases;i++)
//     { 
//         cin>>Length;
//         char Code[Length];
//         cin>>Code;
//         ResultantArray[i]=IndexFinder(Length,Code);
//     }
//     for(int i=0;i<Testcases;i++)
//     { Display(ResultantArray[i]); cout<<endl; }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int TestCases;
    cin>>TestCases;
    int ResultantArray[TestCases],Length;
    vector<string> Store;
    for(int i=0;i<TestCases;i++)
    {
        cin>>Length;
        string s,ModifiedArr;
        cin>>s;
        for(int j=0;j+4<=Length;j=j+4)
        {
            string SubString=s.substr(j,j+4);
            int n=stoi(SubString,0,2);
            ModifiedArr.push_back(n+97);           
        }
        Store.push_back(ModifiedArr);
    }
    for(int i=0;i<Store.size();i++)
    { cout<<Store[i]<<endl; }
    return 0;
}