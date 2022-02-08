#pragma once
template <typename Object>
class Stack
{
public:
    bool isEmpty() const
    {
        return true;
    }
    const Object& top() const
    {
        return theList.front();
    }
    void push(const Object& x)
    {
        theList.push_front(x);
    }
    Object& pop()
    {
        int temp = theList.front();
        theList.pop_front();
        return temp;
    }
private:
    List<Object> theList;
};