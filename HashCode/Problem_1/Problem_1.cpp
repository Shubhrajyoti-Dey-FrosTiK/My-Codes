#include<bits/stdc++.h>
#include<unordered_map>
using namespace std; 
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector <ll> vll;
typedef unordered_map <ll,ll> mll;
typedef unordered_map <ll,string> mls;
typedef unordered_map <string,ll> msl;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    
    ull TotalTime, NoOfNodes, NoOfStreets, NoOfCars, Points;
    cin>>TotalTime>>NoOfNodes>>NoOfStreets>>NoOfCars>>Points;
    vector < pair <ull,ull> > StreetNode;
    vector <string> StreetName;
    vector <ull> TimeReq;
    msl PathDensity;

    unordered_map <ull, vector <string> > NodePaths;
    unordered_map <ull, vector <string> >::iterator itr;
    vector <string>::iterator itr2;
    // mll NodeMaxDensity;
    // unordered_map <string,ll>::iterator itr;
    // unordered_map <ll, unordered_map <string,ll> > NodeDensity;
    // ull i=NoOfNodes;
    for(ull i=0;i<NoOfStreets;i++)
    {
        ll Starting,Ending,Time;
        string Name;
        cin>>Starting>>Ending>>ws;
        cin>>Name>>ws;
        cin>>Time>>ws;


       NodePaths[Ending].push_back(Name);

        StreetNode.push_back(make_pair(Starting,Ending));
        // cout<<StreetNode[i].first<<" "<<StreetNode[i].second<<" ";

        StreetName.push_back(Name);
        // cout<<StreetName[i]<<" ";

        TimeReq.push_back(Time);
        // cout<<TimeReq[i]<<endl;
    }
    // itr-<>second->second

    vector<ull> NoOfCarPaths;
    vector<vector<string> > CarPaths;
    for(ull i=0;i<NoOfCars;i++)
    {
        ull paths;
        cin>>paths;
        NoOfCarPaths.push_back(paths);
         vector<string> temp;
        for(ull j=0;j<paths;j++)
        {
            string path;
            cin>>path;
            temp.push_back(path);
            PathDensity[path]++;
        }

        CarPaths.push_back(temp);
        
        // cout<<NoOfCarPaths[i]<<" ";
        // for(ull j=0;j<NoOfCarPaths[i];j++)
        // {
        //     cout<<CarPaths[i][j]<<" ";
        // }
        // cout<<endl;
    }
    mls MaxDensityPath;
    cout<<NoOfNodes<<endl;
    for(itr=NodePaths.begin();itr!=NodePaths.end();itr++)
    {
        ll max=-1;
        string MaxPath;
        for(itr2=itr->second.begin();itr2!=itr->second.end();itr2++)
        {
            if(PathDensity[*itr2]>=max)
            {
                max=PathDensity[*itr2];
                MaxPath=*itr2;
            }
        }
        cout<<itr->first<<endl<<"1"<<endl;
        cout<<MaxPath<<" "<<TotalTime<<endl;
    }
    
    return 0;
}

/*
    vector -> Street -> Starting ,Ending
    vector ->  Street Name
    vector -> Time of that street
    vector -> No of paths for each car
    vector -> vector -> Paths of each car

    NodeDensity -> Key -> NodeNumber
                -> key -> key -> Node of the path -> value -> density

    PathDensity -> No of times the path is traversed
    NodePaths -> The paths which converge into the node
    MaxDensityPath -> The path with max frequency in a node
*/