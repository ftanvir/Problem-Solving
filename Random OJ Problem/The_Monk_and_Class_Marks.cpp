/*
Hacker Earth Problem
Problem Link: https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/

target: implementation of stl
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int, multiset <string>> marksStudents;
    for(int i=0 ; i<n; i++) {
        int num;
        string name;
        cin>>name>>num;
        marksStudents[num].insert(name);
    }

    auto crStuednt = --marksStudents.end();
    while(true) {
        auto &mark = (*crStuednt).first;
        auto &name = (*crStuednt).second;
        for(auto student: name) {
            cout<<student<<" "<<mark<<endl;
        }
        if(crStuednt==marksStudents.begin()) {
            break;
        }
        crStuednt--;
    }


    return 0;
}