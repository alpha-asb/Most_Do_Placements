void QueueStack :: push(int x)
{
        q1.push(x);
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
         if(q1.empty()){return -1;}
         while(q1.size()!=1){
             int temp = q1.front();
             q1.pop();
             q2.push(temp);
         }
         int res = q1.front();
         q1.pop();
         while(!q2.empty()){
             int temp = q2.front();
             q2.pop();
             q1.push(temp);
         }
         return res;
}
