//Function to push an element in queue by using 2 stacks.

void StackQueue :: push(int x)
{
   s1.push(x);

}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{    if(s2.empty()){
       if(s1.empty()){return -1;}
       while(!s1.empty()){
         int temp = s1.top();
         s2.push(temp);
         s1.pop();
        }
     }
     int res = s2.top();
     s2.pop();
     return res;
}
