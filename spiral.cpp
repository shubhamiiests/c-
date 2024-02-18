#include <iostream>
#include<vector>
using namespace std;

int main(){
    int m; 
    int n;
    cout << "Enter number of rows: ";
    cin >> m;
     cout << "Enter number of cols: ";
    cin >> n;
   int arr[m][n];
   for (int i=0;i<m;i++){
    for (int j=0;j<n;j++){
        cin>>arr[i][j];
    }
   }
   cout<<endl;
    // spiral
    int minr=0; 
    int minc=0;
    int maxr=m-1;
    int maxc=n-1;
    while(minr<=maxr && minc<=maxc){
        // right
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j]<<" ";
        }
        minr++;
        // down
        if(minr>maxr || minc>maxc)  break;
       
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        // left
        if(minr>maxr || minc>maxc) break;
        
        for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        // up
        if(minr>maxr || minc>maxc)
        break;
        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
    }

}