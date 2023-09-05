#ifndef LIB_COUNTER_H_
#define LIB_COUNTER_H_


class Counter
{
private:
    int m_count;

public:
    Counter(int count);

    void increment(int no);

    int getCount();
};

#endif