class MinStack {
public:
    vector <int> arr;
    vector <int> minArr;
    MinStack() 
    {

    }
    
    void push(int val) 
    {
        if(arr.size() == 0)
        {
            arr.push_back(val);
            minArr.push_back(val);
        }
        else
        {
            arr.push_back(val);
            if(val < minArr.back())
            {
                minArr.push_back(val);
            }
            else
            {
                minArr.push_back(minArr[minArr.size() - 1]);
            }
        }

        
    }
    
    void pop() 
    {
        arr.pop_back();
        minArr.pop_back();
    }
    
    int top() 
    {
        return arr.back();
    }
    
    int getMin() 
    {
        return minArr.back();
    }
};
