class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    unordered_map <int , int> position;
    for(int i = 0 ; i < arr2.size() ; i++)
        position[arr2[i]] = i;
    sort(arr1.begin() , arr1.end() , [&](const int &first , const int &second)
     {
         if(position.find(first) == position.end() && position.find(second) == position.end())
             return first < second;
         if(position.find(first) == position.end())
             return false;
         if(position.find(second) == position.end())
             return true;
         return position[first] < position[second];
     });
    return arr1;
}
};