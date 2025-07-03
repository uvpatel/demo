#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec= {1,2,3,4,5,6,7,8,9,10};
  

    int element;
    cout << "Enter The element index: ";

    cin >> element;

    for (int i = element; i < vec.size(); i++)
    {
       
        vec[i-1] = vec[i];   
        
    }

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    
    
    
    
    return 0;
}