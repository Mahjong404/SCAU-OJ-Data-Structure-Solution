#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> L;
    int n,a,i,x,e;

    cout<<"Please input the init size of the linklist:\n";
    cin>>n;
    cout<<"Please input the "<<n<<" element of the linklist:\n";
    while(n--) {
        cin>>x;
        L.push_back(x);
    }
    cout<<"A Link List Has Created.\n";
    cout<<"The LinkList is:";
    for(int x:L)
        cout<<x<<" ";
    cout<<"\n";

    while(1){
        cout<<"1:Insert element\n2:Delete element\n3:Load all elements\n0:Exit\nPlease choose:\n";
        cin>>a;
        if(a==0) break;

        if(a==1){
            cin>>i>>x;
            if(i<1||i>L.size()+1)
                cout<<"Insert Error!\n";
            else {
                L.insert(L.begin()+i-1,x);
                cout<<"The Element "<<x<<" is Successfully Inserted!\n";
            }
        }

        else if(a==2){
            cin>>i;
            if(i<1||i>L.size())
                cout<<"Delete Error!\n";
            else{
                e=L[i-1];
                L.erase(L.begin()+i-1);
                cout<<"The Element "<<e<<" is Successfully Deleted!\n";
            }
        }

        else if(a==3){
            if(L.empty())
                cout<<"The List is empty!\n";
            else{
                cout<<"The LinkList is:";
                for(int x:L)
                    cout<<x<<" ";
                cout<<"\n";
            }
        }
    }
    return 0;
}
