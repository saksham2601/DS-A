class Solution {
public:
        void DFS(vector<vector<int>>& image,int sr,int sc,int check){
                if(sr>=0&&sr<image.size()&&sc>=0&&sc<image[0].size()&&image[sr][sc]==check){
                        image[sr][sc]=-1;
                        DFS(image,sr+1,sc,check);
                        DFS(image,sr-1,sc,check);
                        DFS(image,sr,sc+1,check);
                        DFS(image,sr,sc-1,check);
                }
        }



    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        DFS(image,sr,sc,image[sr][sc]);
            for(int i=0;i<image.size();i++){
                    for(int j=0;j<image[0].size();j++)
                    {
                            if(image[i][j]==-1)
                                    image[i][j]=newColor;
                    }
            }
            return image;
    }
};
