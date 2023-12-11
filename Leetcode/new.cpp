#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void file_i_o(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
}

int binary_search(vector<int> V, int target){
    int start = 0;
    
    int end = V.size()-1;

    while(start<end){
        
        int mid = start+(end-start)/2;
        if(V[mid] == target)
            return mid;
        else if(target > V[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
return -1;
}

int main(){
    file_i_o();
    vector<vector<int>> V{
        {1,5,9,13},
        {2,6,10,14},
        {7,11,12,15}
    };

    int target = 10;
    int r_count = 0 ;
    int c = 0;
    // n * log(n)
    for(vector<int> row : V){ 
        c = binary_search(row,target);
        if(c==-1)
            {
                r_count++;
                continue;
                }
        else{        
            cout<<r_count<<" "<<c<<endl;
            break;
        }

    }


}