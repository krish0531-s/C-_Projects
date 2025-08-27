#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,76,6,};
    int duplicate = 0;
    int count = 0;
    vector<int> checked;
    for (int i = 0; i < sizeof(arr); i++)
    {   
        count = 0;
        for (int j = 1; j < sizeof(arr); j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > 0){
            cout << "Array contains duplicate values";
            break;

        }
        
    }
    return 0;
}

