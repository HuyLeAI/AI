#include <bits/stdc++.h>
using namespace std;

int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
       sort(boxTypes.begin(), boxTypes.end(),[](vector<int> a, vector<int> b){return a[0]*a[1] <= b[0]*b[1];});
        int res = 0, dk = 0;
        int i = 0, n = boxTypes.size();
        while (dk <= truckSize && i < n)
        {
            dk += boxTypes[i][0];
            if (dk > truckSize)
                if (dk - truckSize > 0){
                    res += (dk - truckSize)*boxTypes[i][1];
                    break;
                }
                else
                    break;
            res += boxTypes[i][0]*boxTypes[i][1];
        }
        return res;
}

int main()
{
    vector<vector<int>> boxTypes =  {{1,3},{2,2},{3,1}};
    int truckSize = 4;
    cout << maximumUnits(boxTypes, truckSize);
    return 0;
}
