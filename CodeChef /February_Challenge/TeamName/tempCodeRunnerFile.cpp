#include<bits/stdc++.h>
#include <unordered_map>
using namespace std; 
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    // map<string, int> M;
    // map<string, int>::iterator itr;
    // M.insert(make_pair("Hello",2));
    // M.insert(make_pair("This",1));
    // M.insert(make_pair("Is",3));
    // unordered_map<string, vector <string>() >  M;
    // map<string, vector <string>() >::iterator  itr;
    // vector <string> v;
    // v.push_back("Hello");
    // // M.insert(make_pair("Hu",v));
    // unordered_map<string, vector<string*> > hashtable;
	// string s="Hello";
	// hashtable["car1"]=vector<string>();
	// hashtable["car1"].push_back(s);
	unordered_map<string,vector<string> > keys;
	unordered_map<string,vector<string> >::iterator itr;cout<<keys["a"].size();

	unordered_map<string,unordered_map<string,int> > p;
	
	// keys["a"] = vector<string>(); // Initialize key with null vector
	string s="a";
	keys[s].push_back("Hi"); // push values into vector.
	keys[s].push_back("Bro");    
	// for(int i : keys["a"] ){
	//     cout << i << "\t";
	// }
	// hashtable["car1"].vector<string*>()->insert("change_oil");
    for(itr=keys.begin();itr!=keys.end();itr++)
    {cout<<itr->first<<" "<<itr->second[1]<<endl;}
	unordered_map<string,int> m;
	m["Hi"]++;;
	cout<<m["Hi"];
    return 0;
}

// C++ program to demonstrate 
// use of map for vectors 

// #include <bits/stdc++.h> 
// using namespace std; 

// map<vector<int>, int> vis; 

// // Print True if vector is visited 
// // or False if not visited 
// void CheckVisited(vector<int> data) 
// { 
// 	if (vis.find(data) != vis.end()) { 
// 		cout << "True" << endl; 
// 	} 
// 	else { 
// 		cout << "False" << endl; 
// 	} 
// } 

// // Driver code 
// int main() 
// { 
// 	// Initializing some vectors 
// 	vector<int> data_1{ 10, 20, 30, 40 }; 
// 	vector<int> data_2{ 5, 10, 15 }; 
// 	vector<int> data_3{ 1, 3, 5, 7, 9, 11, 13 }; 

// 	// Making some vectors as visited 
// 	vis[data_1] = 1; 
// 	vis[data_2] = 1; 
// 	vis[data_3] = 1; 

// 	// checking if these vectors are 
// 	// visited or not 
// 	vector<int> check_1 = { 5, 10, 15 }; 
// 	vector<int> check_2 = { 2, 4, 6, 8, 10, 12 }; 

// 	CheckVisited(check_1); 
// 	CheckVisited(check_2); 

// 	return 0; 
// } 

