class Solution {
  public:
	void shortest_distance(vector<vector<int>>&matrix){
	    int n = matrix.size();
	    for(int row = 0;row<n;row++){
	        for(int col =0;col<n;col++){
	            if(matrix[row][col] == -1){
	                matrix[row][col] = 1e9;
	            }
	        }
	    }
	    for(int via =0;via<n;via++){
	        for(int row = 0;row<n;row++){
	          for(int col =0;col<n;col++){
	            matrix[row][col] = min(matrix[row][col],matrix[row][via]+matrix[via][col]);
	           }
	        }
	    }
	    for(int row = 0;row<n;row++){
	        for(int col =0;col<n;col++){
	            if(matrix[row][col] == 1e9){
	                matrix[row][col] = -1;
	            }
	        }
	    }
	}
};
