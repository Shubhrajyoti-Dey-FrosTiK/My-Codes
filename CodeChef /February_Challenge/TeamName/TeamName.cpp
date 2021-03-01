// #include<bits/stdc++.h>
// using namespace std; 
// typedef long long int ll;

// int main()
// {
//     ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
//     int TestCases;
//     cin>>TestCases>>ws;
//     for(ll i=0;i<TestCases;i++)
//     {
//         int NoOfCharacters;
//         cin>>NoOfCharacters>>ws;
//         fflush(stdin);
//         vector <string> V;
//         for(int j=0;j<NoOfCharacters;j++)
//         {string s; cin>>s; V.push_back(s); }
//         // vector <int> alphabets(26,0);
//         ll fact=1;
//         // ll count=0;
//         vector <int> factorial;
//         factorial.push_back(1); factorial.push_back(1);
//         // alphabets[(int)V[0][0]-97]++; alphabets[(int)V[1][0]-97]++;
//         for(int j=2;j<NoOfCharacters;j++)
//         {
//             fact*=j; factorial.push_back(fact); 
//             //if(j<NoOfCharacters){alphabets[(int)V[j][0]-97]++;}
//         }
//         factorial.push_back((NoOfCharacters*fact));
//         // fact*=NoOfCharacters;
//         // ll permutations=fact/factorial[NoOfCharacters-2];
//         // // for(int j=0;j<=26;j++)
//         // // {if(alphabets[j]>1){permutations-=factorial[alphabets[j]]/(factorial[alphabets[j]-2]);}}
//         // // cout<<permutations<<" ";
//         vector <string> Store;
//         ll Count=0;
//         for(int j=0;j<NoOfCharacters;j++)
//         {
//             string dummy1,dummy2;
//             for(int k=j+1;k<NoOfCharacters;k++)
//             {
//                 if(V[j][0]!=V[k][0])
//                 {
//                     dummy1=V[j][0]+V[k].substr(1,V[k].length()-1);
//                     dummy2=V[k][0]+V[j].substr(1,V[j].length()-1);
//                     if(dummy1.compare(V[j])!=0)
//                     {
//                         // cout<<dummy1<<" "<<dummy2<<" "<<dummy1.compare(V[j])<<endl;
//                         Store.push_back(dummy1); Store.push_back(dummy2);
//                     }
//                 }  
//             }
//         }
//         if(Store.empty()){cout<<"0"<<endl; continue;}
//         sort(Store.begin(), Store.end());
//         for(int j=0;j<Store.size();j++)
//         {
//             if((j>0&&Store[j].compare(Store[j-1])!=0)||j==0)
//             {//cout<<Store[j]<<" ";
//                 int flag=1,k,index=0;
//                 for(k=0;k<NoOfCharacters;k++)
//                 {if(V[k].compare(Store[j])==0){flag=0; index=k; break;}}
//                 if(flag==1){Count++; }
//             }
//         }
//         // cout<<permutations;
//         cout<<factorial[Count]/factorial[Count-2]<<endl;
//         V.clear();
//     }
//     return 0;
// }


#include<bits/stdc++.h>
#include<unordered_map>
using namespace std; 
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll TestCases;
    cin>>TestCases>>ws;
    for(int i=0;i<TestCases;i++)
    {
        ll NoOfWords;
        cin>>NoOfWords>>ws;
        ll NoOfDistinctWords=0,Permutations=0;
        //vector<string> WordStore,FirstLetter;
        unordered_map<string,int> WordFrequency,ValidSetKeeper,FirstLetterFrequemcyMap,BodyFrequencyMap;
        //nordered_map<string,vector<string> > FirstLetterMap;
        //unordered_map<string,vector<string> >::iterator itr;
	    unordered_map<string,int>::iterator itr1,itr2;
        // for(int j=0;j<=26;j++)
        // {string s(1,(char)(j+97));  FirstLetterMap[s] = vector<string>();}
        for(ll j=0;j<NoOfWords;j++)
        {
            char Dummy1; 
            string Dummy2,s,total;
            cin>>Dummy1>>Dummy2;  
            s+=Dummy1; total=Dummy1+Dummy2;
            if(WordFrequency[total]==0)
            {
                //WordStore.push_back(total);
                //FirstLetter.push_back(s);
                //FirstLetterMap[s].push_back(total); 
                if(FirstLetterFrequemcyMap[s]==0){FirstLetterFrequemcyMap[s]++;}
                if(BodyFrequencyMap[Dummy2]==0){BodyFrequencyMap[Dummy2]++;}
                WordFrequency[total]++;
                //NoOfDistinctWords++;
            }
        }
        ll fact=1;
        vector <ll> factorial;
        factorial.push_back(1);
        for(ll j=1;j<=NoOfWords;j++)
        {fact*=j; factorial.push_back(fact);}
        // for(itr1=WordFrequency.begin();itr1!=WordFrequency.end();itr1++)
        // {cout<<itr1->first<<" "<<itr1->second<<endl;}
        // cout<<endl;
        for(itr1=BodyFrequencyMap.begin();itr1!=BodyFrequencyMap.end();itr1++)
        {
            for(itr2=FirstLetterFrequemcyMap.begin();itr2!=FirstLetterFrequemcyMap.end();itr2++)
            {
                string s=itr2->first;
                s+=itr1->first;
                
                // cout<<s<<" ";
                if(WordFrequency[s]==0&&ValidSetKeeper[s]==0)
                {ValidSetKeeper[s]++; WordFrequency[s]++; Permutations++;}
            }
        }
        if(Permutations<2){cout<<"0"<<endl; continue;}
        cout<<factorial[Permutations]/factorial[Permutations-2]<<endl;
        // for(itr1=ValidSetKeeper.begin();itr1!=ValidSetKeeper.end();itr1++)
        // {cout<<itr1->first<<" ";}
        // cout<<endl<<endl;
        // WordFrequency.clear(); FirstLetterFrequemcyMap.clear(); ValidSetKeeper.clear(); BodyFrequencyMap.clear();
        // cout<<NoOfDistinctWords;
        // for(itr=FirstLetterFrequemcyMap.begin();itr!=FirstLetterFrequemcyMap.end();itr++)
        // {cout<<itr->first<<" "<<itr->second<<endl;}

    }
    return 0;
}
