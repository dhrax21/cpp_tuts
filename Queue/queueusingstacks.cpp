class StackQueue{
  private:   
      stack<int> s1;
      stack<int> s2;
  public:
      void push(int);
      int pop();
  }; 
  
  //Function to push an element in queue by using 2 stacks.
  void StackQueue :: push(int x)
  {
      s1.push(x);
  }
  
  //Function to pop an element from queue by using 2 stacks.
  int StackQueue :: pop()
  {
          if(s1.empty() and s2.empty()) return -1;
          
          if(s2.empty()){
              while(!s1.empty()){
                  s2.push(s1.top());
                  s1.pop();
              }
          }
          
          int val=s2.top();
          s2.pop();
          return val;
  }
  