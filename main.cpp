#include <iostream>
#include<vector>
using namespace std;

int main()
{
   std::vector<int> Ages = {12,34,54,13,36,87,23};
   std::vector<int>::iterator iter;
   cout<<" vector elements are "<<endl;
    for(iter = Ages.begin(); iter!= Ages.end(); iter++){
     std::cout<<*iter<< " ";
    }
    cout<<endl;
    cout<<" printing in reverse order"<<endl;
     std::vector<int>::iterator Reverse_iter;
    for(Reverse_iter = Ages.end() - 1; Reverse_iter!= Ages.begin() -1; Reverse_iter--){
    std::cout<<*Reverse_iter<<" ";
    }

for(int i  = 7; i<=Ages.size(); i--){
     cout<<Ages[i]<<endl;
}

    return 0;
}
