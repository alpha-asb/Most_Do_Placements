class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int newColor,int currColor){
        image[sr][sc] = newColor;
        if(sr-1 >= 0 && image[sr-1][sc] == currColor){
            dfs(image,sr-1,sc,newColor,currColor);
        }
        if(sr+1 < image.size() && image[sr+1][sc] == currColor){
            dfs(image,sr+1,sc,newColor,currColor);
        }
        if(sc-1 >= 0 && image[sr][sc-1] == currColor){
            dfs(image,sr,sc-1,newColor,currColor);
        }
        if(sc+1 < image[0].size() && image[sr][sc+1] == currColor){
            dfs(image,sr,sc+1,newColor,currColor);
        }
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc] == newColor)return image;
        dfs(image,sr,sc,newColor,image[sr][sc]);
        return image;
    }
};
