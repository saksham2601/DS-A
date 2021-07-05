vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image)
    {
        int m = image.size();
        int n = image[0].size();
        vector<vector<int>> arr(m, vector<int>(n));
        for(int i=0;i<m;i++)
        {
            int k=0;
            for(int j=n-1;j>=0;j--)
            {
                if(image[i][j]==0)
                    arr[i][k]=1;
                else
                    arr[i][k] = 0;
                k++;
            }
        }

        return arr;
    }
