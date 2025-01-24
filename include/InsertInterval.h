#ifndef INSERTINTERVAL_H
#define INSERTINTERVAL_H


#include<vector>
class InsertInterval
{
    public:
        InsertInterval();
        virtual ~InsertInterval();
        std::vector<std::vector<int>> insert(std::vector<std::vector<int>>& intervals, std::vector<int>& newInterval) ;


    protected:

    private:
};

#endif // INSERTINTERVAL_H
