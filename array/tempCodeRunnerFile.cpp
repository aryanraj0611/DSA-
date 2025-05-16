int n=arr.size();
    int m=arr[0].size();
    vector<vector<int> > result(n,vector<int>(m));
    int k=1;
    for(int i=0;i<n;i++){
        int l=0;
        for(int j=0;j<m;j++){
            result[l][m-k]=arr[i][j];
            l++;
        }
        k++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j]=result[i][j];
        }
    }