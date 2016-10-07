#include<bits/stdc++.h>
#include<array>

using namespace std ;

bool compare(const array<int, 3>& x, const array<int,3>& y){
    if(x[1] == y[1])
        return x[2] < y[2]; 
    else
        return x[1] < y[1];
}

void ps(vector<array<int,3>> a, int n){
    for(int i = 0 ; i< n ;i ++){
        cout << a[i][0] << "  " << a[i][1] << "   " << a[i][2] << endl ;
    }
}

vector<array<int,3>> buildSuffixArray(char txt[], int n){
    vector<array<int, 3>> suffixes(n); 
    vector<int> indices(n);
    
    // To store the previous rank
    int prerank ; 
    for(int i = 0 ; i < n-1 ; i++){
        suffixes[i] = {i, txt[i]-'a', txt[i+1] - 'a'};
    }
    // This line is changed from suffix array construction 
    // as per the question
    suffixes[n-1] = {n-1, txt[n-1]-'a', txt[0]- 'a'};

    for(int k = 2 ; k < 2*n ; k *= 2){
        stable_sort(suffixes.begin(), suffixes.end(), compare);
        prerank = suffixes[0][1];
        for(int i = 1 ; i < n ; i++){
            // Compare the suffix, if the current suffix is greater than the 
            // previous one (for k characters), then increase the rank 
            // else keep it same
            if(suffixes[i][1] == prerank and suffixes[i][2] == suffixes[i-1][2]){
                suffixes[i][1] = suffixes[i-1][1];
            }

            else{
                prerank = suffixes[i][1];
                suffixes[i][1] = suffixes[i-1][1] + 1 ;
            }
        }

        for(int i = 0 ;i < n ; i++){
            indices[suffixes[i][0]] = i ;           
        }

        for(int i = 0 ; i  < n; i++){
            suffixes[i][2] = suffixes[indices[(suffixes[i][0] + k)%n]][1];
        }
    }

    return suffixes;
}

int main()
{
    char txt[100001];   
    cin >> txt ;
    int n = strlen(txt);
    vector<array<int,3>> sarray ; 
    sarray = buildSuffixArray(txt, n);
    for(int i = 0 ;i < n ; i++){
        cout << sarray[i][0] << endl;
    }
return 0 ;
}
