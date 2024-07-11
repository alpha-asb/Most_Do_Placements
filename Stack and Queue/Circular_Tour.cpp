class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {  int total = 0;
       int dist = 0;
       for(int i=0;i<n;i++){
           int petrol = p[i].petrol;
           int distance = p[i].distance;
           
           total +=petrol;
           dist += distance;
           
       } 
       if(total < dist) return -1;
       int ans = 0;
       int curr_tank = 0;
       int curr_dist = 0;
        for(int i=0;i<n;i++){
               curr_tank += p[i].petrol;
               curr_dist += p[i].distance;
               
               if(curr_tank < curr_dist){
                   curr_tank = 0;
                   curr_dist = 0;
                   ans = (i+1)%n;
               }
           }
       return ans;
    }
};
