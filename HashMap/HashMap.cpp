#include<bits/stdc++.h>
using namespace std;

int main(){

    //Creation
    unordered_map<string, int> m;

    //Insertion

    //1
    pair<string, int> p = make_pair("Nikhil",1);
    m.insert(p);

    //2
    pair<string, int> pair2("prajapati", 2 );
    m.insert(pair2);

    //3
    m["mera"] = 3;

    //what will happen
    m["mera"] = 5;

    //Searching 
    
    cout << m["mera"] << endl;

    cout << m.at("Nikhil") << endl;

    cout << m["unknown"] << endl;

    cout << m.at("unknown") << endl;

    //size
    cout << m.size() << endl;

    //count
    cout << m.count("Nikhil") << endl;

    //erase

    cout << m.erase("Nikhil")<< endl;;
    cout << m.size() << endl;


    //Iteration 
    //1
    for(auto i : m){
        cout << i.first<< " " << i.second << endl;
    }

    cout << endl;

    //2
    //Making the Iterator
    unordered_map<string, int> :: iterator it = m.begin();

    while( it != m.end()){
        cout << it -> first << " " << it -> second << endl;
        it++;
    }

    cout << m.load_factor();

    return 0;

}