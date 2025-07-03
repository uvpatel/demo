#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec= {1,2,3,4,5,6,7,8,9,10};

    int target;
    cout << "Enter The Target index: ";

    cin >> target;

    for (int i = 0; i < vec.size(); i++)
    {
        if (target == vec[i])
        {
            cout << "The Value "<< vec[i] <<" at index " << i << endl;
        }
        
    }
    
    return 0;
}