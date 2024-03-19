#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> mat(10);
    for(int i=1;i<=9;i++){
        mat[i].push_back(0);
        for(int j=1;j<=9;j++){
            int in;
            cin>>in;
            mat[i].push_back(in);
        }
    }
    int n;
    cin>>n;
    while(n--){
        int mode,key;
        cin>>mode>>key;
        bool noNum = true;
        if(mode==-1){
            for(int c=1;c<=9;c++){
                if(mat[key][c]!=0){
                    cout<<mat[key][c]<<' ';
                    noNum=false;
                }
            }
        }
        else if(mode==1){
            for(int r=1;r<=9;r++){
                if(mat[r][key]!=0){
                    cout<<mat[r][key]<<' ';
                    noNum=false;
                }
            }
        }
        else{
            int row = ((key-1)/3 *3)+1;
            int col = ((key-1)%3 *3)+1;
            for(int r=row;r<=row+2;r++){
                for(int c=col;c<=col+2;c++){
                    if(mat[r][c]!=0){
                        cout<<mat[r][c]<<' ';
                        noNum=false;
                    }
                }
            }
        }
        if(noNum) cout<<0;
        cout<<endl;
    }
    // int n;
    // cin<<n;
    // while(n--){
    //     int in;
    //     cin>>in;
    //     if(in == -1){

    //     }
    // }
}