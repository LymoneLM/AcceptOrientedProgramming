#include <bits/stdc++.h>
using namespace std;

vector<string> findLongestSubarray(vector<string>& array) {
        int it=-1;
        int number=0,letter=0;
        int size = array.size();
        for(int i=0;i<size;i++){
            if(array[i][0]>='0'&&array[i][0]<='9')
                number++;
            else 
                letter++;
            if(number==letter)
                it = i;
        }
        ++it;
        while(array.size()!=it)
            array.pop_back();
        return array;
    }