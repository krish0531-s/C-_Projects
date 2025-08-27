#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout << "Enter a number";
    int num = 0;
    cin >> num;
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        if (num %i == 0)
        {
            sum+=i;
        }  
    }
    if(sum == num){
        cout << "Perfect";
    }else{
        cout << "Not Perfect";
    }

    
    
    
}