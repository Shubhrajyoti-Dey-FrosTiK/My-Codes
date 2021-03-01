#include<iostream>
using namespace std;

int main()
{
    int TestCases;
    cin>>TestCases;
    int NumberOfSetters, NumberOfQuestionsRequired, NumberOfDays;
    int ResultantArray[TestCases];
    for(int i=0;i<TestCases;i++)
    {
        cin>>NumberOfSetters>>NumberOfQuestionsRequired>>NumberOfDays;
        int NumberOfQuestions,sum=0;
        for(int j=0;j<NumberOfSetters;j++)
        {
            cin>>NumberOfQuestions;
            sum+=NumberOfQuestions;
        }
        sum/=NumberOfQuestionsRequired;
        if(sum>=NumberOfDays)
        { sum=NumberOfDays; }
        ResultantArray[i]=sum;
    }
    for(int i=0;i<TestCases;i++)
    { cout<<ResultantArray[i]<<endl; }
    return 0;
}