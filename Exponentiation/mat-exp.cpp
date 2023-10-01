// Matrix Exponentiation
//Step -1 Find 'k' 
//for fibonacci, f(i) = f(i-1) + f(i-2) i.e. the output depends on last "2" (i-2), hence k = 2
// Step 2 : Find first K terms. Here F1 = | 0 |
//                                        | 1 |                                      
// Step 3: Find Transformation matrix (T) - A matrix of size kxk 
//                                      Such that if  |0 1  | . | f(i-2) | = |F(i-1)
//                                                   | 1 1 |   | f(i-1) |    | F(i) 
//                                          Fn = T Fn-1 = T.T.Fn-2 = T.T.T.Fn-3 = T^(n-1)F1

// Finding transformation Matrix
// assume fi = 1.fi-1 + 2. f i-2 + 0. fi-3 + 4 f(i-4)
// here T = 0 1 0 1
//          0 0 1 0
//          0 0 0 1
//          4 0 2 1

//SEQ - Recursive Sequence
#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;

#define ll long long
#define MOD 1000000000

ll k;
vector<ll> a,b,c;
vector<vector<ll> > multiply(vector<vector<ll> > A,vector<vector<ll> > B){
// logic to multiply matrices
vector<vector<ll> > ans(k+1,vector<ll>(k+1));
for(int i = 1;i<=k;i++){
    for(int j=1;j<=k;j++){
        for(int x=1;x<=k;x++){
            ans[i][j] = ans[i][j]+(A[i][x]*B[x][j]%MOD)%MOD;
        }
    }
}
return ans;
}

vector<vector<ll> > power(vector<vector<ll> > A, ll n){
    //if n=1 return matrix
    // if power is odd
    if(n&1)
        return multiply(A,power(A,n-1));
    //if power is even
    else{ 
        vector<vector<ll> > half = power(A,n/2);
        return multiply(half,half);
        }

}



ll compute(ll n){
    //base cases
    if(n==0)
        return 0;
    
    if(n<=k)
        return b[n-1];
    
    //matrix exp
    vector<ll> F(k+1);

    for(int i=1;i<=k;i++){
        F[i]=b[i-1];
    }
    
    // Transformation matrix
    vector<vector<ll> > T(k+1,vector<ll>(k+1));
    
    for(int i=1;i<=k;i++){
        for(int j=1;j<=k;j++){
           if(i<k)
           { //fill 0 and 1
                if(j == i+1)
                    T[i][j] = 1;
                else
                    T[i][j] = 0;
            }
           else
                {//coefs in reverse order
                T[i][j] = c[k-j];    
                }

        }
    }
T = power(T,n-1);
// multiply Tn-1 with F1
ll res = 0;
for(int i =1;i<=k;i++){
    //just multiply row 1 of T with column of F
    res = (res+(T[1][i]*F[i])%MOD)%MOD;
}

return res;

}

int main(){
    // declare test cases, and the n
    ll t,n;
    cin>>t;
    while(t--){
        cin>>k;
        ll num;
        //vector of initial nos
        for(int i=0;i<k;i++){
          cin>>num;
          b.push_back(num);  
        }
        // coeff vectors
        for(int i=0;i<k;i++){
            cin>>num;
            c.push_back(num);
        cin>>n;
        cout<<compute(n)<<endl;
        b.clear();
        c.clear();
        }
    }


}













